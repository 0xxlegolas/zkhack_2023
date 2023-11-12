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

use std::io::Read;

use ethabi::{ethereum_types::U256, ParamType, Token, Address};
use risc0_zkvm::guest::env;
use rand::Rng;  // Import the Rng trait
use rand::distributions::{Distribution, Uniform};
risc0_zkvm::guest::entry!(main);

struct UserData {
    total_transactions: u32,
    successful_transactions: u32,
    failed_transactions: u32,
    loan_repayments: u32,
    defaults: u32,
    average_transaction_value: f32,
    account_age_days: u32,
}

fn calculate_credit_score(_user: Address) -> U256 {

    // Randomize the data for the user Since I could not read it from local
    let mut rng = rand::thread_rng(); // Create a random number generator
    // Randomize total_transactions between 50 and 150 for example
    let total_transactions: u32 = rng.gen_range(50..=150);

    // Randomize account_age_days between 100 and 1000 for example
    let account_age_dist = Uniform::from(100..=1000);
    let account_age_days: u32 = account_age_dist.sample(&mut rng);

    //To do read this from json file
    let address_data = UserData {
        total_transactions,
        successful_transactions: 80,
        failed_transactions: 20,
        loan_repayments: 50,
        defaults: 10,
        average_transaction_value: 500.0, // Example value
        account_age_days, // Example value
    };

    let success_rate = if address_data.total_transactions > 0 {
        (address_data.successful_transactions as f32 / address_data.total_transactions as f32) * 100.0
    } else {
        0.0
    };

    let repayment_rate = if address_data.loan_repayments > 0 {
        (address_data.loan_repayments as f32 / (address_data.loan_repayments + address_data.defaults) as f32) * 100.0
    } else {
        0.0
    };

    // Additional complex computations
    let transaction_stability = (address_data.average_transaction_value * address_data.total_transactions as f32).ln();
    let account_age_factor = (address_data.account_age_days as f32).sqrt();

    // Weighted scoring
    let weighted_score = 0.4 * success_rate + 0.3 * repayment_rate + 0.2 * transaction_stability + 0.1 * account_age_factor;

    // Normalize the score
    let normalized_score = (weighted_score / 100.0);

    let max_credit_score = 850.0;
    let scaled_score = normalized_score * max_credit_score;

    // Convert to U256
    U256::from(scaled_score as u64)
}

fn main() {
    // Read data sent from the application contract.
    let mut input_bytes = Vec::<u8>::new();
    env::stdin().read_to_end(&mut input_bytes).unwrap();
    // Type array passed to `ethabi::decode_whole` should match the types encoded in
    // the application contract.
    let input = ethabi::decode_whole(&[ParamType::Address], &input_bytes).unwrap();
    let user:Address = input[0].clone().into_address().unwrap();

    // Run the computation.
    let result = calculate_credit_score(user);

    // Commit the journal that will be received by the application contract.
    // Encoded types should match the args expected by the application callback.
    env::commit_slice(&ethabi::encode(&[Token::Address(user), Token::Uint(result)]));
}
