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

import {IBonsaiRelay} from "bonsai/IBonsaiRelay.sol";
import {BonsaiCallbackReceiver} from "bonsai/BonsaiCallbackReceiver.sol";

/**
 * @notice This contract does all the credit scoring calculation off chian and stores the result on chain.
 */
contract CreditScore is BonsaiCallbackReceiver {
    mapping(address => uint256) public creditScore;
    bytes32 public immutable imageId;

    uint64 private constant BONSAI_CALLBACK_GAS_LIMIT = 100000;

    constructor(
        IBonsaiRelay bonsaiRelay,
        bytes32 _imageId
    ) BonsaiCallbackReceiver(bonsaiRelay) {
        imageId = _imageId;
    }

    event CalculateCreditScoreCallback(address user, uint256 creditScore);

    function getCreditScore(address user) external view returns (uint256) {
        return creditScore[user];
    }

    /// @notice Callback function logic for processing verified journals from Bonsai.
    function storeResult(
        address user,
        uint256 _creditScore
    ) external onlyBonsaiCallback(imageId) {
        emit CalculateCreditScoreCallback(user, _creditScore);
        creditScore[user] = _creditScore;
    }

    /// @notice Sends a request to Bonsai to have calculated the credit score of the address.
    /// @dev This function sends the request to Bonsai through the on-chain relay.
    ///      The request will trigger Bonsai to run the specified RISC Zero guest program with
    ///      the given input and asynchronously return the verified results via the callback below.
    function calculateCreditScore(address user) external {
        bonsaiRelay.requestCallback(
            imageId,
            abi.encode(user),
            address(this),
            this.storeResult.selector,
            BONSAI_CALLBACK_GAS_LIMIT
        );
    }
}
