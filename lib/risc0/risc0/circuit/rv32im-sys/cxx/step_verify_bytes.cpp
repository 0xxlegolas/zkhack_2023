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

// This code is automatically generated

#include "ffi.h"
#include "fp.h"

#include <array>
#include <cassert>
#include <stdexcept>

// clang-format off
namespace risc0::circuit::rv32im {

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

Fp step_verify_bytes(void* ctx, HostBridge host, size_t steps, size_t cycle, Fp** args) {
  size_t mask = steps - 1;
  std::array<Fp, 96> host_args;
  std::array<Fp, 32> host_outs;
  // loc("zirgen/components/bytes.cpp":96:26)
  Fp x0(255);
  // loc("zirgen/components/bytes.cpp":37:25)
  Fp x1(2);
  // loc("zirgen/components/bytes.cpp":34:29)
  Fp x2(254);
  // loc("zirgen/components/bytes.cpp":21:13)
  Fp x3(0);
  // loc("zirgen/circuit/rv32im/top.cpp":17:17)
  Fp x4(1);
  // loc("Top/Code/OneHot/hot[1](Reg)"("./zirgen/components/mux.h":49:25))
  auto x5 = args[0][2 * steps + ((cycle - 0) & mask)];
  assert(x5 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[3](Reg)"("./zirgen/components/mux.h":49:25))
  auto x6 = args[0][4 * steps + ((cycle - 0) & mask)];
  assert(x6 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[4](Reg)"("./zirgen/components/mux.h":49:25))
  auto x7 = args[0][5 * steps + ((cycle - 0) & mask)];
  assert(x7 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[5](Reg)"("./zirgen/components/mux.h":49:25))
  auto x8 = args[0][6 * steps + ((cycle - 0) & mask)];
  assert(x8 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[6](Reg)"("./zirgen/components/mux.h":49:25))
  auto x9 = args[0][7 * steps + ((cycle - 0) & mask)];
  assert(x9 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[7](Reg)"("./zirgen/components/mux.h":49:25))
  auto x10 = args[0][8 * steps + ((cycle - 0) & mask)];
  assert(x10 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[0](Reg)"("zirgen/circuit/rv32im/top.cpp":78:27))
  auto x11 = args[0][1 * steps + ((cycle - 0) & mask)];
  assert(x11 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[2](Reg)"("zirgen/circuit/rv32im/top.cpp":78:27))
  auto x12 = args[0][3 * steps + ((cycle - 0) & mask)];
  assert(x12 != Fp::invalid());
  if (x11 != 0) {
    // loc("zirgen/components/bytes.cpp":21:3)
    {
      auto& reg = args[2][0 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x3);
      reg = x3;
    }
    // loc("zirgen/components/bytes.cpp":22:3)
    {
      auto& reg = args[2][1 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x3);
      reg = x3;
    }
  }
  if (x5 != 0) {
    {
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x13 = host_outs.at(0);
      auto x14 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][45 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x13);
        reg = x13;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][46 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x14);
        reg = x14;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x15 = host_outs.at(0);
      auto x16 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][47 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x15);
        reg = x15;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][48 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x16);
        reg = x16;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x17 = host_outs.at(0);
      auto x18 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][49 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x17);
        reg = x17;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][50 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x18);
        reg = x18;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x19 = host_outs.at(0);
      auto x20 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][51 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x19);
        reg = x19;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][52 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x20);
        reg = x20;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x21 = host_outs.at(0);
      auto x22 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][53 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x21);
        reg = x21;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][54 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x22);
        reg = x22;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x23 = host_outs.at(0);
      auto x24 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][55 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x23);
        reg = x23;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][56 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x24);
        reg = x24;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x25 = host_outs.at(0);
      auto x26 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][57 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x25);
        reg = x25;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][58 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x26);
        reg = x26;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x27 = host_outs.at(0);
      auto x28 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][59 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x27);
        reg = x27;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][60 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x28);
        reg = x28;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x29 = host_outs.at(0);
      auto x30 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][61 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x29);
        reg = x29;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][62 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x30);
        reg = x30;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x31 = host_outs.at(0);
      auto x32 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][63 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x31);
        reg = x31;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][64 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x32);
        reg = x32;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x33 = host_outs.at(0);
      auto x34 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][65 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x33);
        reg = x33;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][66 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x34);
        reg = x34;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x35 = host_outs.at(0);
      auto x36 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][67 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x35);
        reg = x35;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][68 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x36);
        reg = x36;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x37 = host_outs.at(0);
      auto x38 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x37);
        reg = x37;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x38);
        reg = x38;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x39 = host_outs.at(0);
      auto x40 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x39);
        reg = x39;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x40);
        reg = x40;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x41 = host_outs.at(0);
      auto x42 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x41);
        reg = x41;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x42);
        reg = x42;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x43 = host_outs.at(0);
      auto x44 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x43);
        reg = x43;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x44);
        reg = x44;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x45 = host_outs.at(0);
      auto x46 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x45);
        reg = x45;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x46);
        reg = x46;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x47 = host_outs.at(0);
      auto x48 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x47);
        reg = x47;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x48);
        reg = x48;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x49 = host_outs.at(0);
      auto x50 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x49);
        reg = x49;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x50);
        reg = x50;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x51 = host_outs.at(0);
      auto x52 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x51);
        reg = x51;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x52);
        reg = x52;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x53 = host_outs.at(0);
      auto x54 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x53);
        reg = x53;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x54);
        reg = x54;
      }
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x55 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x55 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x56 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x56 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x57 = args[2][45 * steps + ((cycle - 0) & mask)];
    assert(x57 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x58 = args[2][46 * steps + ((cycle - 0) & mask)];
    assert(x58 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x59 = x57 - x55;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x60 = x58 - x56;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x61 = x59 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x62 = x59 * x61;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x62 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x59 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x58 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x63 = x56 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x64 = x56 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x65 = x63 * x64;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x65 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x66 = x4 - x59;
    if (x66 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x67 = x60 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x68 = x60 * x67;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x69 = x60 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x70 = x68 * x69;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x70 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x71 = args[2][47 * steps + ((cycle - 0) & mask)];
    assert(x71 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x72 = args[2][48 * steps + ((cycle - 0) & mask)];
    assert(x72 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x73 = x71 - x57;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x74 = x72 - x58;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x75 = x73 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x76 = x73 * x75;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x76 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x73 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x72 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x77 = x58 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x78 = x58 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x79 = x77 * x78;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x79 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x80 = x4 - x73;
    if (x80 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x81 = x74 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x82 = x74 * x81;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x83 = x74 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x84 = x82 * x83;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x84 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x85 = args[2][49 * steps + ((cycle - 0) & mask)];
    assert(x85 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x86 = args[2][50 * steps + ((cycle - 0) & mask)];
    assert(x86 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x87 = x85 - x71;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x88 = x86 - x72;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x89 = x87 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x90 = x87 * x89;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x90 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x87 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x86 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x91 = x72 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x92 = x72 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x93 = x91 * x92;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x93 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x94 = x4 - x87;
    if (x94 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x95 = x88 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x96 = x88 * x95;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x97 = x88 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x98 = x96 * x97;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x98 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x99 = args[2][51 * steps + ((cycle - 0) & mask)];
    assert(x99 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x100 = args[2][52 * steps + ((cycle - 0) & mask)];
    assert(x100 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x101 = x99 - x85;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x102 = x100 - x86;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x103 = x101 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x104 = x101 * x103;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x104 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x101 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x100 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x105 = x86 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x106 = x86 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x107 = x105 * x106;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x107 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x108 = x4 - x101;
    if (x108 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x109 = x102 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x110 = x102 * x109;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x111 = x102 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x112 = x110 * x111;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x112 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x113 = args[2][53 * steps + ((cycle - 0) & mask)];
    assert(x113 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x114 = args[2][54 * steps + ((cycle - 0) & mask)];
    assert(x114 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x115 = x113 - x99;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x116 = x114 - x100;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x117 = x115 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x118 = x115 * x117;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x118 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x115 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x114 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x119 = x100 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x120 = x100 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x121 = x119 * x120;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x121 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x122 = x4 - x115;
    if (x122 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x123 = x116 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x124 = x116 * x123;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x125 = x116 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x126 = x124 * x125;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x126 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x127 = args[2][55 * steps + ((cycle - 0) & mask)];
    assert(x127 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x128 = args[2][56 * steps + ((cycle - 0) & mask)];
    assert(x128 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x129 = x127 - x113;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x130 = x128 - x114;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x131 = x129 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x132 = x129 * x131;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x132 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x129 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x128 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x133 = x114 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x134 = x114 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x135 = x133 * x134;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x135 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x136 = x4 - x129;
    if (x136 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x137 = x130 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x138 = x130 * x137;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x139 = x130 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x140 = x138 * x139;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x140 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x141 = args[2][57 * steps + ((cycle - 0) & mask)];
    assert(x141 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x142 = args[2][58 * steps + ((cycle - 0) & mask)];
    assert(x142 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x143 = x141 - x127;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x144 = x142 - x128;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x145 = x143 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x146 = x143 * x145;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x146 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x143 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x142 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x147 = x128 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x148 = x128 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x149 = x147 * x148;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x149 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x150 = x4 - x143;
    if (x150 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x151 = x144 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x152 = x144 * x151;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x153 = x144 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x154 = x152 * x153;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x154 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x155 = args[2][59 * steps + ((cycle - 0) & mask)];
    assert(x155 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x156 = args[2][60 * steps + ((cycle - 0) & mask)];
    assert(x156 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x157 = x155 - x141;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x158 = x156 - x142;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x159 = x157 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x160 = x157 * x159;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x160 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x157 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x156 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x161 = x142 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x162 = x142 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x163 = x161 * x162;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x163 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x164 = x4 - x157;
    if (x164 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x165 = x158 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x166 = x158 * x165;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x167 = x158 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x168 = x166 * x167;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x168 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x169 = args[2][61 * steps + ((cycle - 0) & mask)];
    assert(x169 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x170 = args[2][62 * steps + ((cycle - 0) & mask)];
    assert(x170 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x171 = x169 - x155;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x172 = x170 - x156;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x173 = x171 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x174 = x171 * x173;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x174 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x171 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x170 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x175 = x156 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x176 = x156 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x177 = x175 * x176;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x177 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x178 = x4 - x171;
    if (x178 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x179 = x172 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x180 = x172 * x179;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x181 = x172 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x182 = x180 * x181;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x182 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x183 = args[2][63 * steps + ((cycle - 0) & mask)];
    assert(x183 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x184 = args[2][64 * steps + ((cycle - 0) & mask)];
    assert(x184 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x185 = x183 - x169;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x186 = x184 - x170;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x187 = x185 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x188 = x185 * x187;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x188 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x185 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x184 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x189 = x170 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x190 = x170 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x191 = x189 * x190;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x191 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x192 = x4 - x185;
    if (x192 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x193 = x186 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x194 = x186 * x193;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x195 = x186 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x196 = x194 * x195;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x196 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x197 = args[2][65 * steps + ((cycle - 0) & mask)];
    assert(x197 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x198 = args[2][66 * steps + ((cycle - 0) & mask)];
    assert(x198 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x199 = x197 - x183;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x200 = x198 - x184;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x201 = x199 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x202 = x199 * x201;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x202 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x199 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x198 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x203 = x184 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x204 = x184 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x205 = x203 * x204;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x205 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x206 = x4 - x199;
    if (x206 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x207 = x200 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x208 = x200 * x207;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x209 = x200 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x210 = x208 * x209;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x210 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x211 = args[2][67 * steps + ((cycle - 0) & mask)];
    assert(x211 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x212 = args[2][68 * steps + ((cycle - 0) & mask)];
    assert(x212 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x213 = x211 - x197;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x214 = x212 - x198;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x215 = x213 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x216 = x213 * x215;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x216 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x213 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x212 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x217 = x198 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x218 = x198 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x219 = x217 * x218;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x219 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x220 = x4 - x213;
    if (x220 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x221 = x214 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x222 = x214 * x221;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x223 = x214 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x224 = x222 * x223;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x224 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x225 = args[2][69 * steps + ((cycle - 0) & mask)];
    assert(x225 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x226 = args[2][70 * steps + ((cycle - 0) & mask)];
    assert(x226 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x227 = x225 - x211;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x228 = x226 - x212;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x229 = x227 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x230 = x227 * x229;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x230 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x227 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x226 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x231 = x212 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x232 = x212 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x233 = x231 * x232;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x233 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x234 = x4 - x227;
    if (x234 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x235 = x228 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x236 = x228 * x235;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x237 = x228 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x238 = x236 * x237;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x238 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x239 = args[2][71 * steps + ((cycle - 0) & mask)];
    assert(x239 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x240 = args[2][72 * steps + ((cycle - 0) & mask)];
    assert(x240 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x241 = x239 - x225;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x242 = x240 - x226;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x243 = x241 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x244 = x241 * x243;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x244 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x241 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x240 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x245 = x226 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x246 = x226 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x247 = x245 * x246;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x247 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x248 = x4 - x241;
    if (x248 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x249 = x242 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x250 = x242 * x249;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x251 = x242 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x252 = x250 * x251;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x252 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x253 = args[2][73 * steps + ((cycle - 0) & mask)];
    assert(x253 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x254 = args[2][74 * steps + ((cycle - 0) & mask)];
    assert(x254 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x255 = x253 - x239;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x256 = x254 - x240;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x257 = x255 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x258 = x255 * x257;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x258 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x255 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x254 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x259 = x240 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x260 = x240 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x261 = x259 * x260;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x261 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x262 = x4 - x255;
    if (x262 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x263 = x256 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x264 = x256 * x263;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x265 = x256 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x266 = x264 * x265;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x266 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x267 = args[2][75 * steps + ((cycle - 0) & mask)];
    assert(x267 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x268 = args[2][76 * steps + ((cycle - 0) & mask)];
    assert(x268 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x269 = x267 - x253;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x270 = x268 - x254;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x271 = x269 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x272 = x269 * x271;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x272 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x269 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x268 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x273 = x254 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x274 = x254 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x275 = x273 * x274;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x275 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x276 = x4 - x269;
    if (x276 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x277 = x270 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x278 = x270 * x277;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x279 = x270 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x280 = x278 * x279;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x280 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x281 = args[2][77 * steps + ((cycle - 0) & mask)];
    assert(x281 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x282 = args[2][78 * steps + ((cycle - 0) & mask)];
    assert(x282 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x283 = x281 - x267;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x284 = x282 - x268;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x285 = x283 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x286 = x283 * x285;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x286 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x283 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x282 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x287 = x268 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x288 = x268 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x289 = x287 * x288;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x289 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x290 = x4 - x283;
    if (x290 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x291 = x284 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x292 = x284 * x291;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x293 = x284 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x294 = x292 * x293;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x294 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x295 = args[2][79 * steps + ((cycle - 0) & mask)];
    assert(x295 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x296 = args[2][80 * steps + ((cycle - 0) & mask)];
    assert(x296 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x297 = x295 - x281;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x298 = x296 - x282;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x299 = x297 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x300 = x297 * x299;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x300 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x297 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x296 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x301 = x282 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x302 = x282 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x303 = x301 * x302;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x303 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x304 = x4 - x297;
    if (x304 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x305 = x298 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x306 = x298 * x305;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x307 = x298 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x308 = x306 * x307;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x308 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x309 = args[2][81 * steps + ((cycle - 0) & mask)];
    assert(x309 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x310 = args[2][82 * steps + ((cycle - 0) & mask)];
    assert(x310 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x311 = x309 - x295;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x312 = x310 - x296;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x313 = x311 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x314 = x311 * x313;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x314 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x311 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x310 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x315 = x296 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x316 = x296 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x317 = x315 * x316;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x317 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x318 = x4 - x311;
    if (x318 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x319 = x312 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x320 = x312 * x319;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x321 = x312 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x322 = x320 * x321;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x322 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x323 = args[2][83 * steps + ((cycle - 0) & mask)];
    assert(x323 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x324 = args[2][84 * steps + ((cycle - 0) & mask)];
    assert(x324 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x325 = x323 - x309;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x326 = x324 - x310;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x327 = x325 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x328 = x325 * x327;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x328 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x325 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x324 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x329 = x310 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x330 = x310 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x331 = x329 * x330;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x331 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x332 = x4 - x325;
    if (x332 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x333 = x326 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x334 = x326 * x333;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x335 = x326 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x336 = x334 * x335;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x336 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x337 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x337 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x338 = args[2][1 * steps + ((cycle - 0) & mask)];
    assert(x338 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x339 = x337 - x323;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x340 = x338 - x324;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x341 = x339 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x342 = x339 * x341;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x342 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x339 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x338 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x343 = x324 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x344 = x324 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x345 = x343 * x344;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x345 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x346 = x4 - x339;
    if (x346 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x347 = x340 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x348 = x340 * x347;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x349 = x340 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x350 = x348 * x349;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x350 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  if (x12 != 0) {
    {
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x351 = host_outs.at(0);
      auto x352 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][37 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x351);
        reg = x351;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][38 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x352);
        reg = x352;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x353 = host_outs.at(0);
      auto x354 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][39 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x353);
        reg = x353;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][40 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x354);
        reg = x354;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x355 = host_outs.at(0);
      auto x356 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][41 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x355);
        reg = x355;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][42 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x356);
        reg = x356;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x357 = host_outs.at(0);
      auto x358 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][43 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x357);
        reg = x357;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][44 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x358);
        reg = x358;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x359 = host_outs.at(0);
      auto x360 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][45 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x359);
        reg = x359;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][46 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x360);
        reg = x360;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x361 = host_outs.at(0);
      auto x362 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][47 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x361);
        reg = x361;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][48 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x362);
        reg = x362;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x363 = host_outs.at(0);
      auto x364 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][49 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x363);
        reg = x363;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][50 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x364);
        reg = x364;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x365 = host_outs.at(0);
      auto x366 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][51 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x365);
        reg = x365;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][52 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x366);
        reg = x366;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x367 = host_outs.at(0);
      auto x368 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][53 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x367);
        reg = x367;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][54 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x368);
        reg = x368;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x369 = host_outs.at(0);
      auto x370 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][55 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x369);
        reg = x369;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][56 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x370);
        reg = x370;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x371 = host_outs.at(0);
      auto x372 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][57 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x371);
        reg = x371;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][58 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x372);
        reg = x372;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x373 = host_outs.at(0);
      auto x374 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][59 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x373);
        reg = x373;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][60 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x374);
        reg = x374;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x375 = host_outs.at(0);
      auto x376 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][61 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x375);
        reg = x375;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][62 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x376);
        reg = x376;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x377 = host_outs.at(0);
      auto x378 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][63 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x377);
        reg = x377;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][64 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x378);
        reg = x378;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x379 = host_outs.at(0);
      auto x380 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][65 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x379);
        reg = x379;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][66 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x380);
        reg = x380;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x381 = host_outs.at(0);
      auto x382 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][67 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x381);
        reg = x381;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][68 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x382);
        reg = x382;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x383 = host_outs.at(0);
      auto x384 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x383);
        reg = x383;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x384);
        reg = x384;
      }
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x385 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x385 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x386 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x386 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x387 = args[2][37 * steps + ((cycle - 0) & mask)];
    assert(x387 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x388 = args[2][38 * steps + ((cycle - 0) & mask)];
    assert(x388 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x389 = x387 - x385;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x390 = x388 - x386;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x391 = x389 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x392 = x389 * x391;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x392 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x389 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x388 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x393 = x386 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x394 = x386 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x395 = x393 * x394;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x395 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x396 = x4 - x389;
    if (x396 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x397 = x390 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x398 = x390 * x397;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x399 = x390 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x400 = x398 * x399;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x400 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x401 = args[2][39 * steps + ((cycle - 0) & mask)];
    assert(x401 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x402 = args[2][40 * steps + ((cycle - 0) & mask)];
    assert(x402 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x403 = x401 - x387;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x404 = x402 - x388;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x405 = x403 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x406 = x403 * x405;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x406 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x403 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x402 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x407 = x388 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x408 = x388 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x409 = x407 * x408;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x409 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x410 = x4 - x403;
    if (x410 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x411 = x404 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x412 = x404 * x411;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x413 = x404 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x414 = x412 * x413;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x414 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x415 = args[2][41 * steps + ((cycle - 0) & mask)];
    assert(x415 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x416 = args[2][42 * steps + ((cycle - 0) & mask)];
    assert(x416 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x417 = x415 - x401;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x418 = x416 - x402;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x419 = x417 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x420 = x417 * x419;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x420 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x417 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x416 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x421 = x402 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x422 = x402 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x423 = x421 * x422;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x423 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x424 = x4 - x417;
    if (x424 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x425 = x418 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x426 = x418 * x425;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x427 = x418 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x428 = x426 * x427;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x428 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x429 = args[2][43 * steps + ((cycle - 0) & mask)];
    assert(x429 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x430 = args[2][44 * steps + ((cycle - 0) & mask)];
    assert(x430 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x431 = x429 - x415;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x432 = x430 - x416;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x433 = x431 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x434 = x431 * x433;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x434 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x431 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x430 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x435 = x416 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x436 = x416 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x437 = x435 * x436;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x437 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x438 = x4 - x431;
    if (x438 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x439 = x432 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x440 = x432 * x439;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x441 = x432 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x442 = x440 * x441;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x442 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x443 = args[2][45 * steps + ((cycle - 0) & mask)];
    assert(x443 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x444 = args[2][46 * steps + ((cycle - 0) & mask)];
    assert(x444 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x445 = x443 - x429;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x446 = x444 - x430;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x447 = x445 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x448 = x445 * x447;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x448 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x445 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x444 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x449 = x430 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x450 = x430 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x451 = x449 * x450;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x451 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x452 = x4 - x445;
    if (x452 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x453 = x446 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x454 = x446 * x453;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x455 = x446 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x456 = x454 * x455;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x456 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x457 = args[2][47 * steps + ((cycle - 0) & mask)];
    assert(x457 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x458 = args[2][48 * steps + ((cycle - 0) & mask)];
    assert(x458 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x459 = x457 - x443;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x460 = x458 - x444;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x461 = x459 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x462 = x459 * x461;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x462 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x459 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x458 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x463 = x444 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x464 = x444 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x465 = x463 * x464;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x465 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x466 = x4 - x459;
    if (x466 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x467 = x460 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x468 = x460 * x467;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x469 = x460 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x470 = x468 * x469;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x470 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x471 = args[2][49 * steps + ((cycle - 0) & mask)];
    assert(x471 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x472 = args[2][50 * steps + ((cycle - 0) & mask)];
    assert(x472 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x473 = x471 - x457;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x474 = x472 - x458;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x475 = x473 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x476 = x473 * x475;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x476 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x473 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x472 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x477 = x458 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x478 = x458 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x479 = x477 * x478;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x479 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x480 = x4 - x473;
    if (x480 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x481 = x474 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x482 = x474 * x481;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x483 = x474 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x484 = x482 * x483;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x484 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x485 = args[2][51 * steps + ((cycle - 0) & mask)];
    assert(x485 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x486 = args[2][52 * steps + ((cycle - 0) & mask)];
    assert(x486 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x487 = x485 - x471;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x488 = x486 - x472;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x489 = x487 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x490 = x487 * x489;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x490 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x487 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x486 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x491 = x472 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x492 = x472 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x493 = x491 * x492;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x493 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x494 = x4 - x487;
    if (x494 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x495 = x488 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x496 = x488 * x495;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x497 = x488 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x498 = x496 * x497;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x498 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x499 = args[2][53 * steps + ((cycle - 0) & mask)];
    assert(x499 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x500 = args[2][54 * steps + ((cycle - 0) & mask)];
    assert(x500 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x501 = x499 - x485;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x502 = x500 - x486;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x503 = x501 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x504 = x501 * x503;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x504 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x501 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x500 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x505 = x486 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x506 = x486 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x507 = x505 * x506;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x507 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x508 = x4 - x501;
    if (x508 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x509 = x502 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x510 = x502 * x509;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x511 = x502 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x512 = x510 * x511;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x512 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x513 = args[2][55 * steps + ((cycle - 0) & mask)];
    assert(x513 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x514 = args[2][56 * steps + ((cycle - 0) & mask)];
    assert(x514 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x515 = x513 - x499;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x516 = x514 - x500;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x517 = x515 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x518 = x515 * x517;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x518 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x515 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x514 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x519 = x500 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x520 = x500 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x521 = x519 * x520;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x521 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x522 = x4 - x515;
    if (x522 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x523 = x516 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x524 = x516 * x523;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x525 = x516 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x526 = x524 * x525;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x526 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x527 = args[2][57 * steps + ((cycle - 0) & mask)];
    assert(x527 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x528 = args[2][58 * steps + ((cycle - 0) & mask)];
    assert(x528 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x529 = x527 - x513;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x530 = x528 - x514;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x531 = x529 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x532 = x529 * x531;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x532 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x529 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x528 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x533 = x514 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x534 = x514 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x535 = x533 * x534;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x535 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x536 = x4 - x529;
    if (x536 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x537 = x530 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x538 = x530 * x537;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x539 = x530 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x540 = x538 * x539;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x540 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x541 = args[2][59 * steps + ((cycle - 0) & mask)];
    assert(x541 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x542 = args[2][60 * steps + ((cycle - 0) & mask)];
    assert(x542 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x543 = x541 - x527;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x544 = x542 - x528;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x545 = x543 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x546 = x543 * x545;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x546 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x543 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x542 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x547 = x528 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x548 = x528 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x549 = x547 * x548;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x549 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x550 = x4 - x543;
    if (x550 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x551 = x544 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x552 = x544 * x551;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x553 = x544 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x554 = x552 * x553;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x554 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x555 = args[2][61 * steps + ((cycle - 0) & mask)];
    assert(x555 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x556 = args[2][62 * steps + ((cycle - 0) & mask)];
    assert(x556 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x557 = x555 - x541;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x558 = x556 - x542;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x559 = x557 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x560 = x557 * x559;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x560 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x557 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x556 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x561 = x542 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x562 = x542 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x563 = x561 * x562;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x563 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x564 = x4 - x557;
    if (x564 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x565 = x558 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x566 = x558 * x565;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x567 = x558 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x568 = x566 * x567;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x568 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x569 = args[2][63 * steps + ((cycle - 0) & mask)];
    assert(x569 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x570 = args[2][64 * steps + ((cycle - 0) & mask)];
    assert(x570 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x571 = x569 - x555;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x572 = x570 - x556;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x573 = x571 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x574 = x571 * x573;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x574 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x571 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x570 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x575 = x556 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x576 = x556 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x577 = x575 * x576;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x577 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x578 = x4 - x571;
    if (x578 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x579 = x572 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x580 = x572 * x579;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x581 = x572 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x582 = x580 * x581;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x582 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x583 = args[2][65 * steps + ((cycle - 0) & mask)];
    assert(x583 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x584 = args[2][66 * steps + ((cycle - 0) & mask)];
    assert(x584 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x585 = x583 - x569;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x586 = x584 - x570;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x587 = x585 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x588 = x585 * x587;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x588 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x585 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x584 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x589 = x570 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x590 = x570 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x591 = x589 * x590;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x591 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x592 = x4 - x585;
    if (x592 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x593 = x586 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x594 = x586 * x593;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x595 = x586 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x596 = x594 * x595;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x596 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x597 = args[2][67 * steps + ((cycle - 0) & mask)];
    assert(x597 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x598 = args[2][68 * steps + ((cycle - 0) & mask)];
    assert(x598 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x599 = x597 - x583;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x600 = x598 - x584;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x601 = x599 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x602 = x599 * x601;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x602 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x599 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x598 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x603 = x584 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x604 = x584 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x605 = x603 * x604;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x605 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x606 = x4 - x599;
    if (x606 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x607 = x600 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x608 = x600 * x607;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x609 = x600 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x610 = x608 * x609;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x610 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x611 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x611 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x612 = args[2][1 * steps + ((cycle - 0) & mask)];
    assert(x612 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x613 = x611 - x597;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x614 = x612 - x598;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x615 = x613 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x616 = x613 * x615;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x616 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x613 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x612 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x617 = x598 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x618 = x598 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x619 = x617 * x618;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x619 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x620 = x4 - x613;
    if (x620 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x621 = x614 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x622 = x614 * x621;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x623 = x614 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x624 = x622 * x623;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x624 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  if (x6 != 0) {
    {
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x625 = host_outs.at(0);
      auto x626 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][37 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x625);
        reg = x625;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][38 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x626);
        reg = x626;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x627 = host_outs.at(0);
      auto x628 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][39 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x627);
        reg = x627;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][40 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x628);
        reg = x628;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x629 = host_outs.at(0);
      auto x630 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][41 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x629);
        reg = x629;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][42 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x630);
        reg = x630;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x631 = host_outs.at(0);
      auto x632 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][43 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x631);
        reg = x631;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][44 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x632);
        reg = x632;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x633 = host_outs.at(0);
      auto x634 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][45 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x633);
        reg = x633;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][46 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x634);
        reg = x634;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x635 = host_outs.at(0);
      auto x636 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][47 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x635);
        reg = x635;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][48 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x636);
        reg = x636;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x637 = host_outs.at(0);
      auto x638 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][49 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x637);
        reg = x637;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][50 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x638);
        reg = x638;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x639 = host_outs.at(0);
      auto x640 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][51 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x639);
        reg = x639;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][52 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x640);
        reg = x640;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x641 = host_outs.at(0);
      auto x642 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][53 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x641);
        reg = x641;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][54 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x642);
        reg = x642;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x643 = host_outs.at(0);
      auto x644 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][55 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x643);
        reg = x643;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][56 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x644);
        reg = x644;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x645 = host_outs.at(0);
      auto x646 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][57 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x645);
        reg = x645;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][58 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x646);
        reg = x646;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x647 = host_outs.at(0);
      auto x648 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][59 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x647);
        reg = x647;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][60 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x648);
        reg = x648;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x649 = host_outs.at(0);
      auto x650 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][61 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x649);
        reg = x649;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][62 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x650);
        reg = x650;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x651 = host_outs.at(0);
      auto x652 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][63 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x651);
        reg = x651;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][64 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x652);
        reg = x652;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x653 = host_outs.at(0);
      auto x654 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][65 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x653);
        reg = x653;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][66 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x654);
        reg = x654;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x655 = host_outs.at(0);
      auto x656 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][67 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x655);
        reg = x655;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][68 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x656);
        reg = x656;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x657 = host_outs.at(0);
      auto x658 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x657);
        reg = x657;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x658);
        reg = x658;
      }
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x659 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x659 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x660 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x660 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x661 = args[2][37 * steps + ((cycle - 0) & mask)];
    assert(x661 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x662 = args[2][38 * steps + ((cycle - 0) & mask)];
    assert(x662 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x663 = x661 - x659;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x664 = x662 - x660;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x665 = x663 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x666 = x663 * x665;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x666 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x663 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x662 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x667 = x660 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x668 = x660 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x669 = x667 * x668;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x669 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x670 = x4 - x663;
    if (x670 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x671 = x664 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x672 = x664 * x671;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x673 = x664 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x674 = x672 * x673;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x674 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x675 = args[2][39 * steps + ((cycle - 0) & mask)];
    assert(x675 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x676 = args[2][40 * steps + ((cycle - 0) & mask)];
    assert(x676 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x677 = x675 - x661;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x678 = x676 - x662;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x679 = x677 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x680 = x677 * x679;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x680 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x677 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x676 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x681 = x662 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x682 = x662 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x683 = x681 * x682;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x683 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x684 = x4 - x677;
    if (x684 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x685 = x678 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x686 = x678 * x685;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x687 = x678 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x688 = x686 * x687;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x688 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x689 = args[2][41 * steps + ((cycle - 0) & mask)];
    assert(x689 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x690 = args[2][42 * steps + ((cycle - 0) & mask)];
    assert(x690 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x691 = x689 - x675;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x692 = x690 - x676;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x693 = x691 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x694 = x691 * x693;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x694 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x691 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x690 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x695 = x676 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x696 = x676 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x697 = x695 * x696;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x697 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x698 = x4 - x691;
    if (x698 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x699 = x692 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x700 = x692 * x699;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x701 = x692 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x702 = x700 * x701;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x702 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x703 = args[2][43 * steps + ((cycle - 0) & mask)];
    assert(x703 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x704 = args[2][44 * steps + ((cycle - 0) & mask)];
    assert(x704 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x705 = x703 - x689;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x706 = x704 - x690;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x707 = x705 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x708 = x705 * x707;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x708 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x705 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x704 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x709 = x690 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x710 = x690 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x711 = x709 * x710;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x711 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x712 = x4 - x705;
    if (x712 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x713 = x706 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x714 = x706 * x713;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x715 = x706 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x716 = x714 * x715;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x716 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x717 = args[2][45 * steps + ((cycle - 0) & mask)];
    assert(x717 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x718 = args[2][46 * steps + ((cycle - 0) & mask)];
    assert(x718 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x719 = x717 - x703;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x720 = x718 - x704;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x721 = x719 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x722 = x719 * x721;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x722 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x719 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x718 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x723 = x704 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x724 = x704 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x725 = x723 * x724;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x725 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x726 = x4 - x719;
    if (x726 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x727 = x720 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x728 = x720 * x727;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x729 = x720 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x730 = x728 * x729;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x730 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x731 = args[2][47 * steps + ((cycle - 0) & mask)];
    assert(x731 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x732 = args[2][48 * steps + ((cycle - 0) & mask)];
    assert(x732 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x733 = x731 - x717;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x734 = x732 - x718;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x735 = x733 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x736 = x733 * x735;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x736 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x733 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x732 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x737 = x718 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x738 = x718 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x739 = x737 * x738;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x739 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x740 = x4 - x733;
    if (x740 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x741 = x734 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x742 = x734 * x741;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x743 = x734 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x744 = x742 * x743;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x744 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x745 = args[2][49 * steps + ((cycle - 0) & mask)];
    assert(x745 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x746 = args[2][50 * steps + ((cycle - 0) & mask)];
    assert(x746 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x747 = x745 - x731;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x748 = x746 - x732;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x749 = x747 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x750 = x747 * x749;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x750 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x747 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x746 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x751 = x732 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x752 = x732 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x753 = x751 * x752;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x753 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x754 = x4 - x747;
    if (x754 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x755 = x748 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x756 = x748 * x755;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x757 = x748 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x758 = x756 * x757;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x758 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x759 = args[2][51 * steps + ((cycle - 0) & mask)];
    assert(x759 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x760 = args[2][52 * steps + ((cycle - 0) & mask)];
    assert(x760 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x761 = x759 - x745;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x762 = x760 - x746;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x763 = x761 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x764 = x761 * x763;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x764 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x761 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x760 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x765 = x746 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x766 = x746 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x767 = x765 * x766;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x767 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x768 = x4 - x761;
    if (x768 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x769 = x762 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x770 = x762 * x769;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x771 = x762 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x772 = x770 * x771;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x772 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x773 = args[2][53 * steps + ((cycle - 0) & mask)];
    assert(x773 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x774 = args[2][54 * steps + ((cycle - 0) & mask)];
    assert(x774 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x775 = x773 - x759;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x776 = x774 - x760;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x777 = x775 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x778 = x775 * x777;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x778 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x775 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x774 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x779 = x760 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x780 = x760 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x781 = x779 * x780;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x781 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x782 = x4 - x775;
    if (x782 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x783 = x776 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x784 = x776 * x783;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x785 = x776 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x786 = x784 * x785;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x786 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x787 = args[2][55 * steps + ((cycle - 0) & mask)];
    assert(x787 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x788 = args[2][56 * steps + ((cycle - 0) & mask)];
    assert(x788 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x789 = x787 - x773;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x790 = x788 - x774;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x791 = x789 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x792 = x789 * x791;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x792 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x789 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x788 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x793 = x774 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x794 = x774 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x795 = x793 * x794;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x795 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x796 = x4 - x789;
    if (x796 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x797 = x790 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x798 = x790 * x797;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x799 = x790 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x800 = x798 * x799;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x800 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x801 = args[2][57 * steps + ((cycle - 0) & mask)];
    assert(x801 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x802 = args[2][58 * steps + ((cycle - 0) & mask)];
    assert(x802 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x803 = x801 - x787;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x804 = x802 - x788;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x805 = x803 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x806 = x803 * x805;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x806 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x803 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x802 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x807 = x788 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x808 = x788 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x809 = x807 * x808;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x809 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x810 = x4 - x803;
    if (x810 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x811 = x804 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x812 = x804 * x811;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x813 = x804 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x814 = x812 * x813;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x814 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x815 = args[2][59 * steps + ((cycle - 0) & mask)];
    assert(x815 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x816 = args[2][60 * steps + ((cycle - 0) & mask)];
    assert(x816 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x817 = x815 - x801;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x818 = x816 - x802;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x819 = x817 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x820 = x817 * x819;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x820 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x817 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x816 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x821 = x802 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x822 = x802 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x823 = x821 * x822;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x823 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x824 = x4 - x817;
    if (x824 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x825 = x818 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x826 = x818 * x825;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x827 = x818 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x828 = x826 * x827;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x828 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x829 = args[2][61 * steps + ((cycle - 0) & mask)];
    assert(x829 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x830 = args[2][62 * steps + ((cycle - 0) & mask)];
    assert(x830 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x831 = x829 - x815;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x832 = x830 - x816;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x833 = x831 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x834 = x831 * x833;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x834 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x831 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x830 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x835 = x816 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x836 = x816 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x837 = x835 * x836;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x837 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x838 = x4 - x831;
    if (x838 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x839 = x832 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x840 = x832 * x839;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x841 = x832 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x842 = x840 * x841;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x842 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x843 = args[2][63 * steps + ((cycle - 0) & mask)];
    assert(x843 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x844 = args[2][64 * steps + ((cycle - 0) & mask)];
    assert(x844 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x845 = x843 - x829;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x846 = x844 - x830;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x847 = x845 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x848 = x845 * x847;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x848 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x845 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x844 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x849 = x830 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x850 = x830 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x851 = x849 * x850;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x851 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x852 = x4 - x845;
    if (x852 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x853 = x846 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x854 = x846 * x853;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x855 = x846 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x856 = x854 * x855;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x856 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x857 = args[2][65 * steps + ((cycle - 0) & mask)];
    assert(x857 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x858 = args[2][66 * steps + ((cycle - 0) & mask)];
    assert(x858 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x859 = x857 - x843;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x860 = x858 - x844;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x861 = x859 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x862 = x859 * x861;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x862 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x859 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x858 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x863 = x844 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x864 = x844 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x865 = x863 * x864;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x865 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x866 = x4 - x859;
    if (x866 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x867 = x860 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x868 = x860 * x867;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x869 = x860 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x870 = x868 * x869;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x870 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x871 = args[2][67 * steps + ((cycle - 0) & mask)];
    assert(x871 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x872 = args[2][68 * steps + ((cycle - 0) & mask)];
    assert(x872 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x873 = x871 - x857;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x874 = x872 - x858;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x875 = x873 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x876 = x873 * x875;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x876 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x873 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x872 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x877 = x858 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x878 = x858 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x879 = x877 * x878;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x879 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x880 = x4 - x873;
    if (x880 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x881 = x874 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x882 = x874 * x881;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x883 = x874 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x884 = x882 * x883;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x884 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x885 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x885 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x886 = args[2][1 * steps + ((cycle - 0) & mask)];
    assert(x886 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x887 = x885 - x871;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x888 = x886 - x872;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x889 = x887 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x890 = x887 * x889;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x890 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x887 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x886 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x891 = x872 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x892 = x872 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x893 = x891 * x892;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x893 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x894 = x4 - x887;
    if (x894 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x895 = x888 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x896 = x888 * x895;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x897 = x888 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x898 = x896 * x897;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x898 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  if (x7 != 0) {
    {
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x899 = host_outs.at(0);
      auto x900 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][37 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x899);
        reg = x899;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][38 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x900);
        reg = x900;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x901 = host_outs.at(0);
      auto x902 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][39 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x901);
        reg = x901;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][40 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x902);
        reg = x902;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x903 = host_outs.at(0);
      auto x904 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][41 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x903);
        reg = x903;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][42 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x904);
        reg = x904;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x905 = host_outs.at(0);
      auto x906 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][43 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x905);
        reg = x905;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][44 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x906);
        reg = x906;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x907 = host_outs.at(0);
      auto x908 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][45 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x907);
        reg = x907;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][46 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x908);
        reg = x908;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x909 = host_outs.at(0);
      auto x910 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][47 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x909);
        reg = x909;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][48 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x910);
        reg = x910;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x911 = host_outs.at(0);
      auto x912 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][49 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x911);
        reg = x911;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][50 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x912);
        reg = x912;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x913 = host_outs.at(0);
      auto x914 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][51 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x913);
        reg = x913;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][52 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x914);
        reg = x914;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x915 = host_outs.at(0);
      auto x916 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][53 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x915);
        reg = x915;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][54 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x916);
        reg = x916;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x917 = host_outs.at(0);
      auto x918 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][55 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x917);
        reg = x917;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][56 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x918);
        reg = x918;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x919 = host_outs.at(0);
      auto x920 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][57 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x919);
        reg = x919;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][58 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x920);
        reg = x920;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x921 = host_outs.at(0);
      auto x922 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][59 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x921);
        reg = x921;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][60 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x922);
        reg = x922;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x923 = host_outs.at(0);
      auto x924 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][61 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x923);
        reg = x923;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][62 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x924);
        reg = x924;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x925 = host_outs.at(0);
      auto x926 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][63 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x925);
        reg = x925;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][64 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x926);
        reg = x926;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x927 = host_outs.at(0);
      auto x928 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][65 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x927);
        reg = x927;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][66 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x928);
        reg = x928;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x929 = host_outs.at(0);
      auto x930 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][67 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x929);
        reg = x929;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][68 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x930);
        reg = x930;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x931 = host_outs.at(0);
      auto x932 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x931);
        reg = x931;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x932);
        reg = x932;
      }
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x933 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x933 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x934 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x934 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x935 = args[2][37 * steps + ((cycle - 0) & mask)];
    assert(x935 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x936 = args[2][38 * steps + ((cycle - 0) & mask)];
    assert(x936 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x937 = x935 - x933;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x938 = x936 - x934;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x939 = x937 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x940 = x937 * x939;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x940 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x937 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x936 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x941 = x934 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x942 = x934 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x943 = x941 * x942;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x943 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x944 = x4 - x937;
    if (x944 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x945 = x938 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x946 = x938 * x945;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x947 = x938 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x948 = x946 * x947;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x948 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x949 = args[2][39 * steps + ((cycle - 0) & mask)];
    assert(x949 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x950 = args[2][40 * steps + ((cycle - 0) & mask)];
    assert(x950 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x951 = x949 - x935;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x952 = x950 - x936;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x953 = x951 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x954 = x951 * x953;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x954 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x951 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x950 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x955 = x936 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x956 = x936 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x957 = x955 * x956;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x957 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x958 = x4 - x951;
    if (x958 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x959 = x952 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x960 = x952 * x959;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x961 = x952 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x962 = x960 * x961;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x962 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x963 = args[2][41 * steps + ((cycle - 0) & mask)];
    assert(x963 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x964 = args[2][42 * steps + ((cycle - 0) & mask)];
    assert(x964 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x965 = x963 - x949;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x966 = x964 - x950;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x967 = x965 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x968 = x965 * x967;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x968 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x965 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x964 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x969 = x950 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x970 = x950 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x971 = x969 * x970;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x971 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x972 = x4 - x965;
    if (x972 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x973 = x966 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x974 = x966 * x973;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x975 = x966 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x976 = x974 * x975;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x976 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x977 = args[2][43 * steps + ((cycle - 0) & mask)];
    assert(x977 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x978 = args[2][44 * steps + ((cycle - 0) & mask)];
    assert(x978 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x979 = x977 - x963;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x980 = x978 - x964;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x981 = x979 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x982 = x979 * x981;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x982 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x979 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x978 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x983 = x964 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x984 = x964 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x985 = x983 * x984;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x985 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x986 = x4 - x979;
    if (x986 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x987 = x980 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x988 = x980 * x987;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x989 = x980 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x990 = x988 * x989;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x990 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x991 = args[2][45 * steps + ((cycle - 0) & mask)];
    assert(x991 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x992 = args[2][46 * steps + ((cycle - 0) & mask)];
    assert(x992 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x993 = x991 - x977;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x994 = x992 - x978;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x995 = x993 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x996 = x993 * x995;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x996 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x993 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x992 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x997 = x978 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x998 = x978 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x999 = x997 * x998;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x999 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1000 = x4 - x993;
    if (x1000 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1001 = x994 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1002 = x994 * x1001;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1003 = x994 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1004 = x1002 * x1003;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1004 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1005 = args[2][47 * steps + ((cycle - 0) & mask)];
    assert(x1005 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1006 = args[2][48 * steps + ((cycle - 0) & mask)];
    assert(x1006 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1007 = x1005 - x991;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1008 = x1006 - x992;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1009 = x1007 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1010 = x1007 * x1009;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1010 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1007 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1006 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1011 = x992 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1012 = x992 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1013 = x1011 * x1012;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1013 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1014 = x4 - x1007;
    if (x1014 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1015 = x1008 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1016 = x1008 * x1015;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1017 = x1008 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1018 = x1016 * x1017;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1018 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1019 = args[2][49 * steps + ((cycle - 0) & mask)];
    assert(x1019 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1020 = args[2][50 * steps + ((cycle - 0) & mask)];
    assert(x1020 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1021 = x1019 - x1005;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1022 = x1020 - x1006;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1023 = x1021 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1024 = x1021 * x1023;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1024 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1021 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1020 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1025 = x1006 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1026 = x1006 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1027 = x1025 * x1026;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1027 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1028 = x4 - x1021;
    if (x1028 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1029 = x1022 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1030 = x1022 * x1029;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1031 = x1022 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1032 = x1030 * x1031;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1032 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1033 = args[2][51 * steps + ((cycle - 0) & mask)];
    assert(x1033 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1034 = args[2][52 * steps + ((cycle - 0) & mask)];
    assert(x1034 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1035 = x1033 - x1019;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1036 = x1034 - x1020;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1037 = x1035 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1038 = x1035 * x1037;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1038 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1035 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1034 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1039 = x1020 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1040 = x1020 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1041 = x1039 * x1040;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1041 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1042 = x4 - x1035;
    if (x1042 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1043 = x1036 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1044 = x1036 * x1043;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1045 = x1036 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1046 = x1044 * x1045;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1046 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1047 = args[2][53 * steps + ((cycle - 0) & mask)];
    assert(x1047 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1048 = args[2][54 * steps + ((cycle - 0) & mask)];
    assert(x1048 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1049 = x1047 - x1033;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1050 = x1048 - x1034;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1051 = x1049 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1052 = x1049 * x1051;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1052 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1049 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1048 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1053 = x1034 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1054 = x1034 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1055 = x1053 * x1054;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1055 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1056 = x4 - x1049;
    if (x1056 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1057 = x1050 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1058 = x1050 * x1057;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1059 = x1050 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1060 = x1058 * x1059;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1060 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1061 = args[2][55 * steps + ((cycle - 0) & mask)];
    assert(x1061 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1062 = args[2][56 * steps + ((cycle - 0) & mask)];
    assert(x1062 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1063 = x1061 - x1047;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1064 = x1062 - x1048;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1065 = x1063 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1066 = x1063 * x1065;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1066 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1063 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1062 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1067 = x1048 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1068 = x1048 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1069 = x1067 * x1068;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1069 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1070 = x4 - x1063;
    if (x1070 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1071 = x1064 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1072 = x1064 * x1071;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1073 = x1064 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1074 = x1072 * x1073;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1074 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1075 = args[2][57 * steps + ((cycle - 0) & mask)];
    assert(x1075 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1076 = args[2][58 * steps + ((cycle - 0) & mask)];
    assert(x1076 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1077 = x1075 - x1061;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1078 = x1076 - x1062;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1079 = x1077 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1080 = x1077 * x1079;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1080 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1077 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1076 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1081 = x1062 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1082 = x1062 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1083 = x1081 * x1082;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1083 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1084 = x4 - x1077;
    if (x1084 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1085 = x1078 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1086 = x1078 * x1085;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1087 = x1078 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1088 = x1086 * x1087;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1088 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1089 = args[2][59 * steps + ((cycle - 0) & mask)];
    assert(x1089 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1090 = args[2][60 * steps + ((cycle - 0) & mask)];
    assert(x1090 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1091 = x1089 - x1075;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1092 = x1090 - x1076;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1093 = x1091 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1094 = x1091 * x1093;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1094 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1091 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1090 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1095 = x1076 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1096 = x1076 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1097 = x1095 * x1096;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1097 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1098 = x4 - x1091;
    if (x1098 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1099 = x1092 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1100 = x1092 * x1099;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1101 = x1092 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1102 = x1100 * x1101;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1102 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1103 = args[2][61 * steps + ((cycle - 0) & mask)];
    assert(x1103 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1104 = args[2][62 * steps + ((cycle - 0) & mask)];
    assert(x1104 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1105 = x1103 - x1089;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1106 = x1104 - x1090;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1107 = x1105 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1108 = x1105 * x1107;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1108 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1105 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1104 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1109 = x1090 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1110 = x1090 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1111 = x1109 * x1110;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1111 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1112 = x4 - x1105;
    if (x1112 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1113 = x1106 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1114 = x1106 * x1113;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1115 = x1106 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1116 = x1114 * x1115;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1116 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1117 = args[2][63 * steps + ((cycle - 0) & mask)];
    assert(x1117 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1118 = args[2][64 * steps + ((cycle - 0) & mask)];
    assert(x1118 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1119 = x1117 - x1103;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1120 = x1118 - x1104;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1121 = x1119 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1122 = x1119 * x1121;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1122 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1119 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1118 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1123 = x1104 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1124 = x1104 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1125 = x1123 * x1124;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1125 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1126 = x4 - x1119;
    if (x1126 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1127 = x1120 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1128 = x1120 * x1127;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1129 = x1120 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1130 = x1128 * x1129;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1130 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1131 = args[2][65 * steps + ((cycle - 0) & mask)];
    assert(x1131 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1132 = args[2][66 * steps + ((cycle - 0) & mask)];
    assert(x1132 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1133 = x1131 - x1117;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1134 = x1132 - x1118;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1135 = x1133 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1136 = x1133 * x1135;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1136 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1133 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1132 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1137 = x1118 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1138 = x1118 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1139 = x1137 * x1138;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1139 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1140 = x4 - x1133;
    if (x1140 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1141 = x1134 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1142 = x1134 * x1141;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1143 = x1134 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1144 = x1142 * x1143;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1144 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1145 = args[2][67 * steps + ((cycle - 0) & mask)];
    assert(x1145 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1146 = args[2][68 * steps + ((cycle - 0) & mask)];
    assert(x1146 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1147 = x1145 - x1131;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1148 = x1146 - x1132;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1149 = x1147 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1150 = x1147 * x1149;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1150 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1147 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1146 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1151 = x1132 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1152 = x1132 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1153 = x1151 * x1152;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1153 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1154 = x4 - x1147;
    if (x1154 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1155 = x1148 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1156 = x1148 * x1155;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1157 = x1148 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1158 = x1156 * x1157;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1158 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1159 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x1159 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1160 = args[2][1 * steps + ((cycle - 0) & mask)];
    assert(x1160 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1161 = x1159 - x1145;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1162 = x1160 - x1146;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1163 = x1161 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1164 = x1161 * x1163;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1164 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1161 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1160 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1165 = x1146 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1166 = x1146 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1167 = x1165 * x1166;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1167 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1168 = x4 - x1161;
    if (x1168 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1169 = x1162 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1170 = x1162 * x1169;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1171 = x1162 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1172 = x1170 * x1171;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1172 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  if (x8 != 0) {
    {
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1173 = host_outs.at(0);
      auto x1174 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][37 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1173);
        reg = x1173;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][38 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1174);
        reg = x1174;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1175 = host_outs.at(0);
      auto x1176 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][39 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1175);
        reg = x1175;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][40 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1176);
        reg = x1176;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1177 = host_outs.at(0);
      auto x1178 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][41 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1177);
        reg = x1177;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][42 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1178);
        reg = x1178;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1179 = host_outs.at(0);
      auto x1180 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][43 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1179);
        reg = x1179;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][44 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1180);
        reg = x1180;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1181 = host_outs.at(0);
      auto x1182 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][45 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1181);
        reg = x1181;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][46 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1182);
        reg = x1182;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1183 = host_outs.at(0);
      auto x1184 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][47 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1183);
        reg = x1183;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][48 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1184);
        reg = x1184;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1185 = host_outs.at(0);
      auto x1186 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][49 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1185);
        reg = x1185;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][50 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1186);
        reg = x1186;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1187 = host_outs.at(0);
      auto x1188 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][51 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1187);
        reg = x1187;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][52 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1188);
        reg = x1188;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1189 = host_outs.at(0);
      auto x1190 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][53 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1189);
        reg = x1189;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][54 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1190);
        reg = x1190;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1191 = host_outs.at(0);
      auto x1192 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][55 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1191);
        reg = x1191;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][56 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1192);
        reg = x1192;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1193 = host_outs.at(0);
      auto x1194 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][57 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1193);
        reg = x1193;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][58 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1194);
        reg = x1194;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1195 = host_outs.at(0);
      auto x1196 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][59 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1195);
        reg = x1195;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][60 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1196);
        reg = x1196;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1197 = host_outs.at(0);
      auto x1198 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][61 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1197);
        reg = x1197;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][62 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1198);
        reg = x1198;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1199 = host_outs.at(0);
      auto x1200 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][63 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1199);
        reg = x1199;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][64 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1200);
        reg = x1200;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1201 = host_outs.at(0);
      auto x1202 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][65 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1201);
        reg = x1201;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][66 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1202);
        reg = x1202;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1203 = host_outs.at(0);
      auto x1204 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][67 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1203);
        reg = x1203;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][68 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1204);
        reg = x1204;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1205 = host_outs.at(0);
      auto x1206 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1205);
        reg = x1205;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1206);
        reg = x1206;
      }
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x1207 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1207 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x1208 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x1208 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1209 = args[2][37 * steps + ((cycle - 0) & mask)];
    assert(x1209 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1210 = args[2][38 * steps + ((cycle - 0) & mask)];
    assert(x1210 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1211 = x1209 - x1207;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1212 = x1210 - x1208;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1213 = x1211 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1214 = x1211 * x1213;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1214 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1211 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1210 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1215 = x1208 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1216 = x1208 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1217 = x1215 * x1216;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1217 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1218 = x4 - x1211;
    if (x1218 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1219 = x1212 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1220 = x1212 * x1219;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1221 = x1212 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1222 = x1220 * x1221;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1222 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1223 = args[2][39 * steps + ((cycle - 0) & mask)];
    assert(x1223 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1224 = args[2][40 * steps + ((cycle - 0) & mask)];
    assert(x1224 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1225 = x1223 - x1209;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1226 = x1224 - x1210;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1227 = x1225 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1228 = x1225 * x1227;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1228 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1225 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1224 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1229 = x1210 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1230 = x1210 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1231 = x1229 * x1230;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1231 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1232 = x4 - x1225;
    if (x1232 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1233 = x1226 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1234 = x1226 * x1233;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1235 = x1226 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1236 = x1234 * x1235;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1236 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1237 = args[2][41 * steps + ((cycle - 0) & mask)];
    assert(x1237 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1238 = args[2][42 * steps + ((cycle - 0) & mask)];
    assert(x1238 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1239 = x1237 - x1223;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1240 = x1238 - x1224;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1241 = x1239 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1242 = x1239 * x1241;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1242 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1239 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1238 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1243 = x1224 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1244 = x1224 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1245 = x1243 * x1244;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1245 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1246 = x4 - x1239;
    if (x1246 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1247 = x1240 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1248 = x1240 * x1247;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1249 = x1240 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1250 = x1248 * x1249;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1250 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1251 = args[2][43 * steps + ((cycle - 0) & mask)];
    assert(x1251 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1252 = args[2][44 * steps + ((cycle - 0) & mask)];
    assert(x1252 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1253 = x1251 - x1237;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1254 = x1252 - x1238;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1255 = x1253 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1256 = x1253 * x1255;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1256 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1253 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1252 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1257 = x1238 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1258 = x1238 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1259 = x1257 * x1258;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1259 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1260 = x4 - x1253;
    if (x1260 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1261 = x1254 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1262 = x1254 * x1261;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1263 = x1254 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1264 = x1262 * x1263;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1264 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1265 = args[2][45 * steps + ((cycle - 0) & mask)];
    assert(x1265 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1266 = args[2][46 * steps + ((cycle - 0) & mask)];
    assert(x1266 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1267 = x1265 - x1251;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1268 = x1266 - x1252;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1269 = x1267 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1270 = x1267 * x1269;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1270 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1267 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1266 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1271 = x1252 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1272 = x1252 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1273 = x1271 * x1272;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1273 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1274 = x4 - x1267;
    if (x1274 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1275 = x1268 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1276 = x1268 * x1275;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1277 = x1268 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1278 = x1276 * x1277;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1278 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1279 = args[2][47 * steps + ((cycle - 0) & mask)];
    assert(x1279 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1280 = args[2][48 * steps + ((cycle - 0) & mask)];
    assert(x1280 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1281 = x1279 - x1265;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1282 = x1280 - x1266;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1283 = x1281 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1284 = x1281 * x1283;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1284 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1281 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1280 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1285 = x1266 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1286 = x1266 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1287 = x1285 * x1286;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1287 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1288 = x4 - x1281;
    if (x1288 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1289 = x1282 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1290 = x1282 * x1289;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1291 = x1282 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1292 = x1290 * x1291;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1292 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1293 = args[2][49 * steps + ((cycle - 0) & mask)];
    assert(x1293 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1294 = args[2][50 * steps + ((cycle - 0) & mask)];
    assert(x1294 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1295 = x1293 - x1279;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1296 = x1294 - x1280;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1297 = x1295 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1298 = x1295 * x1297;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1298 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1295 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1294 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1299 = x1280 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1300 = x1280 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1301 = x1299 * x1300;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1301 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1302 = x4 - x1295;
    if (x1302 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1303 = x1296 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1304 = x1296 * x1303;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1305 = x1296 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1306 = x1304 * x1305;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1306 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1307 = args[2][51 * steps + ((cycle - 0) & mask)];
    assert(x1307 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1308 = args[2][52 * steps + ((cycle - 0) & mask)];
    assert(x1308 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1309 = x1307 - x1293;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1310 = x1308 - x1294;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1311 = x1309 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1312 = x1309 * x1311;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1312 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1309 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1308 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1313 = x1294 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1314 = x1294 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1315 = x1313 * x1314;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1315 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1316 = x4 - x1309;
    if (x1316 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1317 = x1310 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1318 = x1310 * x1317;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1319 = x1310 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1320 = x1318 * x1319;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1320 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1321 = args[2][53 * steps + ((cycle - 0) & mask)];
    assert(x1321 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1322 = args[2][54 * steps + ((cycle - 0) & mask)];
    assert(x1322 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1323 = x1321 - x1307;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1324 = x1322 - x1308;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1325 = x1323 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1326 = x1323 * x1325;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1326 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1323 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1322 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1327 = x1308 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1328 = x1308 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1329 = x1327 * x1328;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1329 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1330 = x4 - x1323;
    if (x1330 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1331 = x1324 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1332 = x1324 * x1331;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1333 = x1324 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1334 = x1332 * x1333;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1334 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1335 = args[2][55 * steps + ((cycle - 0) & mask)];
    assert(x1335 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1336 = args[2][56 * steps + ((cycle - 0) & mask)];
    assert(x1336 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1337 = x1335 - x1321;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1338 = x1336 - x1322;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1339 = x1337 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1340 = x1337 * x1339;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1340 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1337 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1336 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1341 = x1322 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1342 = x1322 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1343 = x1341 * x1342;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1343 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1344 = x4 - x1337;
    if (x1344 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1345 = x1338 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1346 = x1338 * x1345;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1347 = x1338 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1348 = x1346 * x1347;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1348 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1349 = args[2][57 * steps + ((cycle - 0) & mask)];
    assert(x1349 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1350 = args[2][58 * steps + ((cycle - 0) & mask)];
    assert(x1350 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1351 = x1349 - x1335;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1352 = x1350 - x1336;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1353 = x1351 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1354 = x1351 * x1353;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1354 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1351 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1350 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1355 = x1336 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1356 = x1336 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1357 = x1355 * x1356;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1357 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1358 = x4 - x1351;
    if (x1358 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1359 = x1352 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1360 = x1352 * x1359;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1361 = x1352 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1362 = x1360 * x1361;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1362 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1363 = args[2][59 * steps + ((cycle - 0) & mask)];
    assert(x1363 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1364 = args[2][60 * steps + ((cycle - 0) & mask)];
    assert(x1364 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1365 = x1363 - x1349;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1366 = x1364 - x1350;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1367 = x1365 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1368 = x1365 * x1367;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1368 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1365 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1364 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1369 = x1350 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1370 = x1350 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1371 = x1369 * x1370;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1371 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1372 = x4 - x1365;
    if (x1372 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1373 = x1366 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1374 = x1366 * x1373;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1375 = x1366 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1376 = x1374 * x1375;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1376 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1377 = args[2][61 * steps + ((cycle - 0) & mask)];
    assert(x1377 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1378 = args[2][62 * steps + ((cycle - 0) & mask)];
    assert(x1378 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1379 = x1377 - x1363;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1380 = x1378 - x1364;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1381 = x1379 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1382 = x1379 * x1381;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1382 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1379 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1378 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1383 = x1364 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1384 = x1364 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1385 = x1383 * x1384;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1385 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1386 = x4 - x1379;
    if (x1386 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1387 = x1380 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1388 = x1380 * x1387;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1389 = x1380 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1390 = x1388 * x1389;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1390 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1391 = args[2][63 * steps + ((cycle - 0) & mask)];
    assert(x1391 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1392 = args[2][64 * steps + ((cycle - 0) & mask)];
    assert(x1392 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1393 = x1391 - x1377;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1394 = x1392 - x1378;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1395 = x1393 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1396 = x1393 * x1395;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1396 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1393 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1392 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1397 = x1378 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1398 = x1378 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1399 = x1397 * x1398;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1399 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1400 = x4 - x1393;
    if (x1400 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1401 = x1394 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1402 = x1394 * x1401;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1403 = x1394 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1404 = x1402 * x1403;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1404 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1405 = args[2][65 * steps + ((cycle - 0) & mask)];
    assert(x1405 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1406 = args[2][66 * steps + ((cycle - 0) & mask)];
    assert(x1406 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1407 = x1405 - x1391;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1408 = x1406 - x1392;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1409 = x1407 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1410 = x1407 * x1409;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1410 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1407 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1406 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1411 = x1392 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1412 = x1392 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1413 = x1411 * x1412;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1413 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1414 = x4 - x1407;
    if (x1414 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1415 = x1408 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1416 = x1408 * x1415;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1417 = x1408 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1418 = x1416 * x1417;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1418 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1419 = args[2][67 * steps + ((cycle - 0) & mask)];
    assert(x1419 != Fp::invalid());
    // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1420 = args[2][68 * steps + ((cycle - 0) & mask)];
    assert(x1420 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1421 = x1419 - x1405;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1422 = x1420 - x1406;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1423 = x1421 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1424 = x1421 * x1423;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1424 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1421 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1420 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1425 = x1406 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1426 = x1406 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1427 = x1425 * x1426;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1427 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1428 = x4 - x1421;
    if (x1428 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1429 = x1422 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1430 = x1422 * x1429;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1431 = x1422 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1432 = x1430 * x1431;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1432 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1433 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x1433 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1434 = args[2][1 * steps + ((cycle - 0) & mask)];
    assert(x1434 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1435 = x1433 - x1419;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1436 = x1434 - x1420;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1437 = x1435 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1438 = x1435 * x1437;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1438 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1435 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1434 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1439 = x1420 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1440 = x1420 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1441 = x1439 * x1440;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1441 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1442 = x4 - x1435;
    if (x1442 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1443 = x1436 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1444 = x1436 * x1443;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1445 = x1436 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1446 = x1444 * x1445;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1446 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  if (x9 != 0) {
    {
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1447 = host_outs.at(0);
      auto x1448 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][37 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1447);
        reg = x1447;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][38 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1448);
        reg = x1448;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1449 = host_outs.at(0);
      auto x1450 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][39 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1449);
        reg = x1449;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][40 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1450);
        reg = x1450;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1451 = host_outs.at(0);
      auto x1452 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][41 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1451);
        reg = x1451;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][42 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1452);
        reg = x1452;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1453 = host_outs.at(0);
      auto x1454 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][43 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1453);
        reg = x1453;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][44 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1454);
        reg = x1454;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1455 = host_outs.at(0);
      auto x1456 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][45 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1455);
        reg = x1455;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][46 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1456);
        reg = x1456;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1457 = host_outs.at(0);
      auto x1458 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][47 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1457);
        reg = x1457;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][48 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1458);
        reg = x1458;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1459 = host_outs.at(0);
      auto x1460 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][49 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1459);
        reg = x1459;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][50 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1460);
        reg = x1460;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1461 = host_outs.at(0);
      auto x1462 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][51 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1461);
        reg = x1461;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][52 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1462);
        reg = x1462;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1463 = host_outs.at(0);
      auto x1464 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][53 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1463);
        reg = x1463;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][54 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1464);
        reg = x1464;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1465 = host_outs.at(0);
      auto x1466 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][55 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1465);
        reg = x1465;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][56 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1466);
        reg = x1466;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1467 = host_outs.at(0);
      auto x1468 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][57 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1467);
        reg = x1467;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][58 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1468);
        reg = x1468;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1469 = host_outs.at(0);
      auto x1470 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][59 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1469);
        reg = x1469;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][60 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1470);
        reg = x1470;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1471 = host_outs.at(0);
      auto x1472 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][61 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1471);
        reg = x1471;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][62 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1472);
        reg = x1472;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1473 = host_outs.at(0);
      auto x1474 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][63 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1473);
        reg = x1473;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][64 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1474);
        reg = x1474;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1475 = host_outs.at(0);
      auto x1476 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][65 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1475);
        reg = x1475;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][66 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1476);
        reg = x1476;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1477 = host_outs.at(0);
      auto x1478 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][67 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1477);
        reg = x1477;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][68 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1478);
        reg = x1478;
      }
      host(ctx, "plonkRead", "bytes", host_args.data(), 0, host_outs.data(), 2);
      auto x1479 = host_outs.at(0);
      auto x1480 = host_outs.at(1);
      // loc("zirgen/components/bytes.cpp":16:3)
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1479);
        reg = x1479;
      }
      // loc("zirgen/components/bytes.cpp":17:3)
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1480);
        reg = x1480;
      }
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x1481 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1481 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x1482 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x1482 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1483 = args[2][37 * steps + ((cycle - 0) & mask)];
    assert(x1483 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1484 = args[2][38 * steps + ((cycle - 0) & mask)];
    assert(x1484 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1485 = x1483 - x1481;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1486 = x1484 - x1482;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1487 = x1485 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1488 = x1485 * x1487;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1488 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1485 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1484 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1489 = x1482 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1490 = x1482 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1491 = x1489 * x1490;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1491 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1492 = x4 - x1485;
    if (x1492 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1493 = x1486 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1494 = x1486 * x1493;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1495 = x1486 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1496 = x1494 * x1495;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1496 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1497 = args[2][39 * steps + ((cycle - 0) & mask)];
    assert(x1497 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1498 = args[2][40 * steps + ((cycle - 0) & mask)];
    assert(x1498 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1499 = x1497 - x1483;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1500 = x1498 - x1484;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1501 = x1499 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1502 = x1499 * x1501;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1502 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1499 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1498 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1503 = x1484 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1504 = x1484 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1505 = x1503 * x1504;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1505 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1506 = x4 - x1499;
    if (x1506 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1507 = x1500 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1508 = x1500 * x1507;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1509 = x1500 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1510 = x1508 * x1509;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1510 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1511 = args[2][41 * steps + ((cycle - 0) & mask)];
    assert(x1511 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1512 = args[2][42 * steps + ((cycle - 0) & mask)];
    assert(x1512 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1513 = x1511 - x1497;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1514 = x1512 - x1498;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1515 = x1513 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1516 = x1513 * x1515;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1516 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1513 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1512 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1517 = x1498 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1518 = x1498 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1519 = x1517 * x1518;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1519 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1520 = x4 - x1513;
    if (x1520 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1521 = x1514 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1522 = x1514 * x1521;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1523 = x1514 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1524 = x1522 * x1523;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1524 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1525 = args[2][43 * steps + ((cycle - 0) & mask)];
    assert(x1525 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1526 = args[2][44 * steps + ((cycle - 0) & mask)];
    assert(x1526 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1527 = x1525 - x1511;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1528 = x1526 - x1512;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1529 = x1527 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1530 = x1527 * x1529;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1530 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1527 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1526 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1531 = x1512 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1532 = x1512 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1533 = x1531 * x1532;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1533 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1534 = x4 - x1527;
    if (x1534 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1535 = x1528 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1536 = x1528 * x1535;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1537 = x1528 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1538 = x1536 * x1537;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1538 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1539 = args[2][45 * steps + ((cycle - 0) & mask)];
    assert(x1539 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1540 = args[2][46 * steps + ((cycle - 0) & mask)];
    assert(x1540 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1541 = x1539 - x1525;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1542 = x1540 - x1526;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1543 = x1541 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1544 = x1541 * x1543;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1544 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1541 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1540 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1545 = x1526 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1546 = x1526 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1547 = x1545 * x1546;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1547 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1548 = x4 - x1541;
    if (x1548 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1549 = x1542 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1550 = x1542 * x1549;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1551 = x1542 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1552 = x1550 * x1551;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1552 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1553 = args[2][47 * steps + ((cycle - 0) & mask)];
    assert(x1553 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1554 = args[2][48 * steps + ((cycle - 0) & mask)];
    assert(x1554 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1555 = x1553 - x1539;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1556 = x1554 - x1540;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1557 = x1555 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1558 = x1555 * x1557;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1558 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1555 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1554 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1559 = x1540 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1560 = x1540 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1561 = x1559 * x1560;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1561 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1562 = x4 - x1555;
    if (x1562 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1563 = x1556 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1564 = x1556 * x1563;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1565 = x1556 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1566 = x1564 * x1565;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1566 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1567 = args[2][49 * steps + ((cycle - 0) & mask)];
    assert(x1567 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1568 = args[2][50 * steps + ((cycle - 0) & mask)];
    assert(x1568 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1569 = x1567 - x1553;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1570 = x1568 - x1554;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1571 = x1569 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1572 = x1569 * x1571;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1572 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1569 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1568 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1573 = x1554 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1574 = x1554 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1575 = x1573 * x1574;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1575 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1576 = x4 - x1569;
    if (x1576 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1577 = x1570 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1578 = x1570 * x1577;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1579 = x1570 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1580 = x1578 * x1579;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1580 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1581 = args[2][51 * steps + ((cycle - 0) & mask)];
    assert(x1581 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1582 = args[2][52 * steps + ((cycle - 0) & mask)];
    assert(x1582 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1583 = x1581 - x1567;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1584 = x1582 - x1568;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1585 = x1583 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1586 = x1583 * x1585;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1586 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1583 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1582 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1587 = x1568 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1588 = x1568 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1589 = x1587 * x1588;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1589 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1590 = x4 - x1583;
    if (x1590 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1591 = x1584 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1592 = x1584 * x1591;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1593 = x1584 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1594 = x1592 * x1593;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1594 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1595 = args[2][53 * steps + ((cycle - 0) & mask)];
    assert(x1595 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1596 = args[2][54 * steps + ((cycle - 0) & mask)];
    assert(x1596 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1597 = x1595 - x1581;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1598 = x1596 - x1582;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1599 = x1597 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1600 = x1597 * x1599;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1600 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1597 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1596 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1601 = x1582 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1602 = x1582 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1603 = x1601 * x1602;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1603 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1604 = x4 - x1597;
    if (x1604 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1605 = x1598 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1606 = x1598 * x1605;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1607 = x1598 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1608 = x1606 * x1607;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1608 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1609 = args[2][55 * steps + ((cycle - 0) & mask)];
    assert(x1609 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1610 = args[2][56 * steps + ((cycle - 0) & mask)];
    assert(x1610 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1611 = x1609 - x1595;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1612 = x1610 - x1596;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1613 = x1611 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1614 = x1611 * x1613;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1614 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1611 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1610 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1615 = x1596 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1616 = x1596 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1617 = x1615 * x1616;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1617 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1618 = x4 - x1611;
    if (x1618 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1619 = x1612 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1620 = x1612 * x1619;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1621 = x1612 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1622 = x1620 * x1621;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1622 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1623 = args[2][57 * steps + ((cycle - 0) & mask)];
    assert(x1623 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1624 = args[2][58 * steps + ((cycle - 0) & mask)];
    assert(x1624 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1625 = x1623 - x1609;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1626 = x1624 - x1610;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1627 = x1625 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1628 = x1625 * x1627;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1628 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1625 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1624 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1629 = x1610 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1630 = x1610 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1631 = x1629 * x1630;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1631 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1632 = x4 - x1625;
    if (x1632 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1633 = x1626 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1634 = x1626 * x1633;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1635 = x1626 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1636 = x1634 * x1635;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1636 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1637 = args[2][59 * steps + ((cycle - 0) & mask)];
    assert(x1637 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1638 = args[2][60 * steps + ((cycle - 0) & mask)];
    assert(x1638 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1639 = x1637 - x1623;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1640 = x1638 - x1624;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1641 = x1639 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1642 = x1639 * x1641;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1642 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1639 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1638 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1643 = x1624 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1644 = x1624 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1645 = x1643 * x1644;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1645 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1646 = x4 - x1639;
    if (x1646 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1647 = x1640 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1648 = x1640 * x1647;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1649 = x1640 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1650 = x1648 * x1649;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1650 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1651 = args[2][61 * steps + ((cycle - 0) & mask)];
    assert(x1651 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1652 = args[2][62 * steps + ((cycle - 0) & mask)];
    assert(x1652 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1653 = x1651 - x1637;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1654 = x1652 - x1638;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1655 = x1653 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1656 = x1653 * x1655;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1656 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1653 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1652 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1657 = x1638 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1658 = x1638 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1659 = x1657 * x1658;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1659 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1660 = x4 - x1653;
    if (x1660 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1661 = x1654 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1662 = x1654 * x1661;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1663 = x1654 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1664 = x1662 * x1663;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1664 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1665 = args[2][63 * steps + ((cycle - 0) & mask)];
    assert(x1665 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1666 = args[2][64 * steps + ((cycle - 0) & mask)];
    assert(x1666 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1667 = x1665 - x1651;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1668 = x1666 - x1652;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1669 = x1667 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1670 = x1667 * x1669;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1670 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1667 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1666 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1671 = x1652 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1672 = x1652 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1673 = x1671 * x1672;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1673 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1674 = x4 - x1667;
    if (x1674 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1675 = x1668 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1676 = x1668 * x1675;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1677 = x1668 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1678 = x1676 * x1677;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1678 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1679 = args[2][65 * steps + ((cycle - 0) & mask)];
    assert(x1679 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1680 = args[2][66 * steps + ((cycle - 0) & mask)];
    assert(x1680 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1681 = x1679 - x1665;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1682 = x1680 - x1666;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1683 = x1681 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1684 = x1681 * x1683;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1684 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1681 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1680 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1685 = x1666 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1686 = x1666 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1687 = x1685 * x1686;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1687 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1688 = x4 - x1681;
    if (x1688 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1689 = x1682 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1690 = x1682 * x1689;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1691 = x1682 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1692 = x1690 * x1691;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1692 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1693 = args[2][67 * steps + ((cycle - 0) & mask)];
    assert(x1693 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1694 = args[2][68 * steps + ((cycle - 0) & mask)];
    assert(x1694 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1695 = x1693 - x1679;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1696 = x1694 - x1680;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1697 = x1695 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1698 = x1695 * x1697;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1698 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1695 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1694 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1699 = x1680 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1700 = x1680 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1701 = x1699 * x1700;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1701 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1702 = x4 - x1695;
    if (x1702 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1703 = x1696 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1704 = x1696 * x1703;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1705 = x1696 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1706 = x1704 * x1705;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1706 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1707 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x1707 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1708 = args[2][1 * steps + ((cycle - 0) & mask)];
    assert(x1708 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1709 = x1707 - x1693;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1710 = x1708 - x1694;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1711 = x1709 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1712 = x1709 * x1711;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1712 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1709 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1708 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1713 = x1694 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1714 = x1694 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1715 = x1713 * x1714;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1715 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1716 = x4 - x1709;
    if (x1716 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1717 = x1710 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1718 = x1710 * x1717;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1719 = x1710 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1720 = x1718 * x1719;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1720 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  if (x10 != 0) {
    // loc("zirgen/components/bytes.cpp":26:3)
    {
      auto& reg = args[2][3 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x0);
      reg = x0;
    }
    // loc("zirgen/components/bytes.cpp":27:3)
    {
      auto& reg = args[2][4 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x0);
      reg = x0;
    }
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":62:42))
    auto x1721 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1721 != Fp::invalid());
    // loc("Top/BytesHeader/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":63:40))
    auto x1722 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x1722 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_fini(BytesFiniStep)/PlonkFini/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1723 = args[2][3 * steps + ((cycle - 0) & mask)];
    assert(x1723 != Fp::invalid());
    // loc("Top/mux(Mux)/bytes_fini(BytesFiniStep)/PlonkFini/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x1724 = args[2][4 * steps + ((cycle - 0) & mask)];
    assert(x1724 != Fp::invalid());
    // loc("zirgen/components/bytes.cpp":66:18)
    auto x1725 = x1723 - x1721;
    // loc("zirgen/components/bytes.cpp":67:17)
    auto x1726 = x1724 - x1722;
    // loc("zirgen/components/bytes.cpp":69:19)
    auto x1727 = x1725 - x4;
    // loc("zirgen/components/bytes.cpp":69:7)
    auto x1728 = x1725 * x1727;
    // loc("zirgen/components/bytes.cpp":69:7)
    if (x1728 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:69");
    if (x1725 != 0) {
      // loc("zirgen/components/bytes.cpp":73:9)
      if (x1724 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:73");
      // loc("zirgen/components/bytes.cpp":75:10)
      auto x1729 = x1722 - x0;
      // loc("zirgen/components/bytes.cpp":75:27)
      auto x1730 = x1722 - x2;
      // loc("zirgen/components/bytes.cpp":75:9)
      auto x1731 = x1729 * x1730;
      // loc("zirgen/components/bytes.cpp":75:9)
      if (x1731 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:75");
    }
    // loc("zirgen/components/bytes.cpp":77:18)
    auto x1732 = x4 - x1725;
    if (x1732 != 0) {
      // loc("zirgen/components/bytes.cpp":79:20)
      auto x1733 = x1726 - x4;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1734 = x1726 * x1733;
      // loc("zirgen/components/bytes.cpp":79:36)
      auto x1735 = x1726 - x1;
      // loc("zirgen/components/bytes.cpp":79:9)
      auto x1736 = x1734 * x1735;
      // loc("zirgen/components/bytes.cpp":79:9)
      if (x1736 != 0) throw std::runtime_error("eqz failed at: zirgen/components/bytes.cpp:79");
    }
  }
  return x3;
}

} // namespace risc0::circuit::rv32im
// clang-format on
