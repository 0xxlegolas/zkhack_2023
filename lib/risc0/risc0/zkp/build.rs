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

use std::env;

fn main() {
    if env::var("CARGO_FEATURE_CUDA").is_ok() {
        let cuda_bin = env::var("DEP_RISC0_SYS_CUDA_KERNELS_ZKP")
            .expect("CARGO_FEATURE_CUDA is defined, but DEP_RISC0_SYS_CUDA_KERNELS_ZKP is not");
        println!("cargo:rustc-env=ZKP_CUDA_PATH={cuda_bin}");
    }

    if env::var("CARGO_FEATURE_METAL").is_ok() {
        let metal_bin = env::var("DEP_RISC0_SYS_METAL_KERNELS_ZKP")
            .expect("CARGO_FEATURE_METAL is defined, but DEP_RISC0_SYS_METAL_KERNELS_ZKP is not");
        println!("cargo:rustc-env=ZKP_METAL_PATH={metal_bin}");
    }
}
