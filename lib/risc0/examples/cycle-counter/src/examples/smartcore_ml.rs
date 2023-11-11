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

use risc0_zkvm::ExecutorEnv;
use smartcore::{
    linalg::basic::matrix::DenseMatrix, tree::decision_tree_classifier::DecisionTreeClassifier,
};

use crate::{exec, CycleCounter, Metrics};

pub struct Job {}

const JSON_MODEL: &str = include_str!("../../../smartcore-ml/res/ml-model/tree_model_bytes.json");
const JSON_DATA: &str =
    include_str!("../../../smartcore-ml/res/input-data/tree_model_data_bytes.json");

impl CycleCounter for Job {
    const NAME: &'static str = "smartcore-ml";
    const METHOD_ELF: &'static [u8] = smartcore_ml_methods::ML_TEMPLATE_ELF;

    fn run() -> Metrics {
        // Convert the model and input data from JSON into byte arrays.
        let is_svm = false;
        let model_bytes: Vec<u8> = serde_json::from_str(JSON_MODEL).unwrap();
        let data_bytes: Vec<u8> = serde_json::from_str(JSON_DATA).unwrap();

        // Deserialize the data from rmp into native rust types.
        type Model = DecisionTreeClassifier<f64, u32, DenseMatrix<f64>, Vec<u32>>;
        let model: Model =
            rmp_serde::from_slice(&model_bytes).expect("model failed to deserialize byte array");
        let data: DenseMatrix<f64> =
            rmp_serde::from_slice(&data_bytes).expect("data failed to deserialize byte array");

        let env = ExecutorEnv::builder()
            .write(&is_svm)
            .unwrap()
            .write(&model)
            .unwrap()
            .write(&data)
            .unwrap()
            .build()
            .unwrap();

        exec(Self::NAME, Self::METHOD_ELF, env)
    }
}
