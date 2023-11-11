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
//
// SPDX-License-Identifier: Apache-2.0

pragma solidity ^0.8.17;

import {BonsaiTest} from "bonsai/BonsaiTest.sol";
import {IBonsaiRelay} from "bonsai/IBonsaiRelay.sol";
import {CreditScore} from "contracts/CreditScore.sol";
import "forge-std/console.sol";

contract CreditScoreTest is BonsaiTest {
    function setUp() public withRelay {}

    // Test the CreditScore contract by mocking an off-chain callback request
    function testOffChainMock() public {
        bytes32 imageId = queryImageId("CREDIT_SCORING");
        // Deploy a new starter instance
        CreditScore starter = new CreditScore(
            IBonsaiRelay(bonsaiRelay),
            imageId
        );

        // Anticipate a callback invocation on the starter contract
        vm.expectCall(
            address(starter),
            abi.encodeWithSelector(CreditScore.storeResult.selector)
        );
        // Relay the solution as a callback
        uint64 BONSAI_CALLBACK_GAS_LIMIT = 100000;
        runCallbackRequest(
            imageId,
            abi.encode(0xf39Fd6e51aad88F6F4ce6aB8827279cffFb92266),
            address(starter),
            starter.storeResult.selector,
            BONSAI_CALLBACK_GAS_LIMIT
        );

        // Validate the Credit Score solution value
        uint256 result = starter.getCreditScore(
            0xf39Fd6e51aad88F6F4ce6aB8827279cffFb92266
        );
        console.log(result);
        // assertEq(result, uint256(407305795904080553832073954));
    }

    // Test the CreditScore contract by mocking an on-chain callback request
    function testOnChainMock() public {
        // Deploy a new starter instance
        CreditScore starter = new CreditScore(
            IBonsaiRelay(bonsaiRelay),
            queryImageId("CREDIT_SCORING")
        );

        // Anticipate an on-chain callback request to the relay
        vm.expectCall(
            address(bonsaiRelay),
            abi.encodeWithSelector(IBonsaiRelay.requestCallback.selector)
        );
        // Request the on-chain callback
        starter.calculateCreditScore(
            0xf39Fd6e51aad88F6F4ce6aB8827279cffFb92266
        );

        // Anticipate a callback invocation on the starter contract
        vm.expectCall(
            address(starter),
            abi.encodeWithSelector(CreditScore.storeResult.selector)
        );

        // Relay the solution as a callback
        runPendingCallbackRequest();

        // Validate the Credit Score solution value
        uint256 result = starter.getCreditScore(
            0xf39Fd6e51aad88F6F4ce6aB8827279cffFb92266
        );
        // assertEq(result, uint256(407305795904080553832073954));
    }
}
