// SPDX-License-Identifier: Apache-2.0

pragma solidity ^0.8.17;

import {Script} from "forge-std/Script.sol";
import {console2} from "forge-std/console2.sol";
import {IBonsaiRelay} from "bonsai/IBonsaiRelay.sol";
import {BonsaiCheats} from "bonsai/BonsaiCheats.sol";

import {BonsaiDeploy} from "./BonsaiDeploy.sol";
import {CreditScore} from "../contracts/CreditScore.sol";

contract Deploy is Script, BonsaiCheats, BonsaiDeploy {
    function run() external {
        startBroadcast();
        IBonsaiRelay bonsaiRelay = deployBonsaiRelay();
        uploadImages();

        // TEMPLATE: Modify this block to match your expected deployment.
        bytes32 imageId = queryImageId("CREDIT_SCORING");
        console2.log("Image ID for CreditScore is ", vm.toString(imageId));
        CreditScore app = new CreditScore(bonsaiRelay, imageId);
        console2.log("Deployed BonsaiStarter to ", address(app));

        vm.stopBroadcast();
    }
}
