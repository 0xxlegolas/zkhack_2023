// Copyright 2022 Risc0, Inc.
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

#include "sha256.h"

extern "C" __global__
void sha_rows(ShaDigest* out,
              const Fp* matrix,
              uint32_t count,
              uint32_t colSize) {
  uint32_t idx = blockDim.x * blockIdx.x + threadIdx.x;
  if (idx < count) {
    out[idx] = shaHash(matrix + idx, colSize, count, false);
  }
}

extern "C" __global__
void sha_fold(ShaDigest* out,
              const ShaDigest* in,
              uint32_t count) {
  uint32_t idx = blockDim.x * blockIdx.x + threadIdx.x;
  if (idx < count) {
    out[idx] = shaHashPair(in[2 * idx], in[2 * idx + 1]);
  }
}
