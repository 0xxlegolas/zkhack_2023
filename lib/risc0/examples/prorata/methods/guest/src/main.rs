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

#![no_main]

use prorata_core::AllocationQuery;
use risc0_zkvm::guest::env;

risc0_zkvm::guest::entry!(main);

pub fn main() {
    // Load the amount, recipients, and target user sent from the host:
    let query: AllocationQuery = env::read();

    // Compute the allocation for the requested target recipient:
    let result = query.compute_result();

    // Commit the allocation and query to the journal for inclusion in the receipt:
    env::commit(&result);
}
