// Copyright 2023 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#![doc = include_str!("../README.md")]
#![deny(missing_docs)]
#![deny(rustdoc::broken_intra_doc_links)]

mod docker;

use std::{
    collections::HashMap,
    default::Default,
    env,
    fs::{self, File},
    io::{stderr, BufRead, BufReader, Write},
    path::{Path, PathBuf},
    process::{Command, Stdio},
};

use cargo_metadata::{Message, MetadataCommand, Package};
pub use docker::docker_build;
use risc0_binfmt::{MemoryImage, Program};
use risc0_zkp::core::digest::{Digest, DIGEST_WORDS};
use risc0_zkvm_platform::{memory, PAGE_SIZE};
use serde::Deserialize;

const RUSTUP_TOOLCHAIN_NAME: &str = "risc0";

#[derive(Debug, Deserialize)]
struct Risc0Metadata {
    methods: Vec<String>,
}

impl Risc0Metadata {
    fn from_package(pkg: &Package) -> Option<Risc0Metadata> {
        let obj = pkg.metadata.get("risc0").unwrap();
        serde_json::from_value(obj.clone()).unwrap()
    }
}

/// Represents an item in the generated list of compiled guest binaries
#[cfg(feature = "guest-list")]
#[derive(Debug, Clone)]
pub struct GuestListEntry<'a> {
    /// The name of the guest binary
    pub name: &'a str,
    /// The compiled ELF guest binary
    pub elf: &'a [u8],
    /// The image id of the guest
    pub image_id: [u32; DIGEST_WORDS],
    /// The path to the ELF binary
    pub path: &'a str,
}

#[derive(Debug)]
struct Risc0Method {
    name: String,
    elf_path: PathBuf,
}

impl Risc0Method {
    fn make_image_id(&self) -> Digest {
        if !self.elf_path.exists() {
            eprintln!(
                "RISC-V method was not found at: {:?}",
                self.elf_path.to_str().unwrap()
            );
            std::process::exit(-1);
        }

        let elf = fs::read(&self.elf_path).unwrap();
        let program = Program::load_elf(&elf, memory::GUEST_MAX_MEM as u32).unwrap();
        let image = MemoryImage::new(&program, PAGE_SIZE as u32).unwrap();
        image.compute_id()
    }

    fn rust_def(&self) -> String {
        let elf_path = self.elf_path.display();

        // Quick check for '#' to avoid injection of arbitrary Rust code into the the
        // method.rs file. This would not be a serious issue since it would only
        // affect the user that set the path, but it's good to add a check.
        if elf_path.to_string().contains('#') {
            panic!("method path cannot include #: {}", elf_path);
        }

        let upper = self.name.to_uppercase().replace('-', "_");
        let image_id: [u32; DIGEST_WORDS] = self.make_image_id().into();
        let elf_contents = std::fs::read(&self.elf_path).unwrap();
        format!(
            r##"
pub const {upper}_ELF: &[u8] = &{elf_contents:?};
pub const {upper}_ID: [u32; 8] = {image_id:?};
pub const {upper}_PATH: &str = r#"{elf_path}"#;
"##
        )
    }

    #[cfg(feature = "guest-list")]
    fn guest_list_entry(&self) -> String {
        let upper = self.name.to_uppercase().replace('-', "_");
        format!(
            r##"
    GuestListEntry {{
        name: "{upper}",
        elf: {upper}_ELF,
        image_id: {upper}_ID,
        path: {upper}_PATH,
    }}"##
        )
    }
}

/// Returns the given cargo Package from the metadata in the Cargo.toml manifest
/// within the provided `manifest_dir`.
pub fn get_package(manifest_dir: impl AsRef<Path>) -> Package {
    let manifest_path = manifest_dir.as_ref().join("Cargo.toml");
    let manifest_meta = MetadataCommand::new()
        .manifest_path(&manifest_path)
        .no_deps()
        .exec()
        .expect("cargo metadata command failed");
    let mut matching: Vec<Package> = manifest_meta
        .packages
        .into_iter()
        .filter(|pkg| {
            let std_path: &Path = pkg.manifest_path.as_ref();
            std_path == manifest_path
        })
        .collect();
    if matching.is_empty() {
        eprintln!(
            "ERROR: No package found in {}",
            manifest_dir.as_ref().display()
        );
        std::process::exit(-1);
    }
    if matching.len() > 1 {
        eprintln!(
            "ERROR: Multiple packages found in {}",
            manifest_dir.as_ref().display()
        );
        std::process::exit(-1);
    }
    matching.pop().unwrap()
}

/// Determines and returns the build target directory from the Cargo manifest at
/// the given `manifest_path`.
pub fn get_target_dir(manifest_path: impl AsRef<Path>) -> PathBuf {
    MetadataCommand::new()
        .manifest_path(manifest_path.as_ref())
        .no_deps()
        .exec()
        .expect("cargo metadata command failed")
        .target_directory
        .into()
}

/// When called from a build.rs, returns the current package being built.
fn current_package() -> Package {
    get_package(env::var("CARGO_MANIFEST_DIR").unwrap())
}

/// Returns all inner packages specified the "methods" list inside
/// "package.metadata.risc0".
fn guest_packages(pkg: &Package) -> Vec<Package> {
    let manifest_dir = pkg.manifest_path.parent().unwrap();
    Risc0Metadata::from_package(pkg)
        .unwrap()
        .methods
        .iter()
        .map(|inner| get_package(manifest_dir.join(inner)))
        .collect()
}

fn is_debug() -> bool {
    get_env_var("RISC0_BUILD_DEBUG") == "1"
}

/// Returns all methods associated with the given riscv guest package.
fn guest_methods(pkg: &Package, target_dir: impl AsRef<Path>) -> Vec<Risc0Method> {
    let profile = if is_debug() { "debug" } else { "release" };
    pkg.targets
        .iter()
        .filter(|target| target.kind.iter().any(|kind| kind == "bin"))
        .map(|target| Risc0Method {
            name: target.name.clone(),
            elf_path: target_dir
                .as_ref()
                .join("riscv32im-risc0-zkvm-elf")
                .join(profile)
                .join(&target.name),
        })
        .collect()
}

/// Returns all methods associated with the given riscv guest package.
fn guest_methods_docker<P>(pkg: &Package, target_dir: P) -> Vec<Risc0Method>
where
    P: AsRef<Path>,
{
    pkg.targets
        .iter()
        .filter(|target| target.kind.iter().any(|kind| kind == "bin"))
        .map(|target| Risc0Method {
            name: target.name.clone(),
            elf_path: target_dir
                .as_ref()
                .join("riscv32im-risc0-zkvm-elf")
                .join("docker")
                .join(pkg.name.replace("-", "_"))
                .join(&target.name),
        })
        .collect()
}

fn get_env_var(name: &str) -> String {
    println!("cargo:rerun-if-env-changed={name}");
    env::var(name).unwrap_or_default()
}

/// Build a [Command] with CARGO and RUSTUP_TOOLCHAIN environment variables
/// removed.
fn sanitized_cmd(tool: &str) -> Command {
    let mut cmd = Command::new(tool);
    for (key, _val) in env::vars().filter(|x| x.0.starts_with("CARGO")) {
        cmd.env_remove(key);
    }
    cmd.env_remove("RUSTUP_TOOLCHAIN");
    cmd
}

/// Creates a std::process::Command to execute the given cargo
/// command in an environment suitable for targeting the zkvm guest.
pub fn cargo_command(subcmd: &str, rust_flags: &[&str]) -> Command {
    let rustc = sanitized_cmd("rustup")
        .args(["+risc0", "which", "rustc"])
        .output()
        .expect("rustup failed to find risc0 toolchain")
        .stdout;

    let rustc = String::from_utf8(rustc).unwrap();
    let rustc = rustc.trim();
    println!("Using rustc: {rustc}");

    let mut cmd = sanitized_cmd("cargo");
    let mut args = vec![subcmd, "--target", "riscv32im-risc0-zkvm-elf"];

    if std::env::var("RISC0_BUILD_LOCKED").is_ok() {
        args.push("--locked");
    }

    let rust_src = get_env_var("RISC0_RUST_SRC");
    if !rust_src.is_empty() {
        args.push("-Z");
        args.push("build-std=alloc,core,proc_macro,panic_abort,std");
        args.push("-Z");
        args.push("build-std-features=compiler-builtins-mem");
        cmd.env("__CARGO_TESTS_ONLY_SRC_ROOT", rust_src);
    }

    println!("Building guest package: cargo {}", args.join(" "));

    let rustflags_envvar = [
        rust_flags,
        &[
            // Replace atomic ops with nonatomic versions since the guest is single threaded.
            "-C",
            "passes=loweratomic",
            // Specify where to start loading the program in
            // memory.  The clang linker understands the same
            // command line arguments as the GNU linker does; see
            // https://ftp.gnu.org/old-gnu/Manuals/ld-2.9.1/html_mono/ld.html#SEC3
            // for details.
            "-C",
            &format!("link-arg=-Ttext=0x{:08X}", memory::TEXT_START),
            // Apparently not having an entry point is only a linker warning(!), so
            // error out in this case.
            "-C",
            "link-arg=--fatal-warnings",
            "-C",
            "panic=abort",
        ],
    ]
    .concat()
    .join("\x1f");

    cmd.env("RUSTC", rustc)
        .env("CARGO_ENCODED_RUSTFLAGS", rustflags_envvar)
        .args(args);

    cmd
}

/// Builds a static library providing a rust runtime.
///
/// This can be used to build programs for the zkvm which don't depend on
/// risc0_zkvm.
pub fn build_rust_runtime() -> String {
    build_staticlib(
        "risc0-zkvm-platform",
        &[
            "rust-runtime",
            "panic-handler",
            "entrypoint",
            "export-getrandom",
        ],
    )
}

/// Builds a static library and returns the name of the resultant file.
fn build_staticlib(guest_pkg: &str, features: &[&str]) -> String {
    let guest_dir = get_guest_dir();

    let mut cmd = cargo_command("rustc", &[]);

    if !is_debug() {
        cmd.arg("--release");
    }

    // Add args to specify the package to be built, and to build is as a staticlib.
    cmd.args(&[
        "--package",
        guest_pkg,
        "--target-dir",
        guest_dir.to_str().unwrap(),
        "--lib",
        "--message-format=json",
        "--crate-type=staticlib",
    ]);

    for feature in features {
        cmd.args(&["--features", &(guest_pkg.to_owned() + "/" + feature)]);
    }

    eprintln!("Building staticlib: {:?}", cmd);

    // Run the build command and extract the name of the resulting staticlib
    // artifact.
    let mut child = cmd.stdout(Stdio::piped()).spawn().unwrap();
    let reader = std::io::BufReader::new(child.stdout.take().unwrap());
    let mut libs = Vec::new();
    for message in cargo_metadata::Message::parse_stream(reader) {
        match message.unwrap() {
            Message::CompilerArtifact(artifact) => {
                for filename in artifact.filenames {
                    if let Some("a") = filename.extension() {
                        libs.push(filename.to_string());
                    }
                }
            }
            Message::CompilerMessage(msg) => {
                write!(stderr(), "{}", msg).unwrap();
            }
            _ => (),
        }
    }

    let output = child.wait().expect("Couldn't get cargo's exit status");
    if !output.success() {
        panic!("Unable to build static library")
    }

    match libs.as_slice() {
        [] => panic!("No static library was built"),
        [lib] => lib.to_string(),
        _ => panic!("Multiple static libraries found: {:?}", libs.as_slice()),
    }
}

// Builds a package that targets the riscv guest into the specified target
// directory.
fn build_guest_package<P>(
    pkg: &Package,
    target_dir: P,
    guest_opts: &GuestOptions,
    runtime_lib: Option<&str>,
) where
    P: AsRef<Path>,
{
    if !get_env_var("RISC0_SKIP_BUILD").is_empty() {
        return;
    }

    fs::create_dir_all(target_dir.as_ref()).unwrap();

    let mut cmd = if let Some(lib) = runtime_lib {
        cargo_command("build", &["-C", &format!("link_arg={}", lib)])
    } else {
        cargo_command("build", &[])
    };

    let features_str = guest_opts.features.join(",");
    if !features_str.is_empty() {
        cmd.args(&["--features", &features_str]);
    }

    cmd.args(&[
        "--manifest-path",
        pkg.manifest_path.as_str(),
        "--target-dir",
        target_dir.as_ref().to_str().unwrap(),
    ]);

    if !is_debug() {
        cmd.args(&["--release"]);
    }

    let mut child = cmd
        .stderr(Stdio::piped())
        .spawn()
        .expect("cargo build failed");
    let stderr = child.stderr.take().unwrap();

    // HACK: Attempt to bypass the parent cargo output capture and
    // send directly to the tty, if available.  This way we get
    // progress messages from the inner cargo so the user doesn't
    // think it's just hanging.
    let tty_file = env::var("RISC0_GUEST_LOGFILE").unwrap_or_else(|_| "/dev/tty".to_string());

    let mut tty = fs::OpenOptions::new()
        .read(true)
        .write(true)
        .create(true)
        .open(tty_file)
        .ok();

    if let Some(tty) = &mut tty {
        writeln!(
            tty,
            "{}: Starting build for riscv32im-risc0-zkvm-elf",
            pkg.name
        )
        .unwrap();
    }

    for line in BufReader::new(stderr).lines() {
        match &mut tty {
            Some(tty) => writeln!(tty, "{}: {}", pkg.name, line.unwrap()).unwrap(),
            None => eprintln!("{}", line.unwrap()),
        }
    }

    let res = child.wait().expect("Guest 'cargo build' failed");
    if !res.success() {
        std::process::exit(res.code().unwrap());
    }
}

fn detect_toolchain(name: &str) {
    let result = Command::new("rustup")
        .args(["toolchain", "list", "--verbose"])
        .stderr(Stdio::inherit())
        .output()
        .unwrap();
    if !result.status.success() {
        eprintln!("Failed to run: 'rustup toolchain list --verbose'");
        std::process::exit(result.status.code().unwrap());
    }

    let stdout = String::from_utf8(result.stdout).unwrap();
    if stdout
        .lines()
        .find(|line| line.trim().starts_with(name))
        .is_none()
    {
        eprintln!("The 'risc0' toolchain could not be found.");
        eprintln!("To install the risc0 toolchain, use cargo-risczero.");
        eprintln!("For example:");
        eprintln!("  cargo binstall cargo-risczero");
        eprintln!("  cargo risczero install");
        std::process::exit(-1);
    }
}

/// Options for configuring a docker build environment.
pub struct DockerOptions {
    /// Specify the root directory for docker builds.
    ///
    /// The current working directory is used if `None` is specified.
    pub root_dir: Option<PathBuf>,
}

/// Options defining how to embed a guest package in
/// [`embed_methods_with_options`].
#[derive(Default)]
pub struct GuestOptions {
    /// Features for cargo to build the guest with.
    pub features: Vec<String>,

    /// Use a docker environment for building.
    pub use_docker: Option<DockerOptions>,
}

fn get_guest_dir() -> PathBuf {
    // Determine the output directory, in the target folder, for the guest binary.
    let out_dir_env = env::var_os("OUT_DIR").unwrap();
    let out_dir = Path::new(&out_dir_env); // $ROOT/target/$profile/build/$crate/out
    out_dir
        .parent() // out
        .unwrap()
        .parent() // $crate
        .unwrap()
        .parent() // build
        .unwrap()
        .parent() // $profile
        .unwrap()
        .join("riscv-guest")
        .into()
}

/// Embeds methods built for RISC-V for use by host-side dependencies.
/// Specify custom options for a guest package by defining its [GuestOptions].
/// See [embed_methods].
pub fn embed_methods_with_options(mut guest_pkg_to_options: HashMap<&str, GuestOptions>) {
    let out_dir_env = env::var_os("OUT_DIR").unwrap();
    let out_dir = Path::new(&out_dir_env); // $ROOT/target/$profile/build/$crate/out
    let guest_dir = get_guest_dir();
    // Read the cargo metadata for info from `[package.metadata.risc0]`.
    let pkg = current_package();
    let guest_packages = guest_packages(&pkg);
    let methods_path = out_dir.join("methods.rs");
    let mut methods_file = File::create(&methods_path).unwrap();

    #[cfg(feature = "guest-list")]
    let mut guest_list_entries = Vec::new();
    #[cfg(feature = "guest-list")]
    methods_file
        .write_all(b"use risc0_build::GuestListEntry;\n")
        .unwrap();

    detect_toolchain(RUSTUP_TOOLCHAIN_NAME);

    for guest_pkg in guest_packages {
        println!("Building guest package {}.{}", pkg.name, guest_pkg.name);

        let guest_opts = guest_pkg_to_options
            .remove(guest_pkg.name.as_str())
            .unwrap_or_default();

        let methods = if let Some(docker_opts) = guest_opts.use_docker {
            let src_dir = docker_opts
                .root_dir
                .unwrap_or_else(|| std::env::current_dir().unwrap());
            docker_build(
                guest_pkg.manifest_path.as_std_path(),
                &src_dir,
                &guest_opts.features,
            )
            .unwrap();
            guest_methods_docker(&guest_pkg, &guest_dir)
        } else {
            build_guest_package(&guest_pkg, &guest_dir, &guest_opts, None);
            guest_methods(&guest_pkg, &guest_dir)
        };

        for method in methods {
            methods_file
                .write_all(method.rust_def().as_bytes())
                .unwrap();

            #[cfg(feature = "guest-list")]
            guest_list_entries.push(method.guest_list_entry());
        }
    }
    #[cfg(feature = "guest-list")]
    methods_file
        .write_all(
            format!(
                "\npub const GUEST_LIST: &[GuestListEntry] = &[{}];\n",
                guest_list_entries.join(",")
            )
            .as_bytes(),
        )
        .unwrap();

    // HACK: It's not particularly practical to figure out all the
    // files that all the guest crates transtively depend on.  So, we
    // want to run the guest "cargo build" command each time we build.
    //
    // Since we generate methods.rs each time we run, it will always
    // be changed.
    println!("cargo:rerun-if-changed={}", methods_path.display());
}

/// Embeds methods built for RISC-V for use by host-side dependencies.
///
/// This method should be called from a package with a
/// [package.metadata.risc0] section including a "methods" property
/// listing the relative paths that contain riscv guest method
/// packages.
///
/// To access the generated image IDs and ELF filenames, include the
/// generated methods.rs:
///
/// ```text
/// include!(concat!(env!("OUT_DIR"), "/methods.rs"));
/// ```
///
/// To conform to rust's naming conventions, the constants are mapped
/// to uppercase.  For instance, if you have a method named
/// "my_method", the image ID and elf contents will be defined as
/// "MY_METHOD_ID" and "MY_METHOD_ELF" respectively.
pub fn embed_methods() {
    embed_methods_with_options(HashMap::new())
}
