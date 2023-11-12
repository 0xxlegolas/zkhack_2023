## Credit Scoring Using ZKP 🌟 

A Simple Credit Scoring System built on RISC Zero platform

### Overview 
This implementation mainly focusses on utilizing the RISC Zero platform and integrating Bonsai with Ethereum smart contracts, this project moves complex mathematical computations off-chain, ensuring both efficiency and user data privacy.

### What's Cooking? 🍳
On-Chain Smart Contracts: Responsible for verifying proofs and managing blockchain states.
zkVM (Zero-Knowledge Virtual Machine) Program: Executes heavy computations off-chain, generating proofs while ensuring data confidentiality.

### Why use ZKPs ? 💡
In traditional financial industry, its a closed system on how a credit score is calculated and how loans are lent. Having credit scoring in Blockchain makes the financial sector more transparent. However none wants their data to be available public and also to build a credit scoring mechanism on-chain is computationally gas ineffecient. So using ZKPs we could protect the users private information but at the same make the credit scoring process on-chain with less 

#### Privacy 🕵️‍♂️
Using ZKP, the user data can be private and the user can choose to expose certain data with the help of guests in Risk Zero. This gives the users fine granality on privacy

#### Gas Effeciency ⚡
By shifting computationally intensive logic off-chain, our system can handle complex calculations without overburdening the blockchain. This ensures not only robustness in computational capabilities but also efficiency in on-chain operations. The on-chain component focuses on proving the integrity of off-chain computations and maintaining state information, significantly reducing gas costs.

### Key Features 📌
User-Centric Privacy: Empower users with control over their personal and financial data.
Efficient On-Chain Verification: Leverage ZKP for on-chain verification of off-chain computations.
Scalability and Reduced Costs: Minimize on-chain footprint, reducing gas fees and enhancing scalability.
Transparent Credit Scoring: Introduce transparency into credit scoring processes in the blockchain ecosystem.

### Future Enhancements  ✨
Data Source Expansion: Integrate more data sources for comprehensive credit scoring.
Dynamic Scoring Models: Implement AI-driven models for dynamic and fair credit scoring.
Broader Financial Applications: Extend the system for other financial services like risk assessment and fraud detection.


### Usage 
Step 1. Compile and Deploy

```sh
cargo build
cargo test
forge test
RISC0_DEV_MODE=true forge script script/Deploy.s.sol --rpc-url http://localhost:8545 --broadcast
```

Step 2. Save to env 

```sh
    export BONSAI_RELAY_ADDRESS="#copy relay address from the deploy logs#"
    export APP_ADDRESS="#copy app address from the deploy logs#"
``` 

Step 3. Start the Bonsai Ethereum Relay by running:

```sh
RISC0_DEV_MODE=true cargo run --bin bonsai-ethereum-relay-cli -- run --relay-address "$BONSAI_RELAY_ADDRESS"
```

Step 4. Send a transaction to the Onchain contract:

```bash
cast send --private-key 0x59c6995e998f97a5a0044966f0945389dc9e86dae88c7a8412f4603b6b78690d --gas-limit 100000 "$APP_ADDRESS" 'calculateCreditScore(address)' 0xf39Fd6e51aad88F6F4ce6aB8827279cffFb92266
```

Step 5. Check the relayed result:

```bash
cast call "$APP_ADDRESS" 'getCreditScore(uint256)' 0xf39Fd6e51aad88F6F4ce6aB8827279cffFb92266
```

Contract Deployed to Sepholia: https://sepolia.etherscan.io/tx/0x846083feedc6ce0f22b4197a79733ffc95b6dd7ed6ea2eabc7707eedcdcdee7f 