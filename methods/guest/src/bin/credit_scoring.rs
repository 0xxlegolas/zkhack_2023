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

use json::parse;
use std::io::Read;
use json::parse;
use ethabi::{ethereum_types::U256, ParamType, Token, Address};
use risc0_zkvm::guest::env;

risc0_zkvm::guest::entry!(main);

struct UserData {
    total_transactions: u32,
    successful_transactions: u32,
    failed_transactions: u32,
    loan_repayments: u32,
    defaults: u32,
}

fn calculate_credit_score(_user: Address) -> U256 {
    //To do read this from json file
    let address_data = UserData {
        total_transactions: 100,
        successful_transactions: 80,
        failed_transactions: 20,
        loan_repayments: 50,
        defaults: 10,
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

    // Simplified scoring logic
    let score = (success_rate + repayment_rate) / 2.0;
    (score as u64).into()
}

fn main() {
    // let data: String = env::read();
    // let data = parse(&data).unwrap();
    // let proven_val = data["critical_data"].as_u32().unwrap();


    // Read data sent from the application contract.
    let mut input_bytes = Vec::<u8>::new();
    env::stdin().read_to_end(&mut input_bytes).unwrap();
    // Type array passed to `ethabi::decode_whole` should match the types encoded in
    // the application contract.
    let input = ethabi::decode_whole(&[ParamType::Address], &input_bytes).unwrap();
    let user:Address = input[0].clone().into_address().unwrap();    

    // //Get the data from the json file
    // let json_data = ethabi::decode_whole(&[ParamType::String], &input_bytes).unwrap();
    // let proven_val = parse(&json_data).unwrap();
    

    // println!("User address: {:?}", json_data["critical_data"].as_u32().unwrap());

    // Run the computation.
    let result = calculate_credit_score(user);

    // Commit the journal that will be received by the application contract.
    // Encoded types should match the args expected by the application callback.
    env::commit_slice(&ethabi::encode(&[Token::Address(user), Token::Uint(result)]));
}
