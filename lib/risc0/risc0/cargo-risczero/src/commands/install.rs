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

// This is based on cargo-wasix: https://github.com/wasix-org/cargo-wasix

use std::{
    fs::File,
    io::BufReader,
    path::{Path, PathBuf},
};

use anyhow::{bail, Context, Result};
use clap::Parser;
use downloader::{Download, Downloader};
use flate2::bufread::GzDecoder;
use reqwest::{header::HeaderMap, Client};
use reqwest_middleware::{ClientBuilder, ClientWithMiddleware};
use reqwest_retry::{policies::ExponentialBackoff, RetryTransientMiddleware};
use serde::Deserialize;
use tar::Archive;
use tempfile::tempdir;

use crate::{
    toolchain::{RustupToolchain, RUSTUP_TOOLCHAIN_NAME, RUST_REPO},
    utils::{flock, risc0_data},
};

/// `cargo risczero install`
#[derive(Parser)]
pub struct Install {
    #[arg(long)]
    version: Option<String>,
}

/// Release returned by Github API.
#[derive(Deserialize)]
struct GithubReleaseData {
    assets: Vec<GithubAsset>,
    tag_name: String,
}

/// Release asset returned by Github API.
#[derive(Deserialize)]
struct GithubAsset {
    browser_download_url: String,
    name: String,
}

const TOKEN_MSG: &str =
    "Setting the GITHUB_TOKEN environment variable is supported to avoid IP throttling by GitHub.";

impl Install {
    pub fn run(&self) -> Result<()> {
        let root_dir = risc0_data()?;
        let lockfile_path = root_dir.join("rustup-lock");
        let _lock = flock(&lockfile_path);

        let toolchain_dir = root_dir.join("toolchains");
        let chain = self.install_prebuilt_toolchain(&toolchain_dir)?;

        eprintln!(
            "Toolchain {} downloaded and installed to path {}.",
            chain.name,
            chain.path.display()
        );
        eprintln!("The risc0 toolchain is now ready to use.");

        Ok(())
    }

    /// Tries to download a pre-built toolchain if possible.
    ///
    /// Returns the path to the toolchain.
    fn install_prebuilt_toolchain(&self, toolchain_dir: &Path) -> Result<RustupToolchain> {
        if let Some(target) = guess_host_target() {
            match self.download_toolchain(target, toolchain_dir) {
                Ok(path) => RustupToolchain::link(RUSTUP_TOOLCHAIN_NAME, &path.join("rust")),
                Err(err) => {
                    eprintln!("Could not download pre-built toolchain: {err:?}");
                    Err(err.context("Download of pre-built toolchain failed"))
                }
            }
        } else {
            bail!("The risc0 toolchain is not available for download on this platform. Build it yourself with: 'cargo risczero build-toolchain'")
        }
    }

    /// Download a pre-built toolchain from Github releases.
    fn download_toolchain(&self, target: &str, toolchains_root_dir: &Path) -> Result<PathBuf> {
        let mut headers = HeaderMap::new();

        // Use api token if specified via env var.
        // Prevents 403 errors when IP is throttled by Github API.
        let gh_token = std::env::var("GITHUB_TOKEN")
            .ok()
            .map(|x| x.trim().to_string())
            .filter(|x| !x.is_empty());

        if let Some(token) = gh_token {
            headers.insert("authorization", format!("Bearer {token}").parse()?);
        }

        let client = Client::builder()
            .default_headers(headers)
            .user_agent("cargo-risczero")
            .build()?;
        let temp_dir = tempdir()?;
        let mut downloader = Downloader::builder()
            .download_folder(temp_dir.path())
            .build_with_client(client.clone())?;

        let retry_policy = ExponentialBackoff::builder().build_with_max_retries(3);
        let client = ClientBuilder::new(client)
            .with(RetryTransientMiddleware::new_with_policy(retry_policy))
            .build();
        let rt = tokio::runtime::Runtime::new()?;

        let (tag_name, download_url) = rt.block_on(self.get_download_url(&client, target))?;

        let toolchain_dir = toolchains_root_dir.join(format!("{target}_{}", tag_name));
        if toolchain_dir.is_dir() {
            eprintln!(
                "Toolchain path {} already exists - deleting existing files!",
                toolchain_dir.display()
            );
            std::fs::remove_dir_all(&toolchain_dir)?;
        }

        // Download.
        eprintln!("Downloading Rust toolchain from url '{}'...", &download_url);
        let rust_dir = toolchain_dir.join("rust");

        let dl = Download::new(&download_url);
        let results = downloader.download(&[dl])?;
        for result in results {
            let summary = result.context(format!("Download failed. {TOKEN_MSG}"))?;
            let tarball = File::open(summary.file_name)?;
            eprintln!("Extracting...");
            let decoder = GzDecoder::new(BufReader::new(tarball));
            let mut archive = Archive::new(decoder);
            archive.unpack(&rust_dir)?;
        }

        // Ensure permissions.
        #[cfg(target_family = "unix")]
        {
            use std::os::unix::fs::PermissionsExt;

            let iter1 = std::fs::read_dir(rust_dir.join("bin"))?;
            let iter2 = std::fs::read_dir(rust_dir.join(format!("lib/rustlib/{target}/bin")))?;

            // Make sure the binaries can be executed.
            for res in iter1.chain(iter2) {
                let entry = res?;
                if entry.file_type()?.is_file() {
                    let mut perms = entry.metadata()?.permissions();
                    perms.set_mode(0o755);
                    std::fs::set_permissions(entry.path(), perms)?;
                }
            }
        }

        eprintln!("Downloaded toolchain {} to {}", target, rust_dir.display());

        Ok(toolchain_dir)
    }

    async fn get_download_url(
        &self,
        client: &ClientWithMiddleware,
        target: &str,
    ) -> Result<(String, String)> {
        let tag = self
            .version
            .clone()
            .map_or("latest".to_string(), |tag| format!("tags/{tag}"));

        let repo = RUST_REPO
            .trim_start_matches("https://github.com/")
            .trim_end_matches(".git");
        let release_url = format!("https://api.github.com/repos/{repo}/releases/{tag}");

        eprintln!("Getting release info: {release_url}...");

        let release: GithubReleaseData = client
            .get(&release_url)
            .send()
            .await?
            .error_for_status()
            .context(format!("Could not download release info. {TOKEN_MSG}"))?
            .json()
            .await
            .context("Could not deserialize release info")?;

        // Try to find the asset for the wanted target triple.
        let rust_asset_name = format!("rust-toolchain-{target}.tar.gz");
        let rust_asset = release
            .assets
            .iter()
            .find(|asset| asset.name == rust_asset_name)
            .with_context(|| {
                format!(
                    "Release {} does not have a prebuilt toolchain for host {}",
                    release.tag_name, target
                )
            })?;

        Ok((release.tag_name, rust_asset.browser_download_url.clone()))
    }
}

/// Try to get the host target triple.
///
/// Only checks for targets that have pre-built toolchains.
#[allow(unreachable_code)]
fn guess_host_target() -> Option<&'static str> {
    #[cfg(all(target_arch = "x86_64", target_os = "linux"))]
    return Some("x86_64-unknown-linux-gnu");

    #[cfg(all(target_arch = "x86_64", target_os = "macos"))]
    return Some("x86_64-apple-darwin");

    #[cfg(all(target_arch = "aarch64", target_os = "macos"))]
    return Some("aarch64-apple-darwin");

    #[cfg(all(target_arch = "x86_64", target_os = "windows"))]
    return Some("x86_64-pc-windows-msvc");

    None
}
