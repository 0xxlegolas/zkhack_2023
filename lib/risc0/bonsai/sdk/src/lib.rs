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

#![doc = include_str!("../README.md")]
#![deny(missing_docs)]

/// Bonsai Alpha SDK
pub mod alpha;
#[cfg(feature = "async")]
/// Bonsai Alpha SDK async
pub mod alpha_async;

/// HTTP header key for the API key
pub const API_KEY_HEADER: &str = "x-api-key";
/// HTTP header for the risc0 version string
pub const VERSION_HEADER: &str = "x-risc0-version";
/// Environment variable name for the API url
pub const API_URL_ENVVAR: &str = "BONSAI_API_URL";
/// Environment variable name for the API key
pub const API_KEY_ENVVAR: &str = "BONSAI_API_KEY";
