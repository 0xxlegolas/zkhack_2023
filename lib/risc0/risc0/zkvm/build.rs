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

fn main() {
    #[cfg(feature = "profiler")]
    {
        std::env::set_var("PROTOC", protobuf_src::protoc());
        prost_build::compile_protos(
            &["src/host/server/exec/profile.proto"],
            &["src/host/server/exec"],
        )
        .unwrap();
    }
    #[cfg(any(feature = "client", feature = "prove"))]
    {
        std::env::set_var("PROTOC", protobuf_src::protoc());
        prost_build::compile_protos(
            &["src/host/protos/api.proto", "src/host/protos/core.proto"],
            &["src/host/protos"],
        )
        .unwrap();
    }
}
