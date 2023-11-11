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

use digital_signature_core::{Message, Passphrase, SigningRequest};
use risc0_zkvm::ExecutorEnv;
use sha2::{Digest, Sha256};

use crate::{exec, CycleCounter, Metrics};

pub struct Job {}

impl CycleCounter for Job {
    const NAME: &'static str = "digital-signature";
    const METHOD_ELF: &'static [u8] = digital_signature_methods::SIGN_ELF;

    fn run() -> Metrics {
        let params = SigningRequest {
            passphrase: Passphrase {
                pass: Sha256::digest("passphrase").try_into().unwrap(),
            },
            msg: Message {
                msg: Sha256::digest("message").try_into().unwrap(),
            },
        };
        let env = ExecutorEnv::builder()
            .write(&params)
            .unwrap()
            .build()
            .unwrap();

        exec(Self::NAME, Self::METHOD_ELF, env)
    }
}
