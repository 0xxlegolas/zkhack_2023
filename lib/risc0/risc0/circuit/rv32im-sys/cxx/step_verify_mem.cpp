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

Fp step_verify_mem(void* ctx, HostBridge host, size_t steps, size_t cycle, Fp** args) {
  size_t mask = steps - 1;
  std::array<Fp, 96> host_args;
  std::array<Fp, 32> host_outs;
  // loc("zirgen/components/ram.cpp":23:14)
  Fp x0(33554431);
  // loc("zirgen/components/ram.cpp":22:13)
  Fp x1(67108863);
  // loc("zirgen/circuit/rv32im/body.cpp":17:32)
  Fp x2(3);
  // loc("zirgen/components/bytes.cpp":97:30)
  Fp x3(2005401601);
  // loc("zirgen/components/bytes.cpp":96:26)
  Fp x4(255);
  // loc("zirgen/components/bytes.cpp":37:25)
  Fp x5(2);
  // loc("zirgen/components/bytes.cpp":21:13)
  Fp x6(0);
  // loc("zirgen/circuit/rv32im/top.cpp":17:17)
  Fp x7(1);
  // loc("Top/Code/OneHot/hot[1](Reg)"("./zirgen/components/mux.h":49:25))
  auto x8 = args[0][2 * steps + ((cycle - 0) & mask)];
  assert(x8 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[3](Reg)"("./zirgen/components/mux.h":49:25))
  auto x9 = args[0][4 * steps + ((cycle - 0) & mask)];
  assert(x9 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[4](Reg)"("./zirgen/components/mux.h":49:25))
  auto x10 = args[0][5 * steps + ((cycle - 0) & mask)];
  assert(x10 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[5](Reg)"("./zirgen/components/mux.h":49:25))
  auto x11 = args[0][6 * steps + ((cycle - 0) & mask)];
  assert(x11 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[6](Reg)"("./zirgen/components/mux.h":49:25))
  auto x12 = args[0][7 * steps + ((cycle - 0) & mask)];
  assert(x12 != Fp::invalid());
  // loc("Top/Code/OneHot/hot[2](Reg)"("zirgen/circuit/rv32im/top.cpp":78:27))
  auto x13 = args[0][3 * steps + ((cycle - 0) & mask)];
  assert(x13 != Fp::invalid());
  if (x13 != 0) {
    // loc("zirgen/components/ram.cpp":15:3)
    {
      auto& reg = args[2][89 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/ram.cpp":16:3)
    {
      auto& reg = args[2][90 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/ram.cpp":17:3)
    {
      auto& reg = args[2][91 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][92 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][93 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][94 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][95 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/ram.cpp":115:3)
    {
      auto& reg = args[2][96 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/ram.cpp":116:3)
    {
      auto& reg = args[2][97 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    {
      // loc("zirgen/components/bytes.cpp":96:12)
      {
        auto& reg = args[2][3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    {
      // loc("zirgen/components/bytes.cpp":96:12)
      {
        auto& reg = args[2][4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    {
      // loc("zirgen/components/bytes.cpp":96:12)
      {
        auto& reg = args[2][5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    // loc("./zirgen/components/bits.h":68:23)
    {
      auto& reg = args[2][69 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
  }
  if (x9 != 0) {
    {
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x14 = host_outs.at(0);
      auto x15 = host_outs.at(1);
      auto x16 = host_outs.at(2);
      auto x17 = host_outs.at(3);
      auto x18 = host_outs.at(4);
      auto x19 = host_outs.at(5);
      auto x20 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][142 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x14);
        reg = x14;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][143 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x15);
        reg = x15;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][144 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x16);
        reg = x16;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][145 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x17);
        reg = x17;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][146 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x18);
        reg = x18;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][147 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x19);
        reg = x19;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][148 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x20);
        reg = x20;
      }
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x21 = host_outs.at(0);
      auto x22 = host_outs.at(1);
      auto x23 = host_outs.at(2);
      auto x24 = host_outs.at(3);
      auto x25 = host_outs.at(4);
      auto x26 = host_outs.at(5);
      auto x27 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][149 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x21);
        reg = x21;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][150 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x22);
        reg = x22;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][151 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x23);
        reg = x23;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][152 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x24);
        reg = x24;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][153 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x25);
        reg = x25;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][154 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x26);
        reg = x26;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][155 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x27);
        reg = x27;
      }
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x28 = host_outs.at(0);
      auto x29 = host_outs.at(1);
      auto x30 = host_outs.at(2);
      auto x31 = host_outs.at(3);
      auto x32 = host_outs.at(4);
      auto x33 = host_outs.at(5);
      auto x34 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][156 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x28);
        reg = x28;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][157 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x29);
        reg = x29;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][158 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x30);
        reg = x30;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][159 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x31);
        reg = x31;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][160 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x32);
        reg = x32;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][161 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x33);
        reg = x33;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][162 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x34);
        reg = x34;
      }
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x35 = host_outs.at(0);
      auto x36 = host_outs.at(1);
      auto x37 = host_outs.at(2);
      auto x38 = host_outs.at(3);
      auto x39 = host_outs.at(4);
      auto x40 = host_outs.at(5);
      auto x41 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x35);
        reg = x35;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x36);
        reg = x36;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x37);
        reg = x37;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x38);
        reg = x38;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x39);
        reg = x39;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x40);
        reg = x40;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x41);
        reg = x41;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/Global/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x42 = args[1][104];
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x43 = args[2][89 * steps + ((cycle - 1) & mask)];
    assert(x43 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x44 = args[2][90 * steps + ((cycle - 1) & mask)];
    assert(x44 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
    auto x45 = args[2][91 * steps + ((cycle - 1) & mask)];
    assert(x45 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x46 = args[2][92 * steps + ((cycle - 1) & mask)];
    assert(x46 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x47 = args[2][93 * steps + ((cycle - 1) & mask)];
    assert(x47 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x48 = args[2][94 * steps + ((cycle - 1) & mask)];
    assert(x48 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x49 = args[2][95 * steps + ((cycle - 1) & mask)];
    assert(x49 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x50 = args[2][145 * steps + ((cycle - 0) & mask)];
    assert(x50 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x51 = args[2][146 * steps + ((cycle - 0) & mask)];
    assert(x51 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x52 = args[2][147 * steps + ((cycle - 0) & mask)];
    assert(x52 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x53 = args[2][148 * steps + ((cycle - 0) & mask)];
    assert(x53 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x54 = args[2][97 * steps + ((cycle - 1) & mask)];
    assert(x54 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x55 = args[2][142 * steps + ((cycle - 0) & mask)];
      assert(x55 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x56 = x43 - x55;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x57 = (x56 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x58 = x7 - x57;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][163 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x58);
        reg = x58;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x59 = args[2][163 * steps + ((cycle - 0) & mask)];
    assert(x59 != Fp::invalid());
    if (x59 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x60 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x60 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x61 = x6 - x60;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x61 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x62 = args[2][142 * steps + ((cycle - 0) & mask)];
      assert(x62 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x63 = x62 - x43;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x64 = x63 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x65 = Fp(x64.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x65);
          reg = x65;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x66 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x66 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x67 = x64 - x66;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x68 = x67 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x69 = Fp(x68.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][7 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x69);
          reg = x69;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x70 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x70 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x71 = x68 - x70;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x72 = x71 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x73 = Fp(x72.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][8 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x73);
          reg = x73;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x74 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x74 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x75 = x72 - x74;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x76 = x75 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x76);
        reg = x76;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x77 = x42 * x54;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x77 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x78 = x7 - x59;
    if (x78 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x79 = args[2][142 * steps + ((cycle - 0) & mask)];
      assert(x79 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x80 = x43 - x79;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x80 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x81 = args[2][143 * steps + ((cycle - 0) & mask)];
      assert(x81 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x82 = x81 * x2;
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x83 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x83 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x84 = x82 + x83;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x85 = x44 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x86 = x84 - x85;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x87 = x86 + x45;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x88 = Fp(x87.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x88);
          reg = x88;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x89 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x89 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x90 = x87 - x89;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x91 = x90 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x92 = Fp(x91.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][7 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x92);
          reg = x92;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x93 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x93 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x94 = x91 - x93;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x95 = x94 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x96 = Fp(x95.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][8 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x96);
          reg = x96;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x97 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x97 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x98 = x95 - x97;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x99 = x98 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x99);
        reg = x99;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x100 = x5 - x83;
      if (x100 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x101 = x46 - x50;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x101 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x102 = x47 - x51;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x102 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x103 = x48 - x52;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x103 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x104 = x49 - x53;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x104 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x105 = args[2][144 * steps + ((cycle - 0) & mask)];
    assert(x105 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x106 = x7 - x105;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x107 = x6 - x105;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x108 = x106 * x107;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x109 = x5 - x105;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x110 = x107 * x109;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x111 = x106 * x109;
    if (x111 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][164 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x108 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][164 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x110 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][164 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x54);
        reg = x54;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x112 = args[2][142 * steps + ((cycle - 0) & mask)];
    assert(x112 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x113 = args[2][143 * steps + ((cycle - 0) & mask)];
    assert(x113 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x114 = args[2][152 * steps + ((cycle - 0) & mask)];
    assert(x114 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x115 = args[2][153 * steps + ((cycle - 0) & mask)];
    assert(x115 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x116 = args[2][154 * steps + ((cycle - 0) & mask)];
    assert(x116 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x117 = args[2][155 * steps + ((cycle - 0) & mask)];
    assert(x117 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x118 = args[2][164 * steps + ((cycle - 0) & mask)];
    assert(x118 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x119 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x119 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x120 = x112 - x119;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x121 = (x120 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x122 = x7 - x121;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][165 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x122);
        reg = x122;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x123 = args[2][165 * steps + ((cycle - 0) & mask)];
    assert(x123 != Fp::invalid());
    if (x123 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x124 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x124 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x125 = x6 - x124;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x125 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x126 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x126 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x127 = x126 - x112;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x128 = x127 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x129 = Fp(x128.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][9 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x129);
          reg = x129;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x130 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x130 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x131 = x128 - x130;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x132 = x131 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x133 = Fp(x132.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][10 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x133);
          reg = x133;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x134 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x134 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x135 = x132 - x134;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x136 = x135 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x137 = Fp(x136.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][11 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x137);
          reg = x137;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x138 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x138 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x139 = x136 - x138;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x140 = x139 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x140);
        reg = x140;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x141 = x42 * x118;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x141 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x142 = x7 - x123;
    if (x142 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x143 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x143 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x144 = x112 - x143;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x144 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x145 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x145 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x146 = x145 * x2;
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x147 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x147 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x148 = x146 + x147;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x149 = x113 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x150 = x148 - x149;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x151 = x150 + x105;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x152 = Fp(x151.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][9 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x152);
          reg = x152;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x153 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x153 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x154 = x151 - x153;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x155 = x154 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x156 = Fp(x155.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][10 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x156);
          reg = x156;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x157 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x157 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x158 = x155 - x157;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x159 = x158 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x160 = Fp(x159.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][11 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x160);
          reg = x160;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x161 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x161 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x162 = x159 - x161;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x163 = x162 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x163);
        reg = x163;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x164 = x5 - x147;
      if (x164 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x165 = x50 - x114;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x165 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x166 = x51 - x115;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x166 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x167 = x52 - x116;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x167 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x168 = x53 - x117;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x168 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x169 = args[2][151 * steps + ((cycle - 0) & mask)];
    assert(x169 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x170 = x7 - x169;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x171 = x6 - x169;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x172 = x170 * x171;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x173 = x5 - x169;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x174 = x171 * x173;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x175 = x170 * x173;
    if (x175 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][166 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x172 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][166 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x174 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][166 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x118);
        reg = x118;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x176 = args[2][149 * steps + ((cycle - 0) & mask)];
    assert(x176 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x177 = args[2][150 * steps + ((cycle - 0) & mask)];
    assert(x177 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x178 = args[2][159 * steps + ((cycle - 0) & mask)];
    assert(x178 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x179 = args[2][160 * steps + ((cycle - 0) & mask)];
    assert(x179 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x180 = args[2][161 * steps + ((cycle - 0) & mask)];
    assert(x180 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x181 = args[2][162 * steps + ((cycle - 0) & mask)];
    assert(x181 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x182 = args[2][166 * steps + ((cycle - 0) & mask)];
    assert(x182 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x183 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x183 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x184 = x176 - x183;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x185 = (x184 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x186 = x7 - x185;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][167 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x186);
        reg = x186;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x187 = args[2][167 * steps + ((cycle - 0) & mask)];
    assert(x187 != Fp::invalid());
    if (x187 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x188 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x188 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x189 = x6 - x188;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x189 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x190 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x190 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x191 = x190 - x176;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x192 = x191 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x193 = Fp(x192.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][12 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x193);
          reg = x193;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x194 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x194 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x195 = x192 - x194;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x196 = x195 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x197 = Fp(x196.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][13 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x197);
          reg = x197;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x198 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x198 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x199 = x196 - x198;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x200 = x199 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x201 = Fp(x200.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][14 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x201);
          reg = x201;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x202 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x202 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x203 = x200 - x202;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x204 = x203 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x204);
        reg = x204;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x205 = x42 * x182;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x205 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x206 = x7 - x187;
    if (x206 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x207 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x207 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x208 = x176 - x207;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x208 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x209 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x209 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x210 = x209 * x2;
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x211 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x211 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x212 = x210 + x211;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x213 = x177 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x214 = x212 - x213;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x215 = x214 + x169;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x216 = Fp(x215.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][12 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x216);
          reg = x216;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x217 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x217 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x218 = x215 - x217;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x219 = x218 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x220 = Fp(x219.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][13 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x220);
          reg = x220;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x221 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x221 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x222 = x219 - x221;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x223 = x222 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x224 = Fp(x223.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][14 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x224);
          reg = x224;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x225 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x225 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x226 = x223 - x225;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x227 = x226 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x227);
        reg = x227;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x228 = x5 - x211;
      if (x228 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x229 = x114 - x178;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x229 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x230 = x115 - x179;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x230 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x231 = x116 - x180;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x231 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x232 = x117 - x181;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x232 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x233 = args[2][158 * steps + ((cycle - 0) & mask)];
    assert(x233 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x234 = x7 - x233;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x235 = x6 - x233;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x236 = x234 * x235;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x237 = x5 - x233;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x238 = x235 * x237;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x239 = x234 * x237;
    if (x239 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][168 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x236 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][168 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x238 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][168 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x182);
        reg = x182;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x240 = args[2][156 * steps + ((cycle - 0) & mask)];
    assert(x240 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x241 = args[2][157 * steps + ((cycle - 0) & mask)];
    assert(x241 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x242 = args[2][92 * steps + ((cycle - 0) & mask)];
    assert(x242 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x243 = args[2][93 * steps + ((cycle - 0) & mask)];
    assert(x243 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x244 = args[2][94 * steps + ((cycle - 0) & mask)];
    assert(x244 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x245 = args[2][95 * steps + ((cycle - 0) & mask)];
    assert(x245 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x246 = args[2][168 * steps + ((cycle - 0) & mask)];
    assert(x246 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x247 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x247 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x248 = x240 - x247;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x249 = (x248 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x250 = x7 - x249;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x250);
        reg = x250;
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x251 = args[2][96 * steps + ((cycle - 0) & mask)];
    assert(x251 != Fp::invalid());
    if (x251 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x252 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x252 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x253 = x6 - x252;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x253 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x254 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x254 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x255 = x254 - x240;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x256 = x255 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x257 = Fp(x256.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x257);
          reg = x257;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x258 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x258 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x259 = x256 - x258;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x260 = x259 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x261 = Fp(x260.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x261);
          reg = x261;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x262 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x262 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x263 = x260 - x262;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x264 = x263 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x265 = Fp(x264.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x265);
          reg = x265;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x266 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x266 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x267 = x264 - x266;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x268 = x267 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x268);
        reg = x268;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x269 = x42 * x246;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x269 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x270 = x7 - x251;
    if (x270 != 0) {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x271 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x271 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x272 = x240 - x271;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x272 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x273 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x273 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x274 = x273 * x2;
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x275 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x275 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x276 = x274 + x275;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x277 = x241 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x278 = x276 - x277;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x279 = x278 + x233;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x280 = Fp(x279.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x280);
          reg = x280;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x281 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x281 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x282 = x279 - x281;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x283 = x282 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x284 = Fp(x283.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x284);
          reg = x284;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x285 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x285 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x286 = x283 - x285;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x287 = x286 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x288 = Fp(x287.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x288);
          reg = x288;
        }
      }
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x289 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x289 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x290 = x287 - x289;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x291 = x290 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x291);
        reg = x291;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x292 = x5 - x275;
      if (x292 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x293 = x178 - x242;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x293 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x294 = x179 - x243;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x294 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x295 = x180 - x244;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x295 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x296 = x181 - x245;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x296 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/ram_load(RamLoadStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x297 = args[2][91 * steps + ((cycle - 0) & mask)];
    assert(x297 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x298 = x7 - x297;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x299 = x6 - x297;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x300 = x298 * x299;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x301 = x5 - x297;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x302 = x299 * x301;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x303 = x298 * x301;
    if (x303 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x300 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x302 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x246);
        reg = x246;
      }
    }
  }
  if (x10 != 0) {
    {
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x304 = host_outs.at(0);
      auto x305 = host_outs.at(1);
      auto x306 = host_outs.at(2);
      auto x307 = host_outs.at(3);
      auto x308 = host_outs.at(4);
      auto x309 = host_outs.at(5);
      auto x310 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][142 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x304);
        reg = x304;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][143 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x305);
        reg = x305;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][144 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x306);
        reg = x306;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][145 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x307);
        reg = x307;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][146 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x308);
        reg = x308;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][147 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x309);
        reg = x309;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][148 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x310);
        reg = x310;
      }
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x311 = host_outs.at(0);
      auto x312 = host_outs.at(1);
      auto x313 = host_outs.at(2);
      auto x314 = host_outs.at(3);
      auto x315 = host_outs.at(4);
      auto x316 = host_outs.at(5);
      auto x317 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][149 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x311);
        reg = x311;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][150 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x312);
        reg = x312;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][151 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x313);
        reg = x313;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][152 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x314);
        reg = x314;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][153 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x315);
        reg = x315;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][154 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x316);
        reg = x316;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][155 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x317);
        reg = x317;
      }
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x318 = host_outs.at(0);
      auto x319 = host_outs.at(1);
      auto x320 = host_outs.at(2);
      auto x321 = host_outs.at(3);
      auto x322 = host_outs.at(4);
      auto x323 = host_outs.at(5);
      auto x324 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][156 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x318);
        reg = x318;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][157 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x319);
        reg = x319;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][158 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x320);
        reg = x320;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][159 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x321);
        reg = x321;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][160 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x322);
        reg = x322;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][161 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x323);
        reg = x323;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][162 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x324);
        reg = x324;
      }
      host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
      auto x325 = host_outs.at(0);
      auto x326 = host_outs.at(1);
      auto x327 = host_outs.at(2);
      auto x328 = host_outs.at(3);
      auto x329 = host_outs.at(4);
      auto x330 = host_outs.at(5);
      auto x331 = host_outs.at(6);
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x325);
        reg = x325;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x326);
        reg = x326;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x327);
        reg = x327;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x328);
        reg = x328;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x329);
        reg = x329;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x330);
        reg = x330;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x331);
        reg = x331;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/Global/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x332 = args[1][104];
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x333 = args[2][89 * steps + ((cycle - 1) & mask)];
    assert(x333 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x334 = args[2][90 * steps + ((cycle - 1) & mask)];
    assert(x334 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
    auto x335 = args[2][91 * steps + ((cycle - 1) & mask)];
    assert(x335 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x336 = args[2][92 * steps + ((cycle - 1) & mask)];
    assert(x336 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x337 = args[2][93 * steps + ((cycle - 1) & mask)];
    assert(x337 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x338 = args[2][94 * steps + ((cycle - 1) & mask)];
    assert(x338 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x339 = args[2][95 * steps + ((cycle - 1) & mask)];
    assert(x339 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x340 = args[2][145 * steps + ((cycle - 0) & mask)];
    assert(x340 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x341 = args[2][146 * steps + ((cycle - 0) & mask)];
    assert(x341 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x342 = args[2][147 * steps + ((cycle - 0) & mask)];
    assert(x342 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x343 = args[2][148 * steps + ((cycle - 0) & mask)];
    assert(x343 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x344 = args[2][97 * steps + ((cycle - 1) & mask)];
    assert(x344 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x345 = args[2][142 * steps + ((cycle - 0) & mask)];
      assert(x345 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x346 = x333 - x345;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x347 = (x346 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x348 = x7 - x347;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][163 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x348);
        reg = x348;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x349 = args[2][163 * steps + ((cycle - 0) & mask)];
    assert(x349 != Fp::invalid());
    if (x349 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x350 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x350 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x351 = x6 - x350;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x351 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x352 = args[2][142 * steps + ((cycle - 0) & mask)];
      assert(x352 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x353 = x352 - x333;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x354 = x353 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x355 = Fp(x354.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][9 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x355);
          reg = x355;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x356 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x356 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x357 = x354 - x356;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x358 = x357 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x359 = Fp(x358.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][10 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x359);
          reg = x359;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x360 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x360 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x361 = x358 - x360;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x362 = x361 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x363 = Fp(x362.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][11 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x363);
          reg = x363;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x364 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x364 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x365 = x362 - x364;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x366 = x365 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x366);
        reg = x366;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x367 = x332 * x344;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x367 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x368 = x7 - x349;
    if (x368 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x369 = args[2][142 * steps + ((cycle - 0) & mask)];
      assert(x369 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x370 = x333 - x369;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x370 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x371 = args[2][143 * steps + ((cycle - 0) & mask)];
      assert(x371 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x372 = x371 * x2;
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x373 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x373 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x374 = x372 + x373;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x375 = x334 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x376 = x374 - x375;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x377 = x376 + x335;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x378 = Fp(x377.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][9 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x378);
          reg = x378;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x379 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x379 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x380 = x377 - x379;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x381 = x380 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x382 = Fp(x381.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][10 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x382);
          reg = x382;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x383 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x383 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x384 = x381 - x383;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x385 = x384 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x386 = Fp(x385.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][11 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x386);
          reg = x386;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x387 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x387 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x388 = x385 - x387;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x389 = x388 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x389);
        reg = x389;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x390 = x5 - x373;
      if (x390 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x391 = x336 - x340;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x391 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x392 = x337 - x341;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x392 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x393 = x338 - x342;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x393 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x394 = x339 - x343;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x394 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x395 = args[2][144 * steps + ((cycle - 0) & mask)];
    assert(x395 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x396 = x7 - x395;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x397 = x6 - x395;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x398 = x396 * x397;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x399 = x5 - x395;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x400 = x397 * x399;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x401 = x396 * x399;
    if (x401 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][164 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x398 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][164 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x400 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][164 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x344);
        reg = x344;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x402 = args[2][142 * steps + ((cycle - 0) & mask)];
    assert(x402 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x403 = args[2][143 * steps + ((cycle - 0) & mask)];
    assert(x403 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x404 = args[2][152 * steps + ((cycle - 0) & mask)];
    assert(x404 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x405 = args[2][153 * steps + ((cycle - 0) & mask)];
    assert(x405 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x406 = args[2][154 * steps + ((cycle - 0) & mask)];
    assert(x406 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x407 = args[2][155 * steps + ((cycle - 0) & mask)];
    assert(x407 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x408 = args[2][164 * steps + ((cycle - 0) & mask)];
    assert(x408 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x409 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x409 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x410 = x402 - x409;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x411 = (x410 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x412 = x7 - x411;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][165 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x412);
        reg = x412;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x413 = args[2][165 * steps + ((cycle - 0) & mask)];
    assert(x413 != Fp::invalid());
    if (x413 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x414 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x414 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x415 = x6 - x414;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x415 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x416 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x416 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x417 = x416 - x402;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x418 = x417 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x419 = Fp(x418.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][12 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x419);
          reg = x419;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x420 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x420 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x421 = x418 - x420;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x422 = x421 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x423 = Fp(x422.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][13 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x423);
          reg = x423;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x424 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x424 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x425 = x422 - x424;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x426 = x425 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x427 = Fp(x426.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][14 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x427);
          reg = x427;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x428 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x428 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x429 = x426 - x428;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x430 = x429 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x430);
        reg = x430;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x431 = x332 * x408;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x431 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x432 = x7 - x413;
    if (x432 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x433 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x433 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x434 = x402 - x433;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x434 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x435 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x435 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x436 = x435 * x2;
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x437 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x437 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x438 = x436 + x437;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x439 = x403 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x440 = x438 - x439;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x441 = x440 + x395;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x442 = Fp(x441.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][12 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x442);
          reg = x442;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x443 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x443 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x444 = x441 - x443;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x445 = x444 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x446 = Fp(x445.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][13 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x446);
          reg = x446;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x447 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x447 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x448 = x445 - x447;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x449 = x448 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x450 = Fp(x449.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][14 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x450);
          reg = x450;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x451 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x451 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x452 = x449 - x451;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x453 = x452 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x453);
        reg = x453;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x454 = x5 - x437;
      if (x454 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x455 = x340 - x404;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x455 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x456 = x341 - x405;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x456 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x457 = x342 - x406;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x457 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x458 = x343 - x407;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x458 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x459 = args[2][151 * steps + ((cycle - 0) & mask)];
    assert(x459 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x460 = x7 - x459;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x461 = x6 - x459;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x462 = x460 * x461;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x463 = x5 - x459;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x464 = x461 * x463;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x465 = x460 * x463;
    if (x465 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][166 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x462 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][166 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x464 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][166 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x408);
        reg = x408;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x466 = args[2][149 * steps + ((cycle - 0) & mask)];
    assert(x466 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x467 = args[2][150 * steps + ((cycle - 0) & mask)];
    assert(x467 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x468 = args[2][159 * steps + ((cycle - 0) & mask)];
    assert(x468 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x469 = args[2][160 * steps + ((cycle - 0) & mask)];
    assert(x469 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x470 = args[2][161 * steps + ((cycle - 0) & mask)];
    assert(x470 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x471 = args[2][162 * steps + ((cycle - 0) & mask)];
    assert(x471 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x472 = args[2][166 * steps + ((cycle - 0) & mask)];
    assert(x472 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x473 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x473 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x474 = x466 - x473;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x475 = (x474 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x476 = x7 - x475;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][167 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x476);
        reg = x476;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x477 = args[2][167 * steps + ((cycle - 0) & mask)];
    assert(x477 != Fp::invalid());
    if (x477 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x478 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x478 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x479 = x6 - x478;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x479 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x480 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x480 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x481 = x480 - x466;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x482 = x481 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x483 = Fp(x482.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][15 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x483);
          reg = x483;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x484 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x484 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x485 = x482 - x484;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x486 = x485 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x487 = Fp(x486.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][16 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x487);
          reg = x487;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x488 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x488 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x489 = x486 - x488;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x490 = x489 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x491 = Fp(x490.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][17 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x491);
          reg = x491;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x492 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x492 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x493 = x490 - x492;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x494 = x493 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x494);
        reg = x494;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x495 = x332 * x472;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x495 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x496 = x7 - x477;
    if (x496 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x497 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x497 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x498 = x466 - x497;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x498 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x499 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x499 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x500 = x499 * x2;
      // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x501 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x501 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x502 = x500 + x501;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x503 = x467 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x504 = x502 - x503;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x505 = x504 + x459;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x506 = Fp(x505.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][15 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x506);
          reg = x506;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x507 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x507 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x508 = x505 - x507;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x509 = x508 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x510 = Fp(x509.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][16 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x510);
          reg = x510;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x511 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x511 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x512 = x509 - x511;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x513 = x512 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x514 = Fp(x513.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][17 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x514);
          reg = x514;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x515 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x515 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x516 = x513 - x515;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x517 = x516 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x517);
        reg = x517;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x518 = x5 - x501;
      if (x518 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x519 = x404 - x468;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x519 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x520 = x405 - x469;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x520 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x521 = x406 - x470;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x521 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x522 = x407 - x471;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x522 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x523 = args[2][158 * steps + ((cycle - 0) & mask)];
    assert(x523 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x524 = x7 - x523;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x525 = x6 - x523;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x526 = x524 * x525;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x527 = x5 - x523;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x528 = x525 * x527;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x529 = x524 * x527;
    if (x529 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][168 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x526 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][168 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x528 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][168 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x472);
        reg = x472;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x530 = args[2][156 * steps + ((cycle - 0) & mask)];
    assert(x530 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x531 = args[2][157 * steps + ((cycle - 0) & mask)];
    assert(x531 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x532 = args[2][92 * steps + ((cycle - 0) & mask)];
    assert(x532 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x533 = args[2][93 * steps + ((cycle - 0) & mask)];
    assert(x533 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x534 = args[2][94 * steps + ((cycle - 0) & mask)];
    assert(x534 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x535 = args[2][95 * steps + ((cycle - 0) & mask)];
    assert(x535 != Fp::invalid());
    // loc("Top/mux(Mux)/reset(ResetStep)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x536 = args[2][168 * steps + ((cycle - 0) & mask)];
    assert(x536 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x537 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x537 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x538 = x530 - x537;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x539 = (x538 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x540 = x7 - x539;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x540);
        reg = x540;
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x541 = args[2][96 * steps + ((cycle - 0) & mask)];
    assert(x541 != Fp::invalid());
    if (x541 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x542 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x542 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x543 = x6 - x542;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x543 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x544 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x544 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x545 = x544 - x530;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x546 = x545 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x547 = Fp(x546.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x547);
          reg = x547;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x548 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x548 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x549 = x546 - x548;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x550 = x549 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x551 = Fp(x550.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x551);
          reg = x551;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x552 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x552 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x553 = x550 - x552;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x554 = x553 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x555 = Fp(x554.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x555);
          reg = x555;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x556 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x556 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x557 = x554 - x556;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x558 = x557 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x558);
        reg = x558;
      }
      // loc("zirgen/components/ram.cpp":91:9)
      auto x559 = x332 * x536;
      // loc("zirgen/components/ram.cpp":91:9)
      if (x559 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x560 = x7 - x541;
    if (x560 != 0) {
      // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x561 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x561 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x562 = x530 - x561;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x562 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x563 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x563 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x564 = x563 * x2;
      // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x565 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x565 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x566 = x564 + x565;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x567 = x531 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x568 = x566 - x567;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x569 = x568 + x523;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x570 = Fp(x569.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x570);
          reg = x570;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x571 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x571 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x572 = x569 - x571;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x573 = x572 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x574 = Fp(x573.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x574);
          reg = x574;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x575 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x575 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x576 = x573 - x575;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x577 = x576 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x578 = Fp(x577.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x578);
          reg = x578;
        }
      }
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x579 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x579 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x580 = x577 - x579;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x581 = x580 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x581);
        reg = x581;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x582 = x5 - x565;
      if (x582 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x583 = x468 - x532;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x583 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x584 = x469 - x533;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x584 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x585 = x470 - x534;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x585 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x586 = x471 - x535;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x586 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/reset(ResetStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x587 = args[2][91 * steps + ((cycle - 0) & mask)];
    assert(x587 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x588 = x7 - x587;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x589 = x6 - x587;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x590 = x588 * x589;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x591 = x5 - x587;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x592 = x589 * x591;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x593 = x588 * x591;
    if (x593 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x590 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x592 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x536);
        reg = x536;
      }
    }
  }
  if (x11 != 0) {
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x594 = args[2][100 * steps + ((cycle - 0) & mask)];
    assert(x594 != Fp::invalid());
    if (x594 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x595 = host_outs.at(0);
        auto x596 = host_outs.at(1);
        auto x597 = host_outs.at(2);
        auto x598 = host_outs.at(3);
        auto x599 = host_outs.at(4);
        auto x600 = host_outs.at(5);
        auto x601 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x595);
          reg = x595;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x596);
          reg = x596;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x597);
          reg = x597;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x598);
          reg = x598;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x599);
          reg = x599;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x600);
          reg = x600;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x601);
          reg = x601;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x602 = host_outs.at(0);
        auto x603 = host_outs.at(1);
        auto x604 = host_outs.at(2);
        auto x605 = host_outs.at(3);
        auto x606 = host_outs.at(4);
        auto x607 = host_outs.at(5);
        auto x608 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x602);
          reg = x602;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x603);
          reg = x603;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x604);
          reg = x604;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x605);
          reg = x605;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x606);
          reg = x606;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x607);
          reg = x607;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x608);
          reg = x608;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x609 = host_outs.at(0);
        auto x610 = host_outs.at(1);
        auto x611 = host_outs.at(2);
        auto x612 = host_outs.at(3);
        auto x613 = host_outs.at(4);
        auto x614 = host_outs.at(5);
        auto x615 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x609);
          reg = x609;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x610);
          reg = x610;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x611);
          reg = x611;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x612);
          reg = x612;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x613);
          reg = x613;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x614);
          reg = x614;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x615);
          reg = x615;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x616 = host_outs.at(0);
        auto x617 = host_outs.at(1);
        auto x618 = host_outs.at(2);
        auto x619 = host_outs.at(3);
        auto x620 = host_outs.at(4);
        auto x621 = host_outs.at(5);
        auto x622 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x616);
          reg = x616;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x617);
          reg = x617;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x618);
          reg = x618;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x619);
          reg = x619;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x620);
          reg = x620;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x621);
          reg = x621;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x622);
          reg = x622;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x623 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x624 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x624 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x625 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x625 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x626 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x626 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x627 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x627 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x628 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x628 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x629 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x629 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x630 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x630 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x631 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x631 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x632 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x632 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x633 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x633 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x634 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x634 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x635 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x635 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x636 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x636 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x637 = x624 - x636;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x638 = (x637 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x639 = x7 - x638;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x639);
          reg = x639;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x640 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x640 != Fp::invalid());
      if (x640 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x641 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x641 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x642 = x6 - x641;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x642 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x643 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x643 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x644 = x643 - x624;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x645 = x644 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x646 = Fp(x645.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x646);
            reg = x646;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x647 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x647 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x648 = x645 - x647;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x649 = x648 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x650 = Fp(x649.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x650);
            reg = x650;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x651 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x651 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x652 = x649 - x651;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x653 = x652 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x654 = Fp(x653.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x654);
            reg = x654;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x655 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x655 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x656 = x653 - x655;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x657 = x656 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x657);
          reg = x657;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x658 = x623 * x635;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x658 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x659 = x7 - x640;
      if (x659 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x660 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x660 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x661 = x624 - x660;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x661 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x662 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x662 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x663 = x662 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x664 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x664 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x665 = x663 + x664;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x666 = x625 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x667 = x665 - x666;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x668 = x667 + x626;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x669 = Fp(x668.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x669);
            reg = x669;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x670 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x670 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x671 = x668 - x670;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x672 = x671 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x673 = Fp(x672.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x673);
            reg = x673;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x674 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x674 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x675 = x672 - x674;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x676 = x675 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x677 = Fp(x676.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x677);
            reg = x677;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x678 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x678 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x679 = x676 - x678;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x680 = x679 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x680);
          reg = x680;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x681 = x5 - x664;
        if (x681 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x682 = x627 - x631;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x682 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x683 = x628 - x632;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x683 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x684 = x629 - x633;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x684 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x685 = x630 - x634;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x685 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x686 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x686 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x687 = x7 - x686;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x688 = x6 - x686;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x689 = x687 * x688;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x690 = x5 - x686;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x691 = x688 * x690;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x692 = x687 * x690;
      if (x692 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x689 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x691 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x635);
          reg = x635;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x693 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x693 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x694 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x694 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x695 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x695 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x696 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x696 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x697 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x697 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x698 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x698 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x699 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x699 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x700 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x700 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x701 = x693 - x700;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x702 = (x701 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x703 = x7 - x702;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x703);
          reg = x703;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x704 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x704 != Fp::invalid());
      if (x704 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x705 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x705 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x706 = x6 - x705;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x706 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x707 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x707 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x708 = x707 - x693;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x709 = x708 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x710 = Fp(x709.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x710);
            reg = x710;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x711 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x711 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x712 = x709 - x711;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x713 = x712 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x714 = Fp(x713.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x714);
            reg = x714;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x715 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x715 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x716 = x713 - x715;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x717 = x716 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x718 = Fp(x717.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x718);
            reg = x718;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x719 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x719 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x720 = x717 - x719;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x721 = x720 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x721);
          reg = x721;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x722 = x623 * x699;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x722 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x723 = x7 - x704;
      if (x723 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x724 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x724 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x725 = x693 - x724;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x725 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x726 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x726 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x727 = x726 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x728 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x728 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x729 = x727 + x728;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x730 = x694 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x731 = x729 - x730;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x732 = x731 + x686;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x733 = Fp(x732.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x733);
            reg = x733;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x734 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x734 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x735 = x732 - x734;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x736 = x735 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x737 = Fp(x736.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x737);
            reg = x737;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x738 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x738 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x739 = x736 - x738;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x740 = x739 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x741 = Fp(x740.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x741);
            reg = x741;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x742 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x742 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x743 = x740 - x742;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x744 = x743 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x744);
          reg = x744;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x745 = x5 - x728;
        if (x745 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x746 = x631 - x695;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x746 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x747 = x632 - x696;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x747 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x748 = x633 - x697;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x748 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x749 = x634 - x698;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x749 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x750 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x750 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x751 = x7 - x750;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x752 = x6 - x750;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x753 = x751 * x752;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x754 = x5 - x750;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x755 = x752 * x754;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x756 = x751 * x754;
      if (x756 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x753 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x755 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x699);
          reg = x699;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x757 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x757 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x758 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x758 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x759 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x759 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x760 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x760 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x761 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x761 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x762 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x762 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x763 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x763 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x764 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x764 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x765 = x757 - x764;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x766 = (x765 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x767 = x7 - x766;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x767);
          reg = x767;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x768 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x768 != Fp::invalid());
      if (x768 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x769 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x769 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x770 = x6 - x769;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x770 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x771 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x771 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x772 = x771 - x757;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x773 = x772 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x774 = Fp(x773.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x774);
            reg = x774;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x775 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x775 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x776 = x773 - x775;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x777 = x776 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x778 = Fp(x777.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x778);
            reg = x778;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x779 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x779 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x780 = x777 - x779;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x781 = x780 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x782 = Fp(x781.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x782);
            reg = x782;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x783 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x783 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x784 = x781 - x783;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x785 = x784 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x785);
          reg = x785;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x786 = x623 * x763;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x786 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x787 = x7 - x768;
      if (x787 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x788 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x788 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x789 = x757 - x788;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x789 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x790 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x790 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x791 = x790 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x792 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x792 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x793 = x791 + x792;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x794 = x758 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x795 = x793 - x794;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x796 = x795 + x750;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x797 = Fp(x796.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x797);
            reg = x797;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x798 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x798 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x799 = x796 - x798;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x800 = x799 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x801 = Fp(x800.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x801);
            reg = x801;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x802 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x802 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x803 = x800 - x802;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x804 = x803 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x805 = Fp(x804.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x805);
            reg = x805;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x806 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x806 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x807 = x804 - x806;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x808 = x807 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x808);
          reg = x808;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x809 = x5 - x792;
        if (x809 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x810 = x695 - x759;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x810 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x811 = x696 - x760;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x811 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x812 = x697 - x761;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x812 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x813 = x698 - x762;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x813 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x814 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x814 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x815 = x7 - x814;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x816 = x6 - x814;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x817 = x815 * x816;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x818 = x5 - x814;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x819 = x816 * x818;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x820 = x815 * x818;
      if (x820 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x817 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x819 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x763);
          reg = x763;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x821 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x821 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x822 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x822 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x823 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x823 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x824 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x824 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x825 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x825 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x826 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x826 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/0(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x827 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x827 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x828 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x828 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x829 = x821 - x828;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x830 = (x829 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x831 = x7 - x830;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x831);
          reg = x831;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x832 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x832 != Fp::invalid());
      if (x832 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x833 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x833 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x834 = x6 - x833;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x834 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x835 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x835 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x836 = x835 - x821;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x837 = x836 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x838 = Fp(x837.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x838);
            reg = x838;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x839 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x839 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x840 = x837 - x839;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x841 = x840 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x842 = Fp(x841.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x842);
            reg = x842;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x843 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x843 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x844 = x841 - x843;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x845 = x844 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x846 = Fp(x845.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x846);
            reg = x846;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x847 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x847 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x848 = x845 - x847;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x849 = x848 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x849);
          reg = x849;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x850 = x623 * x827;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x850 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x851 = x7 - x832;
      if (x851 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x852 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x852 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x853 = x821 - x852;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x853 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x854 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x854 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x855 = x854 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x856 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x856 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x857 = x855 + x856;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x858 = x822 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x859 = x857 - x858;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x860 = x859 + x814;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x861 = Fp(x860.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x861);
            reg = x861;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x862 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x862 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x863 = x860 - x862;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x864 = x863 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x865 = Fp(x864.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x865);
            reg = x865;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x866 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x866 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x867 = x864 - x866;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x868 = x867 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x869 = Fp(x868.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x869);
            reg = x869;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x870 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x870 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x871 = x868 - x870;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x872 = x871 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x872);
          reg = x872;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x873 = x5 - x856;
        if (x873 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x874 = x759 - x823;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x874 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x875 = x760 - x824;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x875 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x876 = x761 - x825;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x876 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x877 = x762 - x826;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x877 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x878 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x878 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x879 = x7 - x878;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x880 = x6 - x878;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x881 = x879 * x880;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x882 = x5 - x878;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x883 = x880 * x882;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x884 = x879 * x882;
      if (x884 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x881 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x883 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x827);
          reg = x827;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x885 = args[2][101 * steps + ((cycle - 0) & mask)];
    assert(x885 != Fp::invalid());
    if (x885 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x886 = host_outs.at(0);
        auto x887 = host_outs.at(1);
        auto x888 = host_outs.at(2);
        auto x889 = host_outs.at(3);
        auto x890 = host_outs.at(4);
        auto x891 = host_outs.at(5);
        auto x892 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x886);
          reg = x886;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x887);
          reg = x887;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x888);
          reg = x888;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x889);
          reg = x889;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x890);
          reg = x890;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x891);
          reg = x891;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x892);
          reg = x892;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x893 = host_outs.at(0);
        auto x894 = host_outs.at(1);
        auto x895 = host_outs.at(2);
        auto x896 = host_outs.at(3);
        auto x897 = host_outs.at(4);
        auto x898 = host_outs.at(5);
        auto x899 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x893);
          reg = x893;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x894);
          reg = x894;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x895);
          reg = x895;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x896);
          reg = x896;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x897);
          reg = x897;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x898);
          reg = x898;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x899);
          reg = x899;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x900 = host_outs.at(0);
        auto x901 = host_outs.at(1);
        auto x902 = host_outs.at(2);
        auto x903 = host_outs.at(3);
        auto x904 = host_outs.at(4);
        auto x905 = host_outs.at(5);
        auto x906 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x900);
          reg = x900;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x901);
          reg = x901;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x902);
          reg = x902;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x903);
          reg = x903;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x904);
          reg = x904;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x905);
          reg = x905;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x906);
          reg = x906;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x907 = host_outs.at(0);
        auto x908 = host_outs.at(1);
        auto x909 = host_outs.at(2);
        auto x910 = host_outs.at(3);
        auto x911 = host_outs.at(4);
        auto x912 = host_outs.at(5);
        auto x913 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x907);
          reg = x907;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x908);
          reg = x908;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x909);
          reg = x909;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x910);
          reg = x910;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x911);
          reg = x911;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x912);
          reg = x912;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x913);
          reg = x913;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x914 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x915 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x915 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x916 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x916 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x917 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x917 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x918 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x918 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x919 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x919 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x920 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x920 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x921 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x921 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x922 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x922 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x923 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x923 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x924 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x924 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x925 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x925 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x926 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x926 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x927 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x927 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x928 = x915 - x927;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x929 = (x928 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x930 = x7 - x929;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x930);
          reg = x930;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x931 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x931 != Fp::invalid());
      if (x931 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x932 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x932 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x933 = x6 - x932;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x933 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x934 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x934 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x935 = x934 - x915;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x936 = x935 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x937 = Fp(x936.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x937);
            reg = x937;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x938 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x938 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x939 = x936 - x938;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x940 = x939 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x941 = Fp(x940.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x941);
            reg = x941;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x942 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x942 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x943 = x940 - x942;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x944 = x943 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x945 = Fp(x944.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x945);
            reg = x945;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x946 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x946 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x947 = x944 - x946;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x948 = x947 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x948);
          reg = x948;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x949 = x914 * x926;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x949 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x950 = x7 - x931;
      if (x950 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x951 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x951 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x952 = x915 - x951;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x952 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x953 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x953 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x954 = x953 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x955 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x955 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x956 = x954 + x955;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x957 = x916 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x958 = x956 - x957;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x959 = x958 + x917;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x960 = Fp(x959.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x960);
            reg = x960;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x961 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x961 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x962 = x959 - x961;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x963 = x962 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x964 = Fp(x963.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x964);
            reg = x964;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x965 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x965 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x966 = x963 - x965;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x967 = x966 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x968 = Fp(x967.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x968);
            reg = x968;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x969 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x969 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x970 = x967 - x969;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x971 = x970 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x971);
          reg = x971;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x972 = x5 - x955;
        if (x972 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x973 = x918 - x922;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x973 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x974 = x919 - x923;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x974 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x975 = x920 - x924;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x975 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x976 = x921 - x925;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x976 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x977 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x977 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x978 = x7 - x977;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x979 = x6 - x977;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x980 = x978 * x979;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x981 = x5 - x977;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x982 = x979 * x981;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x983 = x978 * x981;
      if (x983 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x980 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x982 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x926);
          reg = x926;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x984 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x984 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x985 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x985 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x986 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x986 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x987 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x987 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x988 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x988 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x989 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x989 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x990 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x990 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x991 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x991 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x992 = x984 - x991;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x993 = (x992 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x994 = x7 - x993;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x994);
          reg = x994;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x995 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x995 != Fp::invalid());
      if (x995 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x996 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x996 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x997 = x6 - x996;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x997 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x998 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x998 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x999 = x998 - x984;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1000 = x999 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1001 = Fp(x1000.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1001);
            reg = x1001;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1002 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1002 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1003 = x1000 - x1002;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1004 = x1003 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1005 = Fp(x1004.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1005);
            reg = x1005;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1006 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1006 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1007 = x1004 - x1006;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1008 = x1007 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1009 = Fp(x1008.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1009);
            reg = x1009;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1010 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1010 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1011 = x1008 - x1010;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1012 = x1011 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1012);
          reg = x1012;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1013 = x914 * x990;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1013 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1014 = x7 - x995;
      if (x1014 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1015 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1015 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1016 = x984 - x1015;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1016 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1017 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x1017 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1018 = x1017 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1019 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1019 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1020 = x1018 + x1019;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1021 = x985 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1022 = x1020 - x1021;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1023 = x1022 + x977;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1024 = Fp(x1023.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1024);
            reg = x1024;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1025 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1025 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1026 = x1023 - x1025;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1027 = x1026 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1028 = Fp(x1027.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1028);
            reg = x1028;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1029 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1029 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1030 = x1027 - x1029;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1031 = x1030 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1032 = Fp(x1031.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1032);
            reg = x1032;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1033 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1033 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1034 = x1031 - x1033;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1035 = x1034 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1035);
          reg = x1035;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1036 = x5 - x1019;
        if (x1036 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1037 = x922 - x986;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1037 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1038 = x923 - x987;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1038 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1039 = x924 - x988;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1039 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1040 = x925 - x989;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1040 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1041 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x1041 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1042 = x7 - x1041;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1043 = x6 - x1041;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1044 = x1042 * x1043;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1045 = x5 - x1041;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1046 = x1043 * x1045;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1047 = x1042 * x1045;
      if (x1047 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1044 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1046 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x990);
          reg = x990;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1048 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x1048 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1049 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x1049 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1050 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x1050 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1051 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x1051 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1052 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x1052 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1053 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x1053 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1054 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x1054 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1055 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1055 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1056 = x1048 - x1055;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1057 = (x1056 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1058 = x7 - x1057;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1058);
          reg = x1058;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1059 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x1059 != Fp::invalid());
      if (x1059 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1060 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x1060 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1061 = x6 - x1060;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1061 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1062 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1062 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1063 = x1062 - x1048;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1064 = x1063 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1065 = Fp(x1064.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1065);
            reg = x1065;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1066 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1066 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1067 = x1064 - x1066;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1068 = x1067 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1069 = Fp(x1068.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1069);
            reg = x1069;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1070 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1070 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1071 = x1068 - x1070;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1072 = x1071 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1073 = Fp(x1072.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1073);
            reg = x1073;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1074 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1074 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1075 = x1072 - x1074;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1076 = x1075 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1076);
          reg = x1076;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1077 = x914 * x1054;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1077 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1078 = x7 - x1059;
      if (x1078 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1079 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1079 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1080 = x1048 - x1079;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1080 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1081 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x1081 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1082 = x1081 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1083 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x1083 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1084 = x1082 + x1083;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1085 = x1049 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1086 = x1084 - x1085;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1087 = x1086 + x1041;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1088 = Fp(x1087.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1088);
            reg = x1088;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1089 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1089 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1090 = x1087 - x1089;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1091 = x1090 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1092 = Fp(x1091.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1092);
            reg = x1092;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1093 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1093 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1094 = x1091 - x1093;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1095 = x1094 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1096 = Fp(x1095.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1096);
            reg = x1096;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1097 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1097 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1098 = x1095 - x1097;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1099 = x1098 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1099);
          reg = x1099;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1100 = x5 - x1083;
        if (x1100 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1101 = x986 - x1050;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1101 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1102 = x987 - x1051;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1102 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1103 = x988 - x1052;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1103 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1104 = x989 - x1053;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1104 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1105 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x1105 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1106 = x7 - x1105;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1107 = x6 - x1105;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1108 = x1106 * x1107;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1109 = x5 - x1105;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1110 = x1107 * x1109;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1111 = x1106 * x1109;
      if (x1111 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1108 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1110 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1054);
          reg = x1054;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1112 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x1112 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1113 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x1113 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1114 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x1114 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1115 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x1115 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1116 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x1116 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1117 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x1117 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/1(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1118 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x1118 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1119 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1119 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1120 = x1112 - x1119;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1121 = (x1120 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1122 = x7 - x1121;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1122);
          reg = x1122;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1123 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x1123 != Fp::invalid());
      if (x1123 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1124 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x1124 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1125 = x6 - x1124;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1125 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1126 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1126 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1127 = x1126 - x1112;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1128 = x1127 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1129 = Fp(x1128.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1129);
            reg = x1129;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1130 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1130 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1131 = x1128 - x1130;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1132 = x1131 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1133 = Fp(x1132.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1133);
            reg = x1133;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1134 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1134 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1135 = x1132 - x1134;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1136 = x1135 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1137 = Fp(x1136.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1137);
            reg = x1137;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1138 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x1138 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1139 = x1136 - x1138;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1140 = x1139 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1140);
          reg = x1140;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1141 = x914 * x1118;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1141 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1142 = x7 - x1123;
      if (x1142 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1143 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1143 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1144 = x1112 - x1143;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1144 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1145 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x1145 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1146 = x1145 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1147 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x1147 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1148 = x1146 + x1147;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1149 = x1113 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1150 = x1148 - x1149;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1151 = x1150 + x1105;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1152 = Fp(x1151.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1152);
            reg = x1152;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1153 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1153 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1154 = x1151 - x1153;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1155 = x1154 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1156 = Fp(x1155.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1156);
            reg = x1156;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1157 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1157 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1158 = x1155 - x1157;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1159 = x1158 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1160 = Fp(x1159.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1160);
            reg = x1160;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1161 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x1161 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1162 = x1159 - x1161;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1163 = x1162 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1163);
          reg = x1163;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1164 = x5 - x1147;
        if (x1164 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1165 = x1050 - x1114;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1165 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1166 = x1051 - x1115;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1166 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1167 = x1052 - x1116;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1167 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1168 = x1053 - x1117;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1168 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1169 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x1169 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1170 = x7 - x1169;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1171 = x6 - x1169;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1172 = x1170 * x1171;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1173 = x5 - x1169;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1174 = x1171 * x1173;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1175 = x1170 * x1173;
      if (x1175 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1172 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1174 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1118);
          reg = x1118;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x1176 = args[2][102 * steps + ((cycle - 0) & mask)];
    assert(x1176 != Fp::invalid());
    if (x1176 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1177 = host_outs.at(0);
        auto x1178 = host_outs.at(1);
        auto x1179 = host_outs.at(2);
        auto x1180 = host_outs.at(3);
        auto x1181 = host_outs.at(4);
        auto x1182 = host_outs.at(5);
        auto x1183 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1177);
          reg = x1177;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1178);
          reg = x1178;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1179);
          reg = x1179;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1180);
          reg = x1180;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1181);
          reg = x1181;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1182);
          reg = x1182;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1183);
          reg = x1183;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1184 = host_outs.at(0);
        auto x1185 = host_outs.at(1);
        auto x1186 = host_outs.at(2);
        auto x1187 = host_outs.at(3);
        auto x1188 = host_outs.at(4);
        auto x1189 = host_outs.at(5);
        auto x1190 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1184);
          reg = x1184;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1185);
          reg = x1185;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1186);
          reg = x1186;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1187);
          reg = x1187;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1188);
          reg = x1188;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1189);
          reg = x1189;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1190);
          reg = x1190;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1191 = host_outs.at(0);
        auto x1192 = host_outs.at(1);
        auto x1193 = host_outs.at(2);
        auto x1194 = host_outs.at(3);
        auto x1195 = host_outs.at(4);
        auto x1196 = host_outs.at(5);
        auto x1197 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1191);
          reg = x1191;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1192);
          reg = x1192;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1193);
          reg = x1193;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1194);
          reg = x1194;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1195);
          reg = x1195;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1196);
          reg = x1196;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1197);
          reg = x1197;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1198 = host_outs.at(0);
        auto x1199 = host_outs.at(1);
        auto x1200 = host_outs.at(2);
        auto x1201 = host_outs.at(3);
        auto x1202 = host_outs.at(4);
        auto x1203 = host_outs.at(5);
        auto x1204 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1198);
          reg = x1198;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1199);
          reg = x1199;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1200);
          reg = x1200;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1201);
          reg = x1201;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1202);
          reg = x1202;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1203);
          reg = x1203;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1204);
          reg = x1204;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1205 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1206 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x1206 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1207 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x1207 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x1208 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x1208 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1209 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x1209 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1210 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x1210 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1211 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x1211 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1212 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x1212 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1213 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x1213 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1214 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x1214 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1215 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x1215 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1216 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x1216 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1217 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x1217 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1218 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x1218 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1219 = x1206 - x1218;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1220 = (x1219 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1221 = x7 - x1220;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1221);
          reg = x1221;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1222 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x1222 != Fp::invalid());
      if (x1222 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1223 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x1223 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1224 = x6 - x1223;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1224 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1225 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x1225 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1226 = x1225 - x1206;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1227 = x1226 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1228 = Fp(x1227.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1228);
            reg = x1228;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1229 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x1229 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1230 = x1227 - x1229;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1231 = x1230 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1232 = Fp(x1231.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1232);
            reg = x1232;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1233 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x1233 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1234 = x1231 - x1233;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1235 = x1234 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1236 = Fp(x1235.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1236);
            reg = x1236;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1237 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1237 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1238 = x1235 - x1237;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1239 = x1238 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1239);
          reg = x1239;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1240 = x1205 * x1217;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1240 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1241 = x7 - x1222;
      if (x1241 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1242 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x1242 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1243 = x1206 - x1242;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1243 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1244 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x1244 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1245 = x1244 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1246 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x1246 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1247 = x1245 + x1246;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1248 = x1207 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1249 = x1247 - x1248;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1250 = x1249 + x1208;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1251 = Fp(x1250.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1251);
            reg = x1251;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1252 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x1252 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1253 = x1250 - x1252;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1254 = x1253 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1255 = Fp(x1254.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1255);
            reg = x1255;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1256 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x1256 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1257 = x1254 - x1256;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1258 = x1257 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1259 = Fp(x1258.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1259);
            reg = x1259;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1260 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1260 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1261 = x1258 - x1260;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1262 = x1261 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1262);
          reg = x1262;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1263 = x5 - x1246;
        if (x1263 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1264 = x1209 - x1213;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1264 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1265 = x1210 - x1214;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1265 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1266 = x1211 - x1215;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1266 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1267 = x1212 - x1216;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1267 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1268 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x1268 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1269 = x7 - x1268;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1270 = x6 - x1268;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1271 = x1269 * x1270;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1272 = x5 - x1268;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1273 = x1270 * x1272;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1274 = x1269 * x1272;
      if (x1274 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1271 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1273 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1217);
          reg = x1217;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1275 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x1275 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1276 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x1276 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1277 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x1277 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1278 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x1278 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1279 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x1279 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1280 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x1280 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1281 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x1281 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1282 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1282 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1283 = x1275 - x1282;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1284 = (x1283 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1285 = x7 - x1284;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1285);
          reg = x1285;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1286 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x1286 != Fp::invalid());
      if (x1286 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1287 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1287 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1288 = x6 - x1287;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1288 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1289 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1289 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1290 = x1289 - x1275;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1291 = x1290 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1292 = Fp(x1291.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1292);
            reg = x1292;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1293 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1293 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1294 = x1291 - x1293;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1295 = x1294 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1296 = Fp(x1295.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1296);
            reg = x1296;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1297 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1297 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1298 = x1295 - x1297;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1299 = x1298 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1300 = Fp(x1299.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1300);
            reg = x1300;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1301 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1301 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1302 = x1299 - x1301;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1303 = x1302 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1303);
          reg = x1303;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1304 = x1205 * x1281;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1304 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1305 = x7 - x1286;
      if (x1305 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1306 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1306 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1307 = x1275 - x1306;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1307 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1308 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x1308 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1309 = x1308 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1310 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1310 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1311 = x1309 + x1310;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1312 = x1276 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1313 = x1311 - x1312;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1314 = x1313 + x1268;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1315 = Fp(x1314.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1315);
            reg = x1315;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1316 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1316 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1317 = x1314 - x1316;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1318 = x1317 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1319 = Fp(x1318.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1319);
            reg = x1319;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1320 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1320 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1321 = x1318 - x1320;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1322 = x1321 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1323 = Fp(x1322.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1323);
            reg = x1323;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1324 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1324 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1325 = x1322 - x1324;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1326 = x1325 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1326);
          reg = x1326;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1327 = x5 - x1310;
        if (x1327 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1328 = x1213 - x1277;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1328 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1329 = x1214 - x1278;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1329 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1330 = x1215 - x1279;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1330 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1331 = x1216 - x1280;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1331 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1332 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x1332 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1333 = x7 - x1332;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1334 = x6 - x1332;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1335 = x1333 * x1334;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1336 = x5 - x1332;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1337 = x1334 * x1336;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1338 = x1333 * x1336;
      if (x1338 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1335 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1337 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1281);
          reg = x1281;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1339 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x1339 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1340 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x1340 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1341 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x1341 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1342 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x1342 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1343 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x1343 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1344 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x1344 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1345 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x1345 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1346 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1346 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1347 = x1339 - x1346;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1348 = (x1347 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1349 = x7 - x1348;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1349);
          reg = x1349;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1350 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x1350 != Fp::invalid());
      if (x1350 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1351 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x1351 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1352 = x6 - x1351;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1352 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1353 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1353 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1354 = x1353 - x1339;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1355 = x1354 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1356 = Fp(x1355.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1356);
            reg = x1356;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1357 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1357 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1358 = x1355 - x1357;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1359 = x1358 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1360 = Fp(x1359.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1360);
            reg = x1360;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1361 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1361 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1362 = x1359 - x1361;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1363 = x1362 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1364 = Fp(x1363.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1364);
            reg = x1364;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1365 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1365 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1366 = x1363 - x1365;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1367 = x1366 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1367);
          reg = x1367;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1368 = x1205 * x1345;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1368 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1369 = x7 - x1350;
      if (x1369 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1370 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1370 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1371 = x1339 - x1370;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1371 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1372 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x1372 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1373 = x1372 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1374 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x1374 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1375 = x1373 + x1374;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1376 = x1340 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1377 = x1375 - x1376;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1378 = x1377 + x1332;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1379 = Fp(x1378.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1379);
            reg = x1379;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1380 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1380 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1381 = x1378 - x1380;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1382 = x1381 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1383 = Fp(x1382.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1383);
            reg = x1383;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1384 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1384 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1385 = x1382 - x1384;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1386 = x1385 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1387 = Fp(x1386.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1387);
            reg = x1387;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1388 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1388 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1389 = x1386 - x1388;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1390 = x1389 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1390);
          reg = x1390;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1391 = x5 - x1374;
        if (x1391 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1392 = x1277 - x1341;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1392 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1393 = x1278 - x1342;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1393 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1394 = x1279 - x1343;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1394 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1395 = x1280 - x1344;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1395 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1396 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x1396 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1397 = x7 - x1396;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1398 = x6 - x1396;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1399 = x1397 * x1398;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1400 = x5 - x1396;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1401 = x1398 * x1400;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1402 = x1397 * x1400;
      if (x1402 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1399 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1401 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1345);
          reg = x1345;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1403 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x1403 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1404 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x1404 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1405 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x1405 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1406 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x1406 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1407 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x1407 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1408 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x1408 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/2(ComputeWrap)/ComputeCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1409 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x1409 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1410 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1410 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1411 = x1403 - x1410;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1412 = (x1411 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1413 = x7 - x1412;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1413);
          reg = x1413;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1414 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x1414 != Fp::invalid());
      if (x1414 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1415 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x1415 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1416 = x6 - x1415;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1416 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1417 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1417 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1418 = x1417 - x1403;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1419 = x1418 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1420 = Fp(x1419.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1420);
            reg = x1420;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1421 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1421 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1422 = x1419 - x1421;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1423 = x1422 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1424 = Fp(x1423.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1424);
            reg = x1424;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1425 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1425 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1426 = x1423 - x1425;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1427 = x1426 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1428 = Fp(x1427.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1428);
            reg = x1428;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1429 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x1429 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1430 = x1427 - x1429;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1431 = x1430 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1431);
          reg = x1431;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1432 = x1205 * x1409;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1432 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1433 = x7 - x1414;
      if (x1433 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1434 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1434 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1435 = x1403 - x1434;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1435 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1436 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x1436 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1437 = x1436 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1438 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x1438 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1439 = x1437 + x1438;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1440 = x1404 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1441 = x1439 - x1440;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1442 = x1441 + x1396;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1443 = Fp(x1442.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1443);
            reg = x1443;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1444 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1444 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1445 = x1442 - x1444;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1446 = x1445 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1447 = Fp(x1446.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1447);
            reg = x1447;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1448 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1448 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1449 = x1446 - x1448;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1450 = x1449 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1451 = Fp(x1450.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1451);
            reg = x1451;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1452 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x1452 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1453 = x1450 - x1452;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1454 = x1453 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1454);
          reg = x1454;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1455 = x5 - x1438;
        if (x1455 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1456 = x1341 - x1405;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1456 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1457 = x1342 - x1406;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1457 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1458 = x1343 - x1407;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1458 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1459 = x1344 - x1408;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1459 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1460 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x1460 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1461 = x7 - x1460;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1462 = x6 - x1460;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1463 = x1461 * x1462;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1464 = x5 - x1460;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1465 = x1462 * x1464;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1466 = x1461 * x1464;
      if (x1466 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1463 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1465 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1409);
          reg = x1409;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x1467 = args[2][103 * steps + ((cycle - 0) & mask)];
    assert(x1467 != Fp::invalid());
    if (x1467 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1468 = host_outs.at(0);
        auto x1469 = host_outs.at(1);
        auto x1470 = host_outs.at(2);
        auto x1471 = host_outs.at(3);
        auto x1472 = host_outs.at(4);
        auto x1473 = host_outs.at(5);
        auto x1474 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1468);
          reg = x1468;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1469);
          reg = x1469;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1470);
          reg = x1470;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1471);
          reg = x1471;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1472);
          reg = x1472;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1473);
          reg = x1473;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1474);
          reg = x1474;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1475 = host_outs.at(0);
        auto x1476 = host_outs.at(1);
        auto x1477 = host_outs.at(2);
        auto x1478 = host_outs.at(3);
        auto x1479 = host_outs.at(4);
        auto x1480 = host_outs.at(5);
        auto x1481 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1475);
          reg = x1475;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1476);
          reg = x1476;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1477);
          reg = x1477;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1478);
          reg = x1478;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1479);
          reg = x1479;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1480);
          reg = x1480;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1481);
          reg = x1481;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1482 = host_outs.at(0);
        auto x1483 = host_outs.at(1);
        auto x1484 = host_outs.at(2);
        auto x1485 = host_outs.at(3);
        auto x1486 = host_outs.at(4);
        auto x1487 = host_outs.at(5);
        auto x1488 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1482);
          reg = x1482;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1483);
          reg = x1483;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1484);
          reg = x1484;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1485);
          reg = x1485;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1486);
          reg = x1486;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1487);
          reg = x1487;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][171 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1488);
          reg = x1488;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1489 = host_outs.at(0);
        auto x1490 = host_outs.at(1);
        auto x1491 = host_outs.at(2);
        auto x1492 = host_outs.at(3);
        auto x1493 = host_outs.at(4);
        auto x1494 = host_outs.at(5);
        auto x1495 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][172 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1489);
          reg = x1489;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][173 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1490);
          reg = x1490;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][174 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1491);
          reg = x1491;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][175 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1492);
          reg = x1492;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][176 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1493);
          reg = x1493;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][177 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1494);
          reg = x1494;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][178 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1495);
          reg = x1495;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1496 = host_outs.at(0);
        auto x1497 = host_outs.at(1);
        auto x1498 = host_outs.at(2);
        auto x1499 = host_outs.at(3);
        auto x1500 = host_outs.at(4);
        auto x1501 = host_outs.at(5);
        auto x1502 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1496);
          reg = x1496;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1497);
          reg = x1497;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1498);
          reg = x1498;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1499);
          reg = x1499;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1500);
          reg = x1500;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1501);
          reg = x1501;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1502);
          reg = x1502;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1503 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1504 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x1504 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1505 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x1505 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x1506 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x1506 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1507 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x1507 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1508 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x1508 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1509 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x1509 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1510 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x1510 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1511 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x1511 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1512 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x1512 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1513 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x1513 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1514 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x1514 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1515 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x1515 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1516 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1516 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1517 = x1504 - x1516;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1518 = (x1517 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1519 = x7 - x1518;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][179 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1519);
          reg = x1519;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1520 = args[2][179 * steps + ((cycle - 0) & mask)];
      assert(x1520 != Fp::invalid());
      if (x1520 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1521 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1521 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1522 = x6 - x1521;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1522 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1523 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1523 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1524 = x1523 - x1504;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1525 = x1524 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1526 = Fp(x1525.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1526);
            reg = x1526;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1527 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x1527 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1528 = x1525 - x1527;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1529 = x1528 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1530 = Fp(x1529.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1530);
            reg = x1530;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1531 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x1531 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1532 = x1529 - x1531;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1533 = x1532 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1534 = Fp(x1533.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1534);
            reg = x1534;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1535 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1535 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1536 = x1533 - x1535;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1537 = x1536 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1537);
          reg = x1537;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1538 = x1503 * x1515;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1538 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1539 = x7 - x1520;
      if (x1539 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1540 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1540 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1541 = x1504 - x1540;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1541 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1542 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x1542 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1543 = x1542 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1544 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1544 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1545 = x1543 + x1544;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1546 = x1505 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1547 = x1545 - x1546;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1548 = x1547 + x1506;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1549 = Fp(x1548.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1549);
            reg = x1549;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1550 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x1550 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1551 = x1548 - x1550;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1552 = x1551 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1553 = Fp(x1552.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1553);
            reg = x1553;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1554 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x1554 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1555 = x1552 - x1554;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1556 = x1555 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1557 = Fp(x1556.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1557);
            reg = x1557;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1558 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1558 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1559 = x1556 - x1558;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1560 = x1559 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1560);
          reg = x1560;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1561 = x5 - x1544;
        if (x1561 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1562 = x1507 - x1511;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1562 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1563 = x1508 - x1512;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1563 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1564 = x1509 - x1513;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1564 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1565 = x1510 - x1514;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1565 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1566 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x1566 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1567 = x7 - x1566;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1568 = x6 - x1566;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1569 = x1567 * x1568;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1570 = x5 - x1566;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1571 = x1568 * x1570;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1572 = x1567 * x1570;
      if (x1572 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][180 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1569 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][180 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1571 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][180 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1515);
          reg = x1515;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1573 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x1573 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1574 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x1574 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1575 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x1575 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1576 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x1576 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1577 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x1577 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1578 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x1578 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1579 = args[2][180 * steps + ((cycle - 0) & mask)];
      assert(x1579 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1580 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1580 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1581 = x1573 - x1580;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1582 = (x1581 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1583 = x7 - x1582;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][181 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1583);
          reg = x1583;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1584 = args[2][181 * steps + ((cycle - 0) & mask)];
      assert(x1584 != Fp::invalid());
      if (x1584 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1585 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x1585 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1586 = x6 - x1585;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1586 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1587 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1587 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1588 = x1587 - x1573;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1589 = x1588 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1590 = Fp(x1589.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1590);
            reg = x1590;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1591 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1591 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1592 = x1589 - x1591;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1593 = x1592 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1594 = Fp(x1593.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1594);
            reg = x1594;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1595 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1595 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1596 = x1593 - x1595;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1597 = x1596 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1598 = Fp(x1597.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1598);
            reg = x1598;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1599 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1599 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1600 = x1597 - x1599;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1601 = x1600 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1601);
          reg = x1601;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1602 = x1503 * x1579;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1602 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1603 = x7 - x1584;
      if (x1603 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1604 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1604 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1605 = x1573 - x1604;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1605 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1606 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x1606 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1607 = x1606 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1608 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x1608 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1609 = x1607 + x1608;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1610 = x1574 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1611 = x1609 - x1610;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1612 = x1611 + x1566;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1613 = Fp(x1612.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1613);
            reg = x1613;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1614 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1614 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1615 = x1612 - x1614;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1616 = x1615 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1617 = Fp(x1616.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1617);
            reg = x1617;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1618 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1618 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1619 = x1616 - x1618;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1620 = x1619 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1621 = Fp(x1620.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1621);
            reg = x1621;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1622 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1622 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1623 = x1620 - x1622;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1624 = x1623 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1624);
          reg = x1624;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1625 = x5 - x1608;
        if (x1625 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1626 = x1511 - x1575;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1626 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1627 = x1512 - x1576;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1627 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1628 = x1513 - x1577;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1628 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1629 = x1514 - x1578;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1629 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1630 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x1630 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1631 = x7 - x1630;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1632 = x6 - x1630;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1633 = x1631 * x1632;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1634 = x5 - x1630;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1635 = x1632 * x1634;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1636 = x1631 * x1634;
      if (x1636 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][182 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1633 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][182 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1635 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][182 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1579);
          reg = x1579;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1637 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x1637 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1638 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x1638 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1639 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x1639 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1640 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x1640 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1641 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x1641 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1642 = args[2][171 * steps + ((cycle - 0) & mask)];
      assert(x1642 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1643 = args[2][182 * steps + ((cycle - 0) & mask)];
      assert(x1643 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1644 = args[2][165 * steps + ((cycle - 0) & mask)];
        assert(x1644 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1645 = x1637 - x1644;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1646 = (x1645 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1647 = x7 - x1646;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][183 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1647);
          reg = x1647;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1648 = args[2][183 * steps + ((cycle - 0) & mask)];
      assert(x1648 != Fp::invalid());
      if (x1648 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1649 = args[2][167 * steps + ((cycle - 0) & mask)];
        assert(x1649 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1650 = x6 - x1649;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1650 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1651 = args[2][165 * steps + ((cycle - 0) & mask)];
        assert(x1651 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1652 = x1651 - x1637;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1653 = x1652 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1654 = Fp(x1653.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1654);
            reg = x1654;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1655 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1655 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1656 = x1653 - x1655;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1657 = x1656 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1658 = Fp(x1657.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1658);
            reg = x1658;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1659 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1659 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1660 = x1657 - x1659;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1661 = x1660 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1662 = Fp(x1661.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1662);
            reg = x1662;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1663 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1663 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1664 = x1661 - x1663;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1665 = x1664 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1665);
          reg = x1665;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1666 = x1503 * x1643;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1666 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1667 = x7 - x1648;
      if (x1667 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1668 = args[2][165 * steps + ((cycle - 0) & mask)];
        assert(x1668 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1669 = x1637 - x1668;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1669 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1670 = args[2][166 * steps + ((cycle - 0) & mask)];
        assert(x1670 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1671 = x1670 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1672 = args[2][167 * steps + ((cycle - 0) & mask)];
        assert(x1672 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1673 = x1671 + x1672;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1674 = x1638 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1675 = x1673 - x1674;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1676 = x1675 + x1630;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1677 = Fp(x1676.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1677);
            reg = x1677;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1678 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1678 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1679 = x1676 - x1678;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1680 = x1679 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1681 = Fp(x1680.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1681);
            reg = x1681;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1682 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1682 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1683 = x1680 - x1682;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1684 = x1683 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1685 = Fp(x1684.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1685);
            reg = x1685;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1686 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1686 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1687 = x1684 - x1686;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1688 = x1687 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1688);
          reg = x1688;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1689 = x5 - x1672;
        if (x1689 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1690 = x1575 - x1639;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1690 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1691 = x1576 - x1640;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1691 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1692 = x1577 - x1641;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1692 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1693 = x1578 - x1642;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1693 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1694 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x1694 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1695 = x7 - x1694;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1696 = x6 - x1694;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1697 = x1695 * x1696;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1698 = x5 - x1694;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1699 = x1696 * x1698;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1700 = x1695 * x1698;
      if (x1700 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][184 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1697 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][184 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1699 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][184 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1643);
          reg = x1643;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1701 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x1701 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1702 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x1702 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1703 = args[2][175 * steps + ((cycle - 0) & mask)];
      assert(x1703 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1704 = args[2][176 * steps + ((cycle - 0) & mask)];
      assert(x1704 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1705 = args[2][177 * steps + ((cycle - 0) & mask)];
      assert(x1705 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1706 = args[2][178 * steps + ((cycle - 0) & mask)];
      assert(x1706 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1707 = args[2][184 * steps + ((cycle - 0) & mask)];
      assert(x1707 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1708 = args[2][172 * steps + ((cycle - 0) & mask)];
        assert(x1708 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1709 = x1701 - x1708;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1710 = (x1709 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1711 = x7 - x1710;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][185 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1711);
          reg = x1711;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1712 = args[2][185 * steps + ((cycle - 0) & mask)];
      assert(x1712 != Fp::invalid());
      if (x1712 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1713 = args[2][174 * steps + ((cycle - 0) & mask)];
        assert(x1713 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1714 = x6 - x1713;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1714 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1715 = args[2][172 * steps + ((cycle - 0) & mask)];
        assert(x1715 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1716 = x1715 - x1701;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1717 = x1716 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1718 = Fp(x1717.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][18 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1718);
            reg = x1718;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1719 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x1719 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1720 = x1717 - x1719;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1721 = x1720 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1722 = Fp(x1721.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][19 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1722);
            reg = x1722;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1723 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x1723 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1724 = x1721 - x1723;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1725 = x1724 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1726 = Fp(x1725.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][20 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1726);
            reg = x1726;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1727 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x1727 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1728 = x1725 - x1727;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1729 = x1728 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][75 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1729);
          reg = x1729;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1730 = x1503 * x1707;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1730 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1731 = x7 - x1712;
      if (x1731 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1732 = args[2][172 * steps + ((cycle - 0) & mask)];
        assert(x1732 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1733 = x1701 - x1732;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1733 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1734 = args[2][173 * steps + ((cycle - 0) & mask)];
        assert(x1734 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1735 = x1734 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1736 = args[2][174 * steps + ((cycle - 0) & mask)];
        assert(x1736 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1737 = x1735 + x1736;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1738 = x1702 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1739 = x1737 - x1738;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1740 = x1739 + x1694;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1741 = Fp(x1740.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][18 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1741);
            reg = x1741;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1742 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x1742 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1743 = x1740 - x1742;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1744 = x1743 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1745 = Fp(x1744.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][19 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1745);
            reg = x1745;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1746 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x1746 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1747 = x1744 - x1746;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1748 = x1747 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1749 = Fp(x1748.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][20 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1749);
            reg = x1749;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1750 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x1750 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1751 = x1748 - x1750;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1752 = x1751 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][75 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1752);
          reg = x1752;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1753 = x5 - x1736;
        if (x1753 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1754 = x1639 - x1703;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1754 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1755 = x1640 - x1704;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1755 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1756 = x1641 - x1705;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1756 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1757 = x1642 - x1706;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1757 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1758 = args[2][174 * steps + ((cycle - 0) & mask)];
      assert(x1758 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1759 = x7 - x1758;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1760 = x6 - x1758;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1761 = x1759 * x1760;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1762 = x5 - x1758;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1763 = x1760 * x1762;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1764 = x1759 * x1762;
      if (x1764 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][186 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1761 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][186 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1763 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][186 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1707);
          reg = x1707;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1765 = args[2][172 * steps + ((cycle - 0) & mask)];
      assert(x1765 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1766 = args[2][173 * steps + ((cycle - 0) & mask)];
      assert(x1766 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1767 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x1767 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1768 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x1768 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1769 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x1769 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1770 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x1770 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/3(MemIOCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1771 = args[2][186 * steps + ((cycle - 0) & mask)];
      assert(x1771 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1772 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1772 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1773 = x1765 - x1772;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1774 = (x1773 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1775 = x7 - x1774;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1775);
          reg = x1775;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1776 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x1776 != Fp::invalid());
      if (x1776 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1777 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x1777 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1778 = x6 - x1777;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1778 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1779 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1779 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1780 = x1779 - x1765;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1781 = x1780 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1782 = Fp(x1781.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1782);
            reg = x1782;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1783 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1783 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1784 = x1781 - x1783;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1785 = x1784 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1786 = Fp(x1785.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1786);
            reg = x1786;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1787 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1787 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1788 = x1785 - x1787;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1789 = x1788 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1790 = Fp(x1789.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1790);
            reg = x1790;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1791 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x1791 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1792 = x1789 - x1791;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1793 = x1792 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1793);
          reg = x1793;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1794 = x1503 * x1771;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1794 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1795 = x7 - x1776;
      if (x1795 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1796 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x1796 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1797 = x1765 - x1796;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1797 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1798 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x1798 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1799 = x1798 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1800 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x1800 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1801 = x1799 + x1800;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1802 = x1766 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1803 = x1801 - x1802;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1804 = x1803 + x1758;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1805 = Fp(x1804.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1805);
            reg = x1805;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1806 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1806 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1807 = x1804 - x1806;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1808 = x1807 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1809 = Fp(x1808.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1809);
            reg = x1809;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1810 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1810 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1811 = x1808 - x1810;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1812 = x1811 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1813 = Fp(x1812.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1813);
            reg = x1813;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1814 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x1814 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1815 = x1812 - x1814;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1816 = x1815 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1816);
          reg = x1816;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1817 = x5 - x1800;
        if (x1817 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1818 = x1703 - x1767;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1818 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1819 = x1704 - x1768;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1819 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1820 = x1705 - x1769;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1820 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1821 = x1706 - x1770;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1821 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1822 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x1822 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1823 = x7 - x1822;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1824 = x6 - x1822;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1825 = x1823 * x1824;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1826 = x5 - x1822;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1827 = x1824 * x1826;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1828 = x1823 * x1826;
      if (x1828 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1825 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1827 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1771);
          reg = x1771;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x1829 = args[2][104 * steps + ((cycle - 0) & mask)];
    assert(x1829 != Fp::invalid());
    if (x1829 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1830 = host_outs.at(0);
        auto x1831 = host_outs.at(1);
        auto x1832 = host_outs.at(2);
        auto x1833 = host_outs.at(3);
        auto x1834 = host_outs.at(4);
        auto x1835 = host_outs.at(5);
        auto x1836 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1830);
          reg = x1830;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1831);
          reg = x1831;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1832);
          reg = x1832;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1833);
          reg = x1833;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1834);
          reg = x1834;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1835);
          reg = x1835;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1836);
          reg = x1836;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1837 = host_outs.at(0);
        auto x1838 = host_outs.at(1);
        auto x1839 = host_outs.at(2);
        auto x1840 = host_outs.at(3);
        auto x1841 = host_outs.at(4);
        auto x1842 = host_outs.at(5);
        auto x1843 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1837);
          reg = x1837;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1838);
          reg = x1838;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1839);
          reg = x1839;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1840);
          reg = x1840;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1841);
          reg = x1841;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1842);
          reg = x1842;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1843);
          reg = x1843;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1844 = host_outs.at(0);
        auto x1845 = host_outs.at(1);
        auto x1846 = host_outs.at(2);
        auto x1847 = host_outs.at(3);
        auto x1848 = host_outs.at(4);
        auto x1849 = host_outs.at(5);
        auto x1850 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1844);
          reg = x1844;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1845);
          reg = x1845;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1846);
          reg = x1846;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1847);
          reg = x1847;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1848);
          reg = x1848;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1849);
          reg = x1849;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1850);
          reg = x1850;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x1851 = host_outs.at(0);
        auto x1852 = host_outs.at(1);
        auto x1853 = host_outs.at(2);
        auto x1854 = host_outs.at(3);
        auto x1855 = host_outs.at(4);
        auto x1856 = host_outs.at(5);
        auto x1857 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1851);
          reg = x1851;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1852);
          reg = x1852;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1853);
          reg = x1853;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1854);
          reg = x1854;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1855);
          reg = x1855;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1856);
          reg = x1856;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1857);
          reg = x1857;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1858 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1859 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x1859 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1860 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x1860 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x1861 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x1861 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1862 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x1862 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1863 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x1863 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1864 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x1864 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1865 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x1865 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1866 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x1866 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1867 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x1867 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1868 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x1868 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1869 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x1869 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1870 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x1870 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1871 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x1871 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1872 = x1859 - x1871;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1873 = (x1872 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1874 = x7 - x1873;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1874);
          reg = x1874;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1875 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x1875 != Fp::invalid());
      if (x1875 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1876 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x1876 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1877 = x6 - x1876;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1877 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1878 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x1878 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1879 = x1878 - x1859;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1880 = x1879 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1881 = Fp(x1880.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1881);
            reg = x1881;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1882 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x1882 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1883 = x1880 - x1882;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1884 = x1883 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1885 = Fp(x1884.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1885);
            reg = x1885;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1886 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x1886 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1887 = x1884 - x1886;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1888 = x1887 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1889 = Fp(x1888.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1889);
            reg = x1889;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1890 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1890 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1891 = x1888 - x1890;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1892 = x1891 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1892);
          reg = x1892;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1893 = x1858 * x1870;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1893 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1894 = x7 - x1875;
      if (x1894 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1895 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x1895 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1896 = x1859 - x1895;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1896 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1897 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x1897 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1898 = x1897 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1899 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x1899 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1900 = x1898 + x1899;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1901 = x1860 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1902 = x1900 - x1901;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1903 = x1902 + x1861;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1904 = Fp(x1903.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1904);
            reg = x1904;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1905 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x1905 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1906 = x1903 - x1905;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1907 = x1906 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1908 = Fp(x1907.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1908);
            reg = x1908;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1909 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x1909 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1910 = x1907 - x1909;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1911 = x1910 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1912 = Fp(x1911.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1912);
            reg = x1912;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1913 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1913 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1914 = x1911 - x1913;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1915 = x1914 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1915);
          reg = x1915;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1916 = x5 - x1899;
        if (x1916 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1917 = x1862 - x1866;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1917 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1918 = x1863 - x1867;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1918 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1919 = x1864 - x1868;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1919 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1920 = x1865 - x1869;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1920 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1921 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x1921 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1922 = x7 - x1921;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1923 = x6 - x1921;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1924 = x1922 * x1923;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1925 = x5 - x1921;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1926 = x1923 * x1925;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1927 = x1922 * x1925;
      if (x1927 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1924 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1926 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1870);
          reg = x1870;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1928 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x1928 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1929 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x1929 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1930 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x1930 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1931 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x1931 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1932 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x1932 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1933 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x1933 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1934 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x1934 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1935 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1935 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1936 = x1928 - x1935;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x1937 = (x1936 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x1938 = x7 - x1937;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1938);
          reg = x1938;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1939 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x1939 != Fp::invalid());
      if (x1939 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1940 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1940 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x1941 = x6 - x1940;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x1941 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1942 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1942 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1943 = x1942 - x1928;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x1944 = x1943 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1945 = Fp(x1944.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1945);
            reg = x1945;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1946 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1946 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1947 = x1944 - x1946;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1948 = x1947 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1949 = Fp(x1948.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1949);
            reg = x1949;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1950 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1950 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1951 = x1948 - x1950;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1952 = x1951 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1953 = Fp(x1952.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1953);
            reg = x1953;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1954 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1954 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1955 = x1952 - x1954;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1956 = x1955 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1956);
          reg = x1956;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x1957 = x1858 * x1934;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x1957 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x1958 = x7 - x1939;
      if (x1958 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1959 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x1959 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x1960 = x1928 - x1959;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x1960 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1961 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x1961 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1962 = x1961 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1963 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x1963 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1964 = x1962 + x1963;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x1965 = x1929 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1966 = x1964 - x1965;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x1967 = x1966 + x1921;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1968 = Fp(x1967.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1968);
            reg = x1968;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1969 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1969 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1970 = x1967 - x1969;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1971 = x1970 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1972 = Fp(x1971.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1972);
            reg = x1972;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1973 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1973 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1974 = x1971 - x1973;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1975 = x1974 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x1976 = Fp(x1975.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x1976);
            reg = x1976;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x1977 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1977 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x1978 = x1975 - x1977;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x1979 = x1978 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1979);
          reg = x1979;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x1980 = x5 - x1963;
        if (x1980 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1981 = x1866 - x1930;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1981 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1982 = x1867 - x1931;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1982 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1983 = x1868 - x1932;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1983 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x1984 = x1869 - x1933;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x1984 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x1985 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x1985 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x1986 = x7 - x1985;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x1987 = x6 - x1985;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x1988 = x1986 * x1987;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x1989 = x5 - x1985;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x1990 = x1987 * x1989;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x1991 = x1986 * x1989;
      if (x1991 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x1988 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x1990 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1934);
          reg = x1934;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x1992 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x1992 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x1993 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x1993 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1994 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x1994 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1995 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x1995 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1996 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x1996 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x1997 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x1997 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x1998 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x1998 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x1999 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x1999 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2000 = x1992 - x1999;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2001 = (x2000 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2002 = x7 - x2001;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2002);
          reg = x2002;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2003 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x2003 != Fp::invalid());
      if (x2003 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2004 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x2004 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2005 = x6 - x2004;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2005 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2006 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2006 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2007 = x2006 - x1992;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2008 = x2007 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2009 = Fp(x2008.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2009);
            reg = x2009;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2010 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2010 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2011 = x2008 - x2010;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2012 = x2011 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2013 = Fp(x2012.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2013);
            reg = x2013;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2014 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2014 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2015 = x2012 - x2014;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2016 = x2015 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2017 = Fp(x2016.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2017);
            reg = x2017;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2018 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2018 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2019 = x2016 - x2018;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2020 = x2019 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2020);
          reg = x2020;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2021 = x1858 * x1998;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2021 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2022 = x7 - x2003;
      if (x2022 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2023 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2023 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2024 = x1992 - x2023;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2024 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2025 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x2025 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2026 = x2025 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2027 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x2027 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2028 = x2026 + x2027;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2029 = x1993 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2030 = x2028 - x2029;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2031 = x2030 + x1985;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2032 = Fp(x2031.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2032);
            reg = x2032;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2033 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2033 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2034 = x2031 - x2033;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2035 = x2034 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2036 = Fp(x2035.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2036);
            reg = x2036;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2037 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2037 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2038 = x2035 - x2037;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2039 = x2038 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2040 = Fp(x2039.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2040);
            reg = x2040;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2041 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2041 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2042 = x2039 - x2041;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2043 = x2042 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2043);
          reg = x2043;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2044 = x5 - x2027;
        if (x2044 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2045 = x1930 - x1994;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2045 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2046 = x1931 - x1995;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2046 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2047 = x1932 - x1996;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2047 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2048 = x1933 - x1997;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2048 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2049 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x2049 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2050 = x7 - x2049;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2051 = x6 - x2049;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2052 = x2050 * x2051;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2053 = x5 - x2049;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2054 = x2051 * x2053;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2055 = x2050 * x2053;
      if (x2055 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2052 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2054 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x1998);
          reg = x1998;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2056 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x2056 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2057 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x2057 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2058 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x2058 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2059 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x2059 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2060 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x2060 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2061 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x2061 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/4(MultiplyCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2062 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x2062 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2063 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2063 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2064 = x2056 - x2063;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2065 = (x2064 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2066 = x7 - x2065;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2066);
          reg = x2066;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2067 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x2067 != Fp::invalid());
      if (x2067 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2068 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2068 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2069 = x6 - x2068;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2069 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2070 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2070 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2071 = x2070 - x2056;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2072 = x2071 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2073 = Fp(x2072.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2073);
            reg = x2073;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2074 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2074 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2075 = x2072 - x2074;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2076 = x2075 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2077 = Fp(x2076.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2077);
            reg = x2077;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2078 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2078 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2079 = x2076 - x2078;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2080 = x2079 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2081 = Fp(x2080.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2081);
            reg = x2081;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2082 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2082 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2083 = x2080 - x2082;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2084 = x2083 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2084);
          reg = x2084;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2085 = x1858 * x2062;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2085 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2086 = x7 - x2067;
      if (x2086 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2087 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2087 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2088 = x2056 - x2087;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2088 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2089 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x2089 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2090 = x2089 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2091 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2091 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2092 = x2090 + x2091;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2093 = x2057 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2094 = x2092 - x2093;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2095 = x2094 + x2049;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2096 = Fp(x2095.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2096);
            reg = x2096;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2097 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2097 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2098 = x2095 - x2097;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2099 = x2098 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2100 = Fp(x2099.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2100);
            reg = x2100;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2101 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2101 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2102 = x2099 - x2101;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2103 = x2102 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2104 = Fp(x2103.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2104);
            reg = x2104;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2105 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2105 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2106 = x2103 - x2105;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2107 = x2106 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2107);
          reg = x2107;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2108 = x5 - x2091;
        if (x2108 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2109 = x1994 - x2058;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2109 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2110 = x1995 - x2059;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2110 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2111 = x1996 - x2060;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2111 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2112 = x1997 - x2061;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2112 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2113 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x2113 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2114 = x7 - x2113;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2115 = x6 - x2113;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2116 = x2114 * x2115;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2117 = x5 - x2113;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2118 = x2115 * x2117;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2119 = x2114 * x2117;
      if (x2119 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2116 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2118 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2062);
          reg = x2062;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x2120 = args[2][105 * steps + ((cycle - 0) & mask)];
    assert(x2120 != Fp::invalid());
    if (x2120 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2121 = host_outs.at(0);
        auto x2122 = host_outs.at(1);
        auto x2123 = host_outs.at(2);
        auto x2124 = host_outs.at(3);
        auto x2125 = host_outs.at(4);
        auto x2126 = host_outs.at(5);
        auto x2127 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2121);
          reg = x2121;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2122);
          reg = x2122;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2123);
          reg = x2123;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2124);
          reg = x2124;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2125);
          reg = x2125;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2126);
          reg = x2126;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2127);
          reg = x2127;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2128 = host_outs.at(0);
        auto x2129 = host_outs.at(1);
        auto x2130 = host_outs.at(2);
        auto x2131 = host_outs.at(3);
        auto x2132 = host_outs.at(4);
        auto x2133 = host_outs.at(5);
        auto x2134 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2128);
          reg = x2128;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2129);
          reg = x2129;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2130);
          reg = x2130;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2131);
          reg = x2131;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2132);
          reg = x2132;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2133);
          reg = x2133;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2134);
          reg = x2134;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2135 = host_outs.at(0);
        auto x2136 = host_outs.at(1);
        auto x2137 = host_outs.at(2);
        auto x2138 = host_outs.at(3);
        auto x2139 = host_outs.at(4);
        auto x2140 = host_outs.at(5);
        auto x2141 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2135);
          reg = x2135;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2136);
          reg = x2136;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2137);
          reg = x2137;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2138);
          reg = x2138;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2139);
          reg = x2139;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2140);
          reg = x2140;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2141);
          reg = x2141;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2142 = host_outs.at(0);
        auto x2143 = host_outs.at(1);
        auto x2144 = host_outs.at(2);
        auto x2145 = host_outs.at(3);
        auto x2146 = host_outs.at(4);
        auto x2147 = host_outs.at(5);
        auto x2148 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2142);
          reg = x2142;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2143);
          reg = x2143;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2144);
          reg = x2144;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2145);
          reg = x2145;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2146);
          reg = x2146;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2147);
          reg = x2147;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2148);
          reg = x2148;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2149 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2150 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x2150 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2151 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x2151 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x2152 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x2152 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2153 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x2153 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2154 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x2154 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2155 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x2155 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2156 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x2156 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2157 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x2157 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2158 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x2158 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2159 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x2159 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2160 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x2160 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2161 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x2161 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2162 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x2162 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2163 = x2150 - x2162;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2164 = (x2163 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2165 = x7 - x2164;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2165);
          reg = x2165;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2166 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x2166 != Fp::invalid());
      if (x2166 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2167 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x2167 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2168 = x6 - x2167;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2168 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2169 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x2169 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2170 = x2169 - x2150;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2171 = x2170 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2172 = Fp(x2171.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2172);
            reg = x2172;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2173 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2173 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2174 = x2171 - x2173;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2175 = x2174 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2176 = Fp(x2175.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2176);
            reg = x2176;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2177 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2177 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2178 = x2175 - x2177;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2179 = x2178 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2180 = Fp(x2179.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2180);
            reg = x2180;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2181 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2181 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2182 = x2179 - x2181;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2183 = x2182 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2183);
          reg = x2183;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2184 = x2149 * x2161;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2184 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2185 = x7 - x2166;
      if (x2185 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2186 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x2186 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2187 = x2150 - x2186;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2187 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2188 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x2188 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2189 = x2188 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2190 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x2190 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2191 = x2189 + x2190;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2192 = x2151 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2193 = x2191 - x2192;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2194 = x2193 + x2152;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2195 = Fp(x2194.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2195);
            reg = x2195;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2196 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2196 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2197 = x2194 - x2196;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2198 = x2197 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2199 = Fp(x2198.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2199);
            reg = x2199;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2200 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2200 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2201 = x2198 - x2200;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2202 = x2201 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2203 = Fp(x2202.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2203);
            reg = x2203;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2204 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2204 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2205 = x2202 - x2204;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2206 = x2205 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2206);
          reg = x2206;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2207 = x5 - x2190;
        if (x2207 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2208 = x2153 - x2157;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2208 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2209 = x2154 - x2158;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2209 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2210 = x2155 - x2159;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2210 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2211 = x2156 - x2160;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2211 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2212 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x2212 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2213 = x7 - x2212;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2214 = x6 - x2212;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2215 = x2213 * x2214;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2216 = x5 - x2212;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2217 = x2214 * x2216;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2218 = x2213 * x2216;
      if (x2218 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2215 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2217 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2161);
          reg = x2161;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2219 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x2219 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2220 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x2220 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2221 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x2221 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2222 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x2222 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2223 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x2223 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2224 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x2224 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2225 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x2225 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2226 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x2226 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2227 = x2219 - x2226;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2228 = (x2227 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2229 = x7 - x2228;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2229);
          reg = x2229;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2230 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x2230 != Fp::invalid());
      if (x2230 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2231 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x2231 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2232 = x6 - x2231;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2232 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2233 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x2233 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2234 = x2233 - x2219;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2235 = x2234 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2236 = Fp(x2235.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2236);
            reg = x2236;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2237 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x2237 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2238 = x2235 - x2237;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2239 = x2238 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2240 = Fp(x2239.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2240);
            reg = x2240;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2241 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x2241 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2242 = x2239 - x2241;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2243 = x2242 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2244 = Fp(x2243.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2244);
            reg = x2244;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2245 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x2245 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2246 = x2243 - x2245;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2247 = x2246 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2247);
          reg = x2247;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2248 = x2149 * x2225;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2248 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2249 = x7 - x2230;
      if (x2249 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2250 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x2250 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2251 = x2219 - x2250;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2251 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2252 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x2252 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2253 = x2252 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2254 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x2254 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2255 = x2253 + x2254;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2256 = x2220 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2257 = x2255 - x2256;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2258 = x2257 + x2212;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2259 = Fp(x2258.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2259);
            reg = x2259;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2260 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x2260 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2261 = x2258 - x2260;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2262 = x2261 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2263 = Fp(x2262.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2263);
            reg = x2263;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2264 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x2264 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2265 = x2262 - x2264;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2266 = x2265 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2267 = Fp(x2266.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2267);
            reg = x2267;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2268 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x2268 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2269 = x2266 - x2268;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2270 = x2269 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2270);
          reg = x2270;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2271 = x5 - x2254;
        if (x2271 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2272 = x2157 - x2221;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2272 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2273 = x2158 - x2222;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2273 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2274 = x2159 - x2223;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2274 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2275 = x2160 - x2224;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2275 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2276 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x2276 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2277 = x7 - x2276;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2278 = x6 - x2276;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2279 = x2277 * x2278;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2280 = x5 - x2276;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2281 = x2278 * x2280;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2282 = x2277 * x2280;
      if (x2282 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2279 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2281 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2225);
          reg = x2225;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2283 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x2283 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2284 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x2284 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2285 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x2285 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2286 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x2286 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2287 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x2287 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2288 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x2288 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2289 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x2289 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2290 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2290 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2291 = x2283 - x2290;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2292 = (x2291 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2293 = x7 - x2292;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2293);
          reg = x2293;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2294 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x2294 != Fp::invalid());
      if (x2294 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2295 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x2295 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2296 = x6 - x2295;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2296 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2297 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2297 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2298 = x2297 - x2283;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2299 = x2298 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2300 = Fp(x2299.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2300);
            reg = x2300;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2301 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2301 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2302 = x2299 - x2301;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2303 = x2302 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2304 = Fp(x2303.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2304);
            reg = x2304;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2305 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2305 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2306 = x2303 - x2305;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2307 = x2306 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2308 = Fp(x2307.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2308);
            reg = x2308;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2309 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2309 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2310 = x2307 - x2309;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2311 = x2310 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2311);
          reg = x2311;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2312 = x2149 * x2289;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2312 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2313 = x7 - x2294;
      if (x2313 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2314 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2314 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2315 = x2283 - x2314;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2315 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2316 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x2316 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2317 = x2316 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2318 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x2318 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2319 = x2317 + x2318;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2320 = x2284 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2321 = x2319 - x2320;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2322 = x2321 + x2276;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2323 = Fp(x2322.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2323);
            reg = x2323;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2324 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2324 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2325 = x2322 - x2324;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2326 = x2325 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2327 = Fp(x2326.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2327);
            reg = x2327;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2328 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2328 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2329 = x2326 - x2328;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2330 = x2329 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2331 = Fp(x2330.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2331);
            reg = x2331;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2332 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2332 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2333 = x2330 - x2332;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2334 = x2333 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2334);
          reg = x2334;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2335 = x5 - x2318;
        if (x2335 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2336 = x2221 - x2285;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2336 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2337 = x2222 - x2286;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2337 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2338 = x2223 - x2287;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2338 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2339 = x2224 - x2288;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2339 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2340 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x2340 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2341 = x7 - x2340;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2342 = x6 - x2340;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2343 = x2341 * x2342;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2344 = x5 - x2340;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2345 = x2342 * x2344;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2346 = x2341 * x2344;
      if (x2346 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2343 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2345 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2289);
          reg = x2289;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2347 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x2347 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2348 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x2348 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2349 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x2349 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2350 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x2350 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2351 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x2351 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2352 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x2352 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/5(DivideCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2353 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x2353 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2354 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2354 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2355 = x2347 - x2354;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2356 = (x2355 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2357 = x7 - x2356;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2357);
          reg = x2357;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2358 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x2358 != Fp::invalid());
      if (x2358 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2359 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2359 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2360 = x6 - x2359;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2360 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2361 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2361 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2362 = x2361 - x2347;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2363 = x2362 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2364 = Fp(x2363.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2364);
            reg = x2364;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2365 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2365 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2366 = x2363 - x2365;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2367 = x2366 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2368 = Fp(x2367.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2368);
            reg = x2368;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2369 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2369 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2370 = x2367 - x2369;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2371 = x2370 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2372 = Fp(x2371.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2372);
            reg = x2372;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2373 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2373 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2374 = x2371 - x2373;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2375 = x2374 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2375);
          reg = x2375;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2376 = x2149 * x2353;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2376 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2377 = x7 - x2358;
      if (x2377 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2378 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2378 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2379 = x2347 - x2378;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2379 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2380 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x2380 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2381 = x2380 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2382 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2382 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2383 = x2381 + x2382;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2384 = x2348 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2385 = x2383 - x2384;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2386 = x2385 + x2340;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2387 = Fp(x2386.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2387);
            reg = x2387;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2388 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2388 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2389 = x2386 - x2388;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2390 = x2389 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2391 = Fp(x2390.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2391);
            reg = x2391;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2392 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2392 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2393 = x2390 - x2392;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2394 = x2393 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2395 = Fp(x2394.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2395);
            reg = x2395;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2396 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2396 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2397 = x2394 - x2396;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2398 = x2397 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2398);
          reg = x2398;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2399 = x5 - x2382;
        if (x2399 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2400 = x2285 - x2349;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2400 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2401 = x2286 - x2350;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2401 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2402 = x2287 - x2351;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2402 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2403 = x2288 - x2352;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2403 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2404 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x2404 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2405 = x7 - x2404;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2406 = x6 - x2404;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2407 = x2405 * x2406;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2408 = x5 - x2404;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2409 = x2406 * x2408;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2410 = x2405 * x2408;
      if (x2410 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2407 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2409 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2353);
          reg = x2353;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x2411 = args[2][106 * steps + ((cycle - 0) & mask)];
    assert(x2411 != Fp::invalid());
    if (x2411 != 0) {
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2412 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x2412 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2413 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x2413 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2414 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x2414 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2415 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x2415 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2416 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x2416 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2417 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x2417 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2418 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x2418 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2412);
        reg = x2412;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2413);
        reg = x2413;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2414);
        reg = x2414;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2415);
        reg = x2415;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2416);
        reg = x2416;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2417);
        reg = x2417;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2418);
        reg = x2418;
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2419 = args[2][96 * steps + ((cycle - 1) & mask)];
      assert(x2419 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2420 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x2420 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x2421 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x2421 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x2422 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x2422 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x2423 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x2423 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Twit/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2424 = args[2][69 * steps + ((cycle - 1) & mask)];
      assert(x2424 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":128:3)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2419);
        reg = x2419;
      }
      // loc("zirgen/components/ram.cpp":129:3)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2420);
        reg = x2420;
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x2425 = Fp(x2421.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2425);
          reg = x2425;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x2426 = Fp(x2422.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2426);
          reg = x2426;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x2427 = Fp(x2423.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2427);
          reg = x2427;
        }
      }
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2424);
        reg = x2424;
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x2428 = args[2][107 * steps + ((cycle - 0) & mask)];
    assert(x2428 != Fp::invalid());
    if (x2428 != 0) {
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2429 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x2429 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2430 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x2430 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2431 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x2431 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2432 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x2432 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2433 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x2433 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2434 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x2434 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2435 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x2435 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2429);
        reg = x2429;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2430);
        reg = x2430;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2431);
        reg = x2431;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2432);
        reg = x2432;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2433);
        reg = x2433;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2434);
        reg = x2434;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2435);
        reg = x2435;
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2436 = args[2][96 * steps + ((cycle - 1) & mask)];
      assert(x2436 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2437 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x2437 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x2438 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x2438 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x2439 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x2439 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x2440 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x2440 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Twit/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2441 = args[2][69 * steps + ((cycle - 1) & mask)];
      assert(x2441 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":128:3)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2436);
        reg = x2436;
      }
      // loc("zirgen/components/ram.cpp":129:3)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2437);
        reg = x2437;
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x2442 = Fp(x2438.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2442);
          reg = x2442;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x2443 = Fp(x2439.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2443);
          reg = x2443;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x2444 = Fp(x2440.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2444);
          reg = x2444;
        }
      }
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x2441);
        reg = x2441;
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x2445 = args[2][108 * steps + ((cycle - 0) & mask)];
    assert(x2445 != Fp::invalid());
    if (x2445 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2446 = host_outs.at(0);
        auto x2447 = host_outs.at(1);
        auto x2448 = host_outs.at(2);
        auto x2449 = host_outs.at(3);
        auto x2450 = host_outs.at(4);
        auto x2451 = host_outs.at(5);
        auto x2452 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2446);
          reg = x2446;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2447);
          reg = x2447;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2448);
          reg = x2448;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2449);
          reg = x2449;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2450);
          reg = x2450;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2451);
          reg = x2451;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2452);
          reg = x2452;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2453 = host_outs.at(0);
        auto x2454 = host_outs.at(1);
        auto x2455 = host_outs.at(2);
        auto x2456 = host_outs.at(3);
        auto x2457 = host_outs.at(4);
        auto x2458 = host_outs.at(5);
        auto x2459 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2453);
          reg = x2453;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2454);
          reg = x2454;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2455);
          reg = x2455;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2456);
          reg = x2456;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2457);
          reg = x2457;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2458);
          reg = x2458;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2459);
          reg = x2459;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2460 = host_outs.at(0);
        auto x2461 = host_outs.at(1);
        auto x2462 = host_outs.at(2);
        auto x2463 = host_outs.at(3);
        auto x2464 = host_outs.at(4);
        auto x2465 = host_outs.at(5);
        auto x2466 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2460);
          reg = x2460;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2461);
          reg = x2461;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2462);
          reg = x2462;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2463);
          reg = x2463;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2464);
          reg = x2464;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2465);
          reg = x2465;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][171 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2466);
          reg = x2466;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2467 = host_outs.at(0);
        auto x2468 = host_outs.at(1);
        auto x2469 = host_outs.at(2);
        auto x2470 = host_outs.at(3);
        auto x2471 = host_outs.at(4);
        auto x2472 = host_outs.at(5);
        auto x2473 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][172 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2467);
          reg = x2467;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][173 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2468);
          reg = x2468;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][174 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2469);
          reg = x2469;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][175 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2470);
          reg = x2470;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][176 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2471);
          reg = x2471;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][177 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2472);
          reg = x2472;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][178 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2473);
          reg = x2473;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2474 = host_outs.at(0);
        auto x2475 = host_outs.at(1);
        auto x2476 = host_outs.at(2);
        auto x2477 = host_outs.at(3);
        auto x2478 = host_outs.at(4);
        auto x2479 = host_outs.at(5);
        auto x2480 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2474);
          reg = x2474;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2475);
          reg = x2475;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2476);
          reg = x2476;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2477);
          reg = x2477;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2478);
          reg = x2478;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2479);
          reg = x2479;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2480);
          reg = x2480;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2481 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2482 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x2482 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2483 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x2483 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x2484 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x2484 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2485 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x2485 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2486 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x2486 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2487 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x2487 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2488 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x2488 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2489 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x2489 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2490 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x2490 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2491 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x2491 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2492 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x2492 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2493 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x2493 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2494 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x2494 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2495 = x2482 - x2494;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2496 = (x2495 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2497 = x7 - x2496;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][179 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2497);
          reg = x2497;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2498 = args[2][179 * steps + ((cycle - 0) & mask)];
      assert(x2498 != Fp::invalid());
      if (x2498 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2499 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x2499 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2500 = x6 - x2499;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2500 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2501 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x2501 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2502 = x2501 - x2482;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2503 = x2502 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2504 = Fp(x2503.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2504);
            reg = x2504;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2505 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2505 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2506 = x2503 - x2505;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2507 = x2506 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2508 = Fp(x2507.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2508);
            reg = x2508;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2509 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2509 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2510 = x2507 - x2509;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2511 = x2510 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2512 = Fp(x2511.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2512);
            reg = x2512;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2513 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2513 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2514 = x2511 - x2513;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2515 = x2514 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2515);
          reg = x2515;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2516 = x2481 * x2493;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2516 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2517 = x7 - x2498;
      if (x2517 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2518 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x2518 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2519 = x2482 - x2518;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2519 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2520 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x2520 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2521 = x2520 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2522 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x2522 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2523 = x2521 + x2522;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2524 = x2483 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2525 = x2523 - x2524;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2526 = x2525 + x2484;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2527 = Fp(x2526.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2527);
            reg = x2527;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2528 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2528 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2529 = x2526 - x2528;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2530 = x2529 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2531 = Fp(x2530.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2531);
            reg = x2531;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2532 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2532 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2533 = x2530 - x2532;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2534 = x2533 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2535 = Fp(x2534.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2535);
            reg = x2535;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2536 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2536 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2537 = x2534 - x2536;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2538 = x2537 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2538);
          reg = x2538;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2539 = x5 - x2522;
        if (x2539 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2540 = x2485 - x2489;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2540 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2541 = x2486 - x2490;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2541 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2542 = x2487 - x2491;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2542 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2543 = x2488 - x2492;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2543 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2544 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x2544 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2545 = x7 - x2544;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2546 = x6 - x2544;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2547 = x2545 * x2546;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2548 = x5 - x2544;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2549 = x2546 * x2548;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2550 = x2545 * x2548;
      if (x2550 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][180 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2547 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][180 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2549 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][180 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2493);
          reg = x2493;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2551 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x2551 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2552 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x2552 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2553 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x2553 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2554 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x2554 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2555 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x2555 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2556 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x2556 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2557 = args[2][180 * steps + ((cycle - 0) & mask)];
      assert(x2557 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2558 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2558 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2559 = x2551 - x2558;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2560 = (x2559 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2561 = x7 - x2560;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][181 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2561);
          reg = x2561;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2562 = args[2][181 * steps + ((cycle - 0) & mask)];
      assert(x2562 != Fp::invalid());
      if (x2562 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2563 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x2563 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2564 = x6 - x2563;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2564 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2565 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2565 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2566 = x2565 - x2551;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2567 = x2566 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2568 = Fp(x2567.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2568);
            reg = x2568;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2569 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x2569 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2570 = x2567 - x2569;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2571 = x2570 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2572 = Fp(x2571.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2572);
            reg = x2572;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2573 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x2573 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2574 = x2571 - x2573;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2575 = x2574 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2576 = Fp(x2575.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2576);
            reg = x2576;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2577 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x2577 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2578 = x2575 - x2577;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2579 = x2578 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2579);
          reg = x2579;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2580 = x2481 * x2557;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2580 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2581 = x7 - x2562;
      if (x2581 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2582 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x2582 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2583 = x2551 - x2582;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2583 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2584 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x2584 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2585 = x2584 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2586 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x2586 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2587 = x2585 + x2586;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2588 = x2552 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2589 = x2587 - x2588;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2590 = x2589 + x2544;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2591 = Fp(x2590.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2591);
            reg = x2591;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2592 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x2592 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2593 = x2590 - x2592;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2594 = x2593 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2595 = Fp(x2594.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2595);
            reg = x2595;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2596 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x2596 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2597 = x2594 - x2596;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2598 = x2597 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2599 = Fp(x2598.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2599);
            reg = x2599;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2600 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x2600 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2601 = x2598 - x2600;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2602 = x2601 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2602);
          reg = x2602;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2603 = x5 - x2586;
        if (x2603 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2604 = x2489 - x2553;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2604 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2605 = x2490 - x2554;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2605 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2606 = x2491 - x2555;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2606 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2607 = x2492 - x2556;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2607 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2608 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x2608 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2609 = x7 - x2608;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2610 = x6 - x2608;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2611 = x2609 * x2610;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2612 = x5 - x2608;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2613 = x2610 * x2612;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2614 = x2609 * x2612;
      if (x2614 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][182 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2611 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][182 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2613 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][182 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2557);
          reg = x2557;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2615 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x2615 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2616 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x2616 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2617 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x2617 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2618 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x2618 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2619 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x2619 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2620 = args[2][171 * steps + ((cycle - 0) & mask)];
      assert(x2620 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2621 = args[2][182 * steps + ((cycle - 0) & mask)];
      assert(x2621 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2622 = args[2][165 * steps + ((cycle - 0) & mask)];
        assert(x2622 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2623 = x2615 - x2622;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2624 = (x2623 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2625 = x7 - x2624;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][183 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2625);
          reg = x2625;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2626 = args[2][183 * steps + ((cycle - 0) & mask)];
      assert(x2626 != Fp::invalid());
      if (x2626 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2627 = args[2][167 * steps + ((cycle - 0) & mask)];
        assert(x2627 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2628 = x6 - x2627;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2628 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2629 = args[2][165 * steps + ((cycle - 0) & mask)];
        assert(x2629 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2630 = x2629 - x2615;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2631 = x2630 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2632 = Fp(x2631.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2632);
            reg = x2632;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2633 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2633 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2634 = x2631 - x2633;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2635 = x2634 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2636 = Fp(x2635.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2636);
            reg = x2636;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2637 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2637 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2638 = x2635 - x2637;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2639 = x2638 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2640 = Fp(x2639.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2640);
            reg = x2640;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2641 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2641 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2642 = x2639 - x2641;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2643 = x2642 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2643);
          reg = x2643;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2644 = x2481 * x2621;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2644 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2645 = x7 - x2626;
      if (x2645 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2646 = args[2][165 * steps + ((cycle - 0) & mask)];
        assert(x2646 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2647 = x2615 - x2646;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2647 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2648 = args[2][166 * steps + ((cycle - 0) & mask)];
        assert(x2648 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2649 = x2648 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2650 = args[2][167 * steps + ((cycle - 0) & mask)];
        assert(x2650 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2651 = x2649 + x2650;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2652 = x2616 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2653 = x2651 - x2652;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2654 = x2653 + x2608;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2655 = Fp(x2654.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2655);
            reg = x2655;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2656 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2656 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2657 = x2654 - x2656;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2658 = x2657 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2659 = Fp(x2658.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2659);
            reg = x2659;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2660 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2660 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2661 = x2658 - x2660;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2662 = x2661 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2663 = Fp(x2662.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2663);
            reg = x2663;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2664 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2664 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2665 = x2662 - x2664;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2666 = x2665 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2666);
          reg = x2666;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2667 = x5 - x2650;
        if (x2667 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2668 = x2553 - x2617;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2668 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2669 = x2554 - x2618;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2669 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2670 = x2555 - x2619;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2670 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2671 = x2556 - x2620;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2671 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2672 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x2672 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2673 = x7 - x2672;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2674 = x6 - x2672;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2675 = x2673 * x2674;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2676 = x5 - x2672;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2677 = x2674 * x2676;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2678 = x2673 * x2676;
      if (x2678 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][184 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2675 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][184 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2677 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][184 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2621);
          reg = x2621;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2679 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x2679 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2680 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x2680 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2681 = args[2][175 * steps + ((cycle - 0) & mask)];
      assert(x2681 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2682 = args[2][176 * steps + ((cycle - 0) & mask)];
      assert(x2682 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2683 = args[2][177 * steps + ((cycle - 0) & mask)];
      assert(x2683 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2684 = args[2][178 * steps + ((cycle - 0) & mask)];
      assert(x2684 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2685 = args[2][184 * steps + ((cycle - 0) & mask)];
      assert(x2685 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2686 = args[2][172 * steps + ((cycle - 0) & mask)];
        assert(x2686 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2687 = x2679 - x2686;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2688 = (x2687 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2689 = x7 - x2688;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][185 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2689);
          reg = x2689;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2690 = args[2][185 * steps + ((cycle - 0) & mask)];
      assert(x2690 != Fp::invalid());
      if (x2690 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2691 = args[2][174 * steps + ((cycle - 0) & mask)];
        assert(x2691 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2692 = x6 - x2691;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2692 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2693 = args[2][172 * steps + ((cycle - 0) & mask)];
        assert(x2693 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2694 = x2693 - x2679;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2695 = x2694 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2696 = Fp(x2695.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][18 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2696);
            reg = x2696;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2697 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x2697 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2698 = x2695 - x2697;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2699 = x2698 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2700 = Fp(x2699.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][19 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2700);
            reg = x2700;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2701 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x2701 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2702 = x2699 - x2701;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2703 = x2702 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2704 = Fp(x2703.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][20 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2704);
            reg = x2704;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2705 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x2705 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2706 = x2703 - x2705;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2707 = x2706 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][75 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2707);
          reg = x2707;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2708 = x2481 * x2685;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2708 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2709 = x7 - x2690;
      if (x2709 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2710 = args[2][172 * steps + ((cycle - 0) & mask)];
        assert(x2710 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2711 = x2679 - x2710;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2711 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2712 = args[2][173 * steps + ((cycle - 0) & mask)];
        assert(x2712 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2713 = x2712 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2714 = args[2][174 * steps + ((cycle - 0) & mask)];
        assert(x2714 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2715 = x2713 + x2714;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2716 = x2680 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2717 = x2715 - x2716;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2718 = x2717 + x2672;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2719 = Fp(x2718.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][18 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2719);
            reg = x2719;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2720 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x2720 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2721 = x2718 - x2720;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2722 = x2721 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2723 = Fp(x2722.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][19 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2723);
            reg = x2723;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2724 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x2724 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2725 = x2722 - x2724;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2726 = x2725 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2727 = Fp(x2726.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][20 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2727);
            reg = x2727;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2728 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x2728 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2729 = x2726 - x2728;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2730 = x2729 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][75 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2730);
          reg = x2730;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2731 = x5 - x2714;
        if (x2731 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2732 = x2617 - x2681;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2732 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2733 = x2618 - x2682;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2733 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2734 = x2619 - x2683;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2734 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2735 = x2620 - x2684;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2735 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2736 = args[2][174 * steps + ((cycle - 0) & mask)];
      assert(x2736 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2737 = x7 - x2736;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2738 = x6 - x2736;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2739 = x2737 * x2738;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2740 = x5 - x2736;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2741 = x2738 * x2740;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2742 = x2737 * x2740;
      if (x2742 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][186 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2739 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][186 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2741 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][186 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2685);
          reg = x2685;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2743 = args[2][172 * steps + ((cycle - 0) & mask)];
      assert(x2743 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2744 = args[2][173 * steps + ((cycle - 0) & mask)];
      assert(x2744 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2745 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x2745 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2746 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x2746 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2747 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x2747 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2748 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x2748 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/8(ECallCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2749 = args[2][186 * steps + ((cycle - 0) & mask)];
      assert(x2749 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2750 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2750 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2751 = x2743 - x2750;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2752 = (x2751 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2753 = x7 - x2752;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2753);
          reg = x2753;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2754 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x2754 != Fp::invalid());
      if (x2754 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2755 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2755 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2756 = x6 - x2755;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2756 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2757 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2757 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2758 = x2757 - x2743;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2759 = x2758 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2760 = Fp(x2759.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2760);
            reg = x2760;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2761 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2761 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2762 = x2759 - x2761;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2763 = x2762 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2764 = Fp(x2763.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2764);
            reg = x2764;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2765 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2765 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2766 = x2763 - x2765;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2767 = x2766 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2768 = Fp(x2767.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2768);
            reg = x2768;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2769 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2769 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2770 = x2767 - x2769;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2771 = x2770 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2771);
          reg = x2771;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2772 = x2481 * x2749;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2772 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2773 = x7 - x2754;
      if (x2773 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2774 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2774 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2775 = x2743 - x2774;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2775 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2776 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x2776 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2777 = x2776 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2778 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2778 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2779 = x2777 + x2778;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2780 = x2744 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2781 = x2779 - x2780;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2782 = x2781 + x2736;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2783 = Fp(x2782.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2783);
            reg = x2783;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2784 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2784 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2785 = x2782 - x2784;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2786 = x2785 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2787 = Fp(x2786.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2787);
            reg = x2787;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2788 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2788 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2789 = x2786 - x2788;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2790 = x2789 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2791 = Fp(x2790.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2791);
            reg = x2791;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2792 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2792 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2793 = x2790 - x2792;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2794 = x2793 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2794);
          reg = x2794;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2795 = x5 - x2778;
        if (x2795 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2796 = x2681 - x2745;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2796 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2797 = x2682 - x2746;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2797 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2798 = x2683 - x2747;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2798 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2799 = x2684 - x2748;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2799 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2800 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x2800 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2801 = x7 - x2800;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2802 = x6 - x2800;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2803 = x2801 * x2802;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2804 = x5 - x2800;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2805 = x2802 * x2804;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2806 = x2801 * x2804;
      if (x2806 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2803 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2805 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2749);
          reg = x2749;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x2807 = args[2][109 * steps + ((cycle - 0) & mask)];
    assert(x2807 != Fp::invalid());
    if (x2807 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2808 = host_outs.at(0);
        auto x2809 = host_outs.at(1);
        auto x2810 = host_outs.at(2);
        auto x2811 = host_outs.at(3);
        auto x2812 = host_outs.at(4);
        auto x2813 = host_outs.at(5);
        auto x2814 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][130 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2808);
          reg = x2808;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][131 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2809);
          reg = x2809;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][132 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2810);
          reg = x2810;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][133 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2811);
          reg = x2811;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][134 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2812);
          reg = x2812;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][135 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2813);
          reg = x2813;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][136 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2814);
          reg = x2814;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2815 = host_outs.at(0);
        auto x2816 = host_outs.at(1);
        auto x2817 = host_outs.at(2);
        auto x2818 = host_outs.at(3);
        auto x2819 = host_outs.at(4);
        auto x2820 = host_outs.at(5);
        auto x2821 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2815);
          reg = x2815;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2816);
          reg = x2816;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2817);
          reg = x2817;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2818);
          reg = x2818;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2819);
          reg = x2819;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2820);
          reg = x2820;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2821);
          reg = x2821;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2822 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2823 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x2823 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2824 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x2824 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x2825 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x2825 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2826 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x2826 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2827 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x2827 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2828 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x2828 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2829 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x2829 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2830 = args[2][133 * steps + ((cycle - 0) & mask)];
      assert(x2830 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2831 = args[2][134 * steps + ((cycle - 0) & mask)];
      assert(x2831 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2832 = args[2][135 * steps + ((cycle - 0) & mask)];
      assert(x2832 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2833 = args[2][136 * steps + ((cycle - 0) & mask)];
      assert(x2833 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2834 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x2834 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2835 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x2835 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2836 = x2823 - x2835;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2837 = (x2836 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2838 = x7 - x2837;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][137 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2838);
          reg = x2838;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2839 = args[2][137 * steps + ((cycle - 0) & mask)];
      assert(x2839 != Fp::invalid());
      if (x2839 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2840 = args[2][132 * steps + ((cycle - 0) & mask)];
        assert(x2840 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2841 = x6 - x2840;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2841 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2842 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x2842 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2843 = x2842 - x2823;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2844 = x2843 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2845 = Fp(x2844.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2845);
            reg = x2845;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2846 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2846 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2847 = x2844 - x2846;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2848 = x2847 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2849 = Fp(x2848.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2849);
            reg = x2849;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2850 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2850 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2851 = x2848 - x2850;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2852 = x2851 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2853 = Fp(x2852.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2853);
            reg = x2853;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2854 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2854 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2855 = x2852 - x2854;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2856 = x2855 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2856);
          reg = x2856;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2857 = x2822 * x2834;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2857 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2858 = x7 - x2839;
      if (x2858 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2859 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x2859 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2860 = x2823 - x2859;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2860 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2861 = args[2][131 * steps + ((cycle - 0) & mask)];
        assert(x2861 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2862 = x2861 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2863 = args[2][132 * steps + ((cycle - 0) & mask)];
        assert(x2863 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2864 = x2862 + x2863;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2865 = x2824 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2866 = x2864 - x2865;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2867 = x2866 + x2825;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2868 = Fp(x2867.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2868);
            reg = x2868;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2869 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2869 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2870 = x2867 - x2869;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2871 = x2870 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2872 = Fp(x2871.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2872);
            reg = x2872;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2873 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2873 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2874 = x2871 - x2873;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2875 = x2874 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2876 = Fp(x2875.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2876);
            reg = x2876;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2877 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2877 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2878 = x2875 - x2877;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2879 = x2878 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2879);
          reg = x2879;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2880 = x5 - x2863;
        if (x2880 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2881 = x2826 - x2830;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2881 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2882 = x2827 - x2831;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2882 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2883 = x2828 - x2832;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2883 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2884 = x2829 - x2833;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2884 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2885 = args[2][132 * steps + ((cycle - 0) & mask)];
      assert(x2885 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2886 = x7 - x2885;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2887 = x6 - x2885;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2888 = x2886 * x2887;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2889 = x5 - x2885;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2890 = x2887 * x2889;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2891 = x2886 * x2889;
      if (x2891 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2888 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2890 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2834);
          reg = x2834;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2892 = args[2][130 * steps + ((cycle - 0) & mask)];
      assert(x2892 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2893 = args[2][131 * steps + ((cycle - 0) & mask)];
      assert(x2893 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2894 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x2894 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2895 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x2895 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2896 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x2896 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2897 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x2897 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/9(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2898 = args[2][138 * steps + ((cycle - 0) & mask)];
      assert(x2898 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2899 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2899 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2900 = x2892 - x2899;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2901 = (x2900 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2902 = x7 - x2901;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2902);
          reg = x2902;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2903 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x2903 != Fp::invalid());
      if (x2903 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2904 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2904 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2905 = x6 - x2904;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2905 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2906 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2906 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2907 = x2906 - x2892;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2908 = x2907 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2909 = Fp(x2908.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2909);
            reg = x2909;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2910 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2910 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2911 = x2908 - x2910;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2912 = x2911 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2913 = Fp(x2912.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2913);
            reg = x2913;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2914 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2914 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2915 = x2912 - x2914;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2916 = x2915 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2917 = Fp(x2916.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2917);
            reg = x2917;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2918 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2918 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2919 = x2916 - x2918;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2920 = x2919 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2920);
          reg = x2920;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x2921 = x2822 * x2898;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x2921 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x2922 = x7 - x2903;
      if (x2922 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2923 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x2923 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x2924 = x2892 - x2923;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x2924 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2925 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x2925 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2926 = x2925 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2927 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x2927 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2928 = x2926 + x2927;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x2929 = x2893 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2930 = x2928 - x2929;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x2931 = x2930 + x2885;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2932 = Fp(x2931.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2932);
            reg = x2932;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2933 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2933 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2934 = x2931 - x2933;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2935 = x2934 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2936 = Fp(x2935.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2936);
            reg = x2936;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2937 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2937 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2938 = x2935 - x2937;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2939 = x2938 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2940 = Fp(x2939.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2940);
            reg = x2940;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2941 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x2941 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2942 = x2939 - x2941;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2943 = x2942 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2943);
          reg = x2943;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x2944 = x5 - x2927;
        if (x2944 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2945 = x2830 - x2894;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2945 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2946 = x2831 - x2895;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2946 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2947 = x2832 - x2896;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2947 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x2948 = x2833 - x2897;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x2948 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x2949 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x2949 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x2950 = x7 - x2949;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x2951 = x6 - x2949;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x2952 = x2950 * x2951;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x2953 = x5 - x2949;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x2954 = x2951 * x2953;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x2955 = x2950 * x2953;
      if (x2955 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x2952 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x2954 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2898);
          reg = x2898;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x2956 = args[2][110 * steps + ((cycle - 0) & mask)];
    assert(x2956 != Fp::invalid());
    if (x2956 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2957 = host_outs.at(0);
        auto x2958 = host_outs.at(1);
        auto x2959 = host_outs.at(2);
        auto x2960 = host_outs.at(3);
        auto x2961 = host_outs.at(4);
        auto x2962 = host_outs.at(5);
        auto x2963 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][130 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2957);
          reg = x2957;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][131 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2958);
          reg = x2958;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][132 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2959);
          reg = x2959;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][133 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2960);
          reg = x2960;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][134 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2961);
          reg = x2961;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][135 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2962);
          reg = x2962;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][136 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2963);
          reg = x2963;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x2964 = host_outs.at(0);
        auto x2965 = host_outs.at(1);
        auto x2966 = host_outs.at(2);
        auto x2967 = host_outs.at(3);
        auto x2968 = host_outs.at(4);
        auto x2969 = host_outs.at(5);
        auto x2970 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2964);
          reg = x2964;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2965);
          reg = x2965;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2966);
          reg = x2966;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2967);
          reg = x2967;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2968);
          reg = x2968;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2969);
          reg = x2969;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2970);
          reg = x2970;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2971 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x2972 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x2972 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x2973 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x2973 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x2974 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x2974 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2975 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x2975 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2976 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x2976 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2977 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x2977 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2978 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x2978 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2979 = args[2][133 * steps + ((cycle - 0) & mask)];
      assert(x2979 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2980 = args[2][134 * steps + ((cycle - 0) & mask)];
      assert(x2980 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2981 = args[2][135 * steps + ((cycle - 0) & mask)];
      assert(x2981 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2982 = args[2][136 * steps + ((cycle - 0) & mask)];
      assert(x2982 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x2983 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x2983 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2984 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x2984 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2985 = x2972 - x2984;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x2986 = (x2985 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x2987 = x7 - x2986;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][137 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2987);
          reg = x2987;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x2988 = args[2][137 * steps + ((cycle - 0) & mask)];
      assert(x2988 != Fp::invalid());
      if (x2988 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2989 = args[2][132 * steps + ((cycle - 0) & mask)];
        assert(x2989 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x2990 = x6 - x2989;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x2990 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x2991 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x2991 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2992 = x2991 - x2972;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x2993 = x2992 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2994 = Fp(x2993.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2994);
            reg = x2994;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2995 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x2995 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x2996 = x2993 - x2995;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x2997 = x2996 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x2998 = Fp(x2997.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x2998);
            reg = x2998;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x2999 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x2999 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3000 = x2997 - x2999;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3001 = x3000 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3002 = Fp(x3001.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3002);
            reg = x3002;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3003 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3003 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3004 = x3001 - x3003;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3005 = x3004 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3005);
          reg = x3005;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3006 = x2971 * x2983;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3006 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3007 = x7 - x2988;
      if (x3007 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3008 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x3008 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3009 = x2972 - x3008;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3009 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3010 = args[2][131 * steps + ((cycle - 0) & mask)];
        assert(x3010 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3011 = x3010 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3012 = args[2][132 * steps + ((cycle - 0) & mask)];
        assert(x3012 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3013 = x3011 + x3012;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3014 = x2973 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3015 = x3013 - x3014;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3016 = x3015 + x2974;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3017 = Fp(x3016.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3017);
            reg = x3017;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3018 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3018 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3019 = x3016 - x3018;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3020 = x3019 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3021 = Fp(x3020.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3021);
            reg = x3021;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3022 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3022 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3023 = x3020 - x3022;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3024 = x3023 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3025 = Fp(x3024.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3025);
            reg = x3025;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3026 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3026 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3027 = x3024 - x3026;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3028 = x3027 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3028);
          reg = x3028;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3029 = x5 - x3012;
        if (x3029 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3030 = x2975 - x2979;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3030 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3031 = x2976 - x2980;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3031 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3032 = x2977 - x2981;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3032 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3033 = x2978 - x2982;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3033 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3034 = args[2][132 * steps + ((cycle - 0) & mask)];
      assert(x3034 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3035 = x7 - x3034;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3036 = x6 - x3034;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3037 = x3035 * x3036;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3038 = x5 - x3034;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3039 = x3036 * x3038;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3040 = x3035 * x3038;
      if (x3040 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3037 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3039 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x2983);
          reg = x2983;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3041 = args[2][130 * steps + ((cycle - 0) & mask)];
      assert(x3041 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3042 = args[2][131 * steps + ((cycle - 0) & mask)];
      assert(x3042 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3043 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x3043 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3044 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x3044 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3045 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x3045 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3046 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x3046 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/10(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3047 = args[2][138 * steps + ((cycle - 0) & mask)];
      assert(x3047 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3048 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3048 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3049 = x3041 - x3048;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3050 = (x3049 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3051 = x7 - x3050;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3051);
          reg = x3051;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3052 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x3052 != Fp::invalid());
      if (x3052 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3053 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3053 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3054 = x6 - x3053;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3054 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3055 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3055 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3056 = x3055 - x3041;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3057 = x3056 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3058 = Fp(x3057.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3058);
            reg = x3058;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3059 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3059 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3060 = x3057 - x3059;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3061 = x3060 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3062 = Fp(x3061.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3062);
            reg = x3062;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3063 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3063 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3064 = x3061 - x3063;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3065 = x3064 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3066 = Fp(x3065.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3066);
            reg = x3066;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3067 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3067 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3068 = x3065 - x3067;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3069 = x3068 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3069);
          reg = x3069;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3070 = x2971 * x3047;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3070 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3071 = x7 - x3052;
      if (x3071 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3072 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3072 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3073 = x3041 - x3072;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3073 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3074 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x3074 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3075 = x3074 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3076 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3076 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3077 = x3075 + x3076;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3078 = x3042 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3079 = x3077 - x3078;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3080 = x3079 + x3034;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3081 = Fp(x3080.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3081);
            reg = x3081;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3082 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3082 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3083 = x3080 - x3082;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3084 = x3083 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3085 = Fp(x3084.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3085);
            reg = x3085;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3086 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3086 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3087 = x3084 - x3086;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3088 = x3087 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3089 = Fp(x3088.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3089);
            reg = x3089;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3090 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3090 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3091 = x3088 - x3090;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3092 = x3091 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3092);
          reg = x3092;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3093 = x5 - x3076;
        if (x3093 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3094 = x2979 - x3043;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3094 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3095 = x2980 - x3044;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3095 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3096 = x2981 - x3045;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3096 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3097 = x2982 - x3046;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3097 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3098 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x3098 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3099 = x7 - x3098;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3100 = x6 - x3098;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3101 = x3099 * x3100;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3102 = x5 - x3098;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3103 = x3100 * x3102;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3104 = x3099 * x3102;
      if (x3104 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3101 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3103 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3047);
          reg = x3047;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x3105 = args[2][111 * steps + ((cycle - 0) & mask)];
    assert(x3105 != Fp::invalid());
    if (x3105 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3106 = host_outs.at(0);
        auto x3107 = host_outs.at(1);
        auto x3108 = host_outs.at(2);
        auto x3109 = host_outs.at(3);
        auto x3110 = host_outs.at(4);
        auto x3111 = host_outs.at(5);
        auto x3112 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][130 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3106);
          reg = x3106;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][131 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3107);
          reg = x3107;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][132 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3108);
          reg = x3108;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][133 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3109);
          reg = x3109;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][134 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3110);
          reg = x3110;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][135 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3111);
          reg = x3111;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][136 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3112);
          reg = x3112;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3113 = host_outs.at(0);
        auto x3114 = host_outs.at(1);
        auto x3115 = host_outs.at(2);
        auto x3116 = host_outs.at(3);
        auto x3117 = host_outs.at(4);
        auto x3118 = host_outs.at(5);
        auto x3119 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3113);
          reg = x3113;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3114);
          reg = x3114;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3115);
          reg = x3115;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3116);
          reg = x3116;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3117);
          reg = x3117;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3118);
          reg = x3118;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3119);
          reg = x3119;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3120 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3121 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x3121 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3122 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x3122 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x3123 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x3123 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3124 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x3124 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3125 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x3125 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3126 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x3126 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3127 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x3127 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3128 = args[2][133 * steps + ((cycle - 0) & mask)];
      assert(x3128 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3129 = args[2][134 * steps + ((cycle - 0) & mask)];
      assert(x3129 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3130 = args[2][135 * steps + ((cycle - 0) & mask)];
      assert(x3130 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3131 = args[2][136 * steps + ((cycle - 0) & mask)];
      assert(x3131 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3132 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x3132 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3133 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x3133 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3134 = x3121 - x3133;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3135 = (x3134 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3136 = x7 - x3135;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][137 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3136);
          reg = x3136;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3137 = args[2][137 * steps + ((cycle - 0) & mask)];
      assert(x3137 != Fp::invalid());
      if (x3137 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3138 = args[2][132 * steps + ((cycle - 0) & mask)];
        assert(x3138 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3139 = x6 - x3138;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3139 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3140 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x3140 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3141 = x3140 - x3121;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3142 = x3141 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3143 = Fp(x3142.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3143);
            reg = x3143;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3144 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3144 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3145 = x3142 - x3144;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3146 = x3145 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3147 = Fp(x3146.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3147);
            reg = x3147;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3148 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3148 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3149 = x3146 - x3148;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3150 = x3149 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3151 = Fp(x3150.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3151);
            reg = x3151;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3152 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3152 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3153 = x3150 - x3152;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3154 = x3153 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3154);
          reg = x3154;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3155 = x3120 * x3132;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3155 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3156 = x7 - x3137;
      if (x3156 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3157 = args[2][130 * steps + ((cycle - 0) & mask)];
        assert(x3157 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3158 = x3121 - x3157;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3158 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3159 = args[2][131 * steps + ((cycle - 0) & mask)];
        assert(x3159 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3160 = x3159 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3161 = args[2][132 * steps + ((cycle - 0) & mask)];
        assert(x3161 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3162 = x3160 + x3161;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3163 = x3122 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3164 = x3162 - x3163;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3165 = x3164 + x3123;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3166 = Fp(x3165.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3166);
            reg = x3166;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3167 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3167 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3168 = x3165 - x3167;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3169 = x3168 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3170 = Fp(x3169.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3170);
            reg = x3170;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3171 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3171 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3172 = x3169 - x3171;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3173 = x3172 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3174 = Fp(x3173.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3174);
            reg = x3174;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3175 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3175 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3176 = x3173 - x3175;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3177 = x3176 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3177);
          reg = x3177;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3178 = x5 - x3161;
        if (x3178 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3179 = x3124 - x3128;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3179 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3180 = x3125 - x3129;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3180 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3181 = x3126 - x3130;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3181 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3182 = x3127 - x3131;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3182 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3183 = args[2][132 * steps + ((cycle - 0) & mask)];
      assert(x3183 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3184 = x7 - x3183;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3185 = x6 - x3183;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3186 = x3184 * x3185;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3187 = x5 - x3183;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3188 = x3185 * x3187;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3189 = x3184 * x3187;
      if (x3189 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3186 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3188 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][138 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3132);
          reg = x3132;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3190 = args[2][130 * steps + ((cycle - 0) & mask)];
      assert(x3190 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3191 = args[2][131 * steps + ((cycle - 0) & mask)];
      assert(x3191 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3192 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x3192 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3193 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x3193 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3194 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x3194 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3195 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x3195 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/11(ShaWrap)/ShaCycle/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3196 = args[2][138 * steps + ((cycle - 0) & mask)];
      assert(x3196 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3197 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3197 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3198 = x3190 - x3197;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3199 = (x3198 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3200 = x7 - x3199;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3200);
          reg = x3200;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3201 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x3201 != Fp::invalid());
      if (x3201 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3202 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3202 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3203 = x6 - x3202;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3203 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3204 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3204 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3205 = x3204 - x3190;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3206 = x3205 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3207 = Fp(x3206.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3207);
            reg = x3207;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3208 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3208 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3209 = x3206 - x3208;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3210 = x3209 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3211 = Fp(x3210.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3211);
            reg = x3211;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3212 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3212 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3213 = x3210 - x3212;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3214 = x3213 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3215 = Fp(x3214.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3215);
            reg = x3215;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3216 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3216 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3217 = x3214 - x3216;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3218 = x3217 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3218);
          reg = x3218;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3219 = x3120 * x3196;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3219 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3220 = x7 - x3201;
      if (x3220 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3221 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3221 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3222 = x3190 - x3221;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3222 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3223 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x3223 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3224 = x3223 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3225 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3225 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3226 = x3224 + x3225;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3227 = x3191 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3228 = x3226 - x3227;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3229 = x3228 + x3183;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3230 = Fp(x3229.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3230);
            reg = x3230;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3231 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3231 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3232 = x3229 - x3231;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3233 = x3232 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3234 = Fp(x3233.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3234);
            reg = x3234;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3235 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3235 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3236 = x3233 - x3235;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3237 = x3236 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3238 = Fp(x3237.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3238);
            reg = x3238;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3239 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3239 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3240 = x3237 - x3239;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3241 = x3240 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3241);
          reg = x3241;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3242 = x5 - x3225;
        if (x3242 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3243 = x3128 - x3192;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3243 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3244 = x3129 - x3193;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3244 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3245 = x3130 - x3194;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3245 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3246 = x3131 - x3195;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3246 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3247 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x3247 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3248 = x7 - x3247;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3249 = x6 - x3247;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3250 = x3248 * x3249;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3251 = x5 - x3247;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3252 = x3249 * x3251;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3253 = x3248 * x3251;
      if (x3253 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3250 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3252 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3196);
          reg = x3196;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x3254 = args[2][112 * steps + ((cycle - 0) & mask)];
    assert(x3254 != Fp::invalid());
    if (x3254 != 0) {
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3255 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x3255 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3256 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x3256 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3257 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x3257 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3258 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x3258 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3259 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x3259 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3260 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x3260 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3261 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x3261 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3255);
        reg = x3255;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3256);
        reg = x3256;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3257);
        reg = x3257;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3258);
        reg = x3258;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3259);
        reg = x3259;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3260);
        reg = x3260;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3261);
        reg = x3261;
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3262 = args[2][96 * steps + ((cycle - 1) & mask)];
      assert(x3262 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3263 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x3263 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x3264 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x3264 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x3265 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x3265 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x3266 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x3266 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Twit/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3267 = args[2][69 * steps + ((cycle - 1) & mask)];
      assert(x3267 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":128:3)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3262);
        reg = x3262;
      }
      // loc("zirgen/components/ram.cpp":129:3)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3263);
        reg = x3263;
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3268 = Fp(x3264.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3268);
          reg = x3268;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3269 = Fp(x3265.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3269);
          reg = x3269;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3270 = Fp(x3266.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3270);
          reg = x3270;
        }
      }
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3267);
        reg = x3267;
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x3271 = args[2][113 * steps + ((cycle - 0) & mask)];
    assert(x3271 != Fp::invalid());
    if (x3271 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3272 = host_outs.at(0);
        auto x3273 = host_outs.at(1);
        auto x3274 = host_outs.at(2);
        auto x3275 = host_outs.at(3);
        auto x3276 = host_outs.at(4);
        auto x3277 = host_outs.at(5);
        auto x3278 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3272);
          reg = x3272;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3273);
          reg = x3273;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3274);
          reg = x3274;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3275);
          reg = x3275;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3276);
          reg = x3276;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3277);
          reg = x3277;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3278);
          reg = x3278;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3279 = host_outs.at(0);
        auto x3280 = host_outs.at(1);
        auto x3281 = host_outs.at(2);
        auto x3282 = host_outs.at(3);
        auto x3283 = host_outs.at(4);
        auto x3284 = host_outs.at(5);
        auto x3285 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3279);
          reg = x3279;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3280);
          reg = x3280;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3281);
          reg = x3281;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3282);
          reg = x3282;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3283);
          reg = x3283;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3284);
          reg = x3284;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3285);
          reg = x3285;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3286 = host_outs.at(0);
        auto x3287 = host_outs.at(1);
        auto x3288 = host_outs.at(2);
        auto x3289 = host_outs.at(3);
        auto x3290 = host_outs.at(4);
        auto x3291 = host_outs.at(5);
        auto x3292 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3286);
          reg = x3286;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3287);
          reg = x3287;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3288);
          reg = x3288;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3289);
          reg = x3289;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3290);
          reg = x3290;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3291);
          reg = x3291;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3292);
          reg = x3292;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3293 = host_outs.at(0);
        auto x3294 = host_outs.at(1);
        auto x3295 = host_outs.at(2);
        auto x3296 = host_outs.at(3);
        auto x3297 = host_outs.at(4);
        auto x3298 = host_outs.at(5);
        auto x3299 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3293);
          reg = x3293;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3294);
          reg = x3294;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3295);
          reg = x3295;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3296);
          reg = x3296;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3297);
          reg = x3297;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3298);
          reg = x3298;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3299);
          reg = x3299;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3300 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3301 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x3301 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3302 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x3302 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x3303 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x3303 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3304 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x3304 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3305 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x3305 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3306 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x3306 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3307 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x3307 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3308 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x3308 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3309 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x3309 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3310 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x3310 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3311 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x3311 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3312 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x3312 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3313 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x3313 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3314 = x3301 - x3313;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3315 = (x3314 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3316 = x7 - x3315;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3316);
          reg = x3316;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3317 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x3317 != Fp::invalid());
      if (x3317 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3318 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x3318 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3319 = x6 - x3318;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3319 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3320 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x3320 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3321 = x3320 - x3301;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3322 = x3321 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3323 = Fp(x3322.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3323);
            reg = x3323;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3324 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3324 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3325 = x3322 - x3324;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3326 = x3325 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3327 = Fp(x3326.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3327);
            reg = x3327;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3328 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3328 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3329 = x3326 - x3328;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3330 = x3329 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3331 = Fp(x3330.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3331);
            reg = x3331;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3332 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3332 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3333 = x3330 - x3332;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3334 = x3333 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3334);
          reg = x3334;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3335 = x3300 * x3312;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3335 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3336 = x7 - x3317;
      if (x3336 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3337 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x3337 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3338 = x3301 - x3337;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3338 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3339 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x3339 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3340 = x3339 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3341 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x3341 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3342 = x3340 + x3341;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3343 = x3302 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3344 = x3342 - x3343;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3345 = x3344 + x3303;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3346 = Fp(x3345.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3346);
            reg = x3346;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3347 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3347 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3348 = x3345 - x3347;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3349 = x3348 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3350 = Fp(x3349.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3350);
            reg = x3350;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3351 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3351 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3352 = x3349 - x3351;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3353 = x3352 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3354 = Fp(x3353.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3354);
            reg = x3354;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3355 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3355 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3356 = x3353 - x3355;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3357 = x3356 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3357);
          reg = x3357;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3358 = x5 - x3341;
        if (x3358 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3359 = x3304 - x3308;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3359 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3360 = x3305 - x3309;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3360 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3361 = x3306 - x3310;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3361 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3362 = x3307 - x3311;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3362 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3363 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x3363 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3364 = x7 - x3363;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3365 = x6 - x3363;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3366 = x3364 * x3365;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3367 = x5 - x3363;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3368 = x3365 * x3367;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3369 = x3364 * x3367;
      if (x3369 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3366 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3368 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3312);
          reg = x3312;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3370 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x3370 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3371 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x3371 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3372 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x3372 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3373 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x3373 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3374 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x3374 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3375 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x3375 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3376 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x3376 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3377 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x3377 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3378 = x3370 - x3377;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3379 = (x3378 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3380 = x7 - x3379;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3380);
          reg = x3380;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3381 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x3381 != Fp::invalid());
      if (x3381 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3382 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x3382 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3383 = x6 - x3382;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3383 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3384 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x3384 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3385 = x3384 - x3370;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3386 = x3385 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3387 = Fp(x3386.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3387);
            reg = x3387;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3388 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x3388 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3389 = x3386 - x3388;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3390 = x3389 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3391 = Fp(x3390.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3391);
            reg = x3391;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3392 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x3392 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3393 = x3390 - x3392;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3394 = x3393 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3395 = Fp(x3394.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3395);
            reg = x3395;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3396 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x3396 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3397 = x3394 - x3396;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3398 = x3397 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3398);
          reg = x3398;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3399 = x3300 * x3376;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3399 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3400 = x7 - x3381;
      if (x3400 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3401 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x3401 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3402 = x3370 - x3401;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3402 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3403 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x3403 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3404 = x3403 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3405 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x3405 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3406 = x3404 + x3405;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3407 = x3371 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3408 = x3406 - x3407;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3409 = x3408 + x3363;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3410 = Fp(x3409.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3410);
            reg = x3410;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3411 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x3411 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3412 = x3409 - x3411;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3413 = x3412 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3414 = Fp(x3413.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3414);
            reg = x3414;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3415 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x3415 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3416 = x3413 - x3415;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3417 = x3416 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3418 = Fp(x3417.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3418);
            reg = x3418;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3419 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x3419 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3420 = x3417 - x3419;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3421 = x3420 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3421);
          reg = x3421;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3422 = x5 - x3405;
        if (x3422 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3423 = x3308 - x3372;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3423 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3424 = x3309 - x3373;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3424 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3425 = x3310 - x3374;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3425 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3426 = x3311 - x3375;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3426 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3427 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x3427 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3428 = x7 - x3427;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3429 = x6 - x3427;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3430 = x3428 * x3429;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3431 = x5 - x3427;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3432 = x3429 * x3431;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3433 = x3428 * x3431;
      if (x3433 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3430 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3432 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3376);
          reg = x3376;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3434 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x3434 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3435 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x3435 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3436 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x3436 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3437 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x3437 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3438 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x3438 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3439 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x3439 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3440 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x3440 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3441 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x3441 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3442 = x3434 - x3441;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3443 = (x3442 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3444 = x7 - x3443;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3444);
          reg = x3444;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3445 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x3445 != Fp::invalid());
      if (x3445 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3446 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x3446 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3447 = x6 - x3446;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3447 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3448 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x3448 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3449 = x3448 - x3434;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3450 = x3449 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3451 = Fp(x3450.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3451);
            reg = x3451;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3452 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3452 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3453 = x3450 - x3452;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3454 = x3453 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3455 = Fp(x3454.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3455);
            reg = x3455;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3456 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3456 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3457 = x3454 - x3456;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3458 = x3457 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3459 = Fp(x3458.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3459);
            reg = x3459;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3460 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3460 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3461 = x3458 - x3460;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3462 = x3461 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3462);
          reg = x3462;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3463 = x3300 * x3440;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3463 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3464 = x7 - x3445;
      if (x3464 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3465 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x3465 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3466 = x3434 - x3465;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3466 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3467 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x3467 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3468 = x3467 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3469 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x3469 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3470 = x3468 + x3469;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3471 = x3435 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3472 = x3470 - x3471;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3473 = x3472 + x3427;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3474 = Fp(x3473.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3474);
            reg = x3474;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3475 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3475 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3476 = x3473 - x3475;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3477 = x3476 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3478 = Fp(x3477.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3478);
            reg = x3478;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3479 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3479 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3480 = x3477 - x3479;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3481 = x3480 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3482 = Fp(x3481.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3482);
            reg = x3482;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3483 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3483 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3484 = x3481 - x3483;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3485 = x3484 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3485);
          reg = x3485;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3486 = x5 - x3469;
        if (x3486 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3487 = x3372 - x3436;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3487 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3488 = x3373 - x3437;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3488 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3489 = x3374 - x3438;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3489 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3490 = x3375 - x3439;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3490 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3491 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x3491 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3492 = x7 - x3491;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3493 = x6 - x3491;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3494 = x3492 * x3493;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3495 = x5 - x3491;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3496 = x3493 * x3495;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3497 = x3492 * x3495;
      if (x3497 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3494 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3496 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3440);
          reg = x3440;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3498 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x3498 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3499 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x3499 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3500 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x3500 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3501 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x3501 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3502 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x3502 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3503 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x3503 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/13(ECallCopyInCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3504 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x3504 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3505 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3505 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3506 = x3498 - x3505;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3507 = (x3506 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3508 = x7 - x3507;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3508);
          reg = x3508;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3509 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x3509 != Fp::invalid());
      if (x3509 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3510 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3510 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3511 = x6 - x3510;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3511 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3512 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3512 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3513 = x3512 - x3498;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3514 = x3513 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3515 = Fp(x3514.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3515);
            reg = x3515;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3516 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3516 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3517 = x3514 - x3516;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3518 = x3517 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3519 = Fp(x3518.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3519);
            reg = x3519;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3520 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3520 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3521 = x3518 - x3520;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3522 = x3521 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3523 = Fp(x3522.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3523);
            reg = x3523;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3524 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3524 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3525 = x3522 - x3524;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3526 = x3525 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3526);
          reg = x3526;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3527 = x3300 * x3504;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3527 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3528 = x7 - x3509;
      if (x3528 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3529 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3529 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3530 = x3498 - x3529;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3530 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3531 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x3531 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3532 = x3531 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3533 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3533 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3534 = x3532 + x3533;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3535 = x3499 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3536 = x3534 - x3535;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3537 = x3536 + x3491;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3538 = Fp(x3537.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3538);
            reg = x3538;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3539 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3539 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3540 = x3537 - x3539;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3541 = x3540 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3542 = Fp(x3541.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3542);
            reg = x3542;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3543 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3543 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3544 = x3541 - x3543;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3545 = x3544 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3546 = Fp(x3545.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3546);
            reg = x3546;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3547 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3547 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3548 = x3545 - x3547;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3549 = x3548 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3549);
          reg = x3549;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3550 = x5 - x3533;
        if (x3550 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3551 = x3436 - x3500;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3551 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3552 = x3437 - x3501;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3552 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3553 = x3438 - x3502;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3553 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3554 = x3439 - x3503;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3554 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3555 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x3555 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3556 = x7 - x3555;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3557 = x6 - x3555;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3558 = x3556 * x3557;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3559 = x5 - x3555;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3560 = x3557 * x3559;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3561 = x3556 * x3559;
      if (x3561 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3558 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3560 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3504);
          reg = x3504;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x3562 = args[2][114 * steps + ((cycle - 0) & mask)];
    assert(x3562 != Fp::invalid());
    if (x3562 != 0) {
      {
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3563 = host_outs.at(0);
        auto x3564 = host_outs.at(1);
        auto x3565 = host_outs.at(2);
        auto x3566 = host_outs.at(3);
        auto x3567 = host_outs.at(4);
        auto x3568 = host_outs.at(5);
        auto x3569 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][144 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3563);
          reg = x3563;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][145 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3564);
          reg = x3564;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][146 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3565);
          reg = x3565;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][147 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3566);
          reg = x3566;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][148 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3567);
          reg = x3567;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][149 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3568);
          reg = x3568;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][150 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3569);
          reg = x3569;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3570 = host_outs.at(0);
        auto x3571 = host_outs.at(1);
        auto x3572 = host_outs.at(2);
        auto x3573 = host_outs.at(3);
        auto x3574 = host_outs.at(4);
        auto x3575 = host_outs.at(5);
        auto x3576 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][151 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3570);
          reg = x3570;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][152 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3571);
          reg = x3571;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][153 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3572);
          reg = x3572;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][154 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3573);
          reg = x3573;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][155 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3574);
          reg = x3574;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][156 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3575);
          reg = x3575;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][157 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3576);
          reg = x3576;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3577 = host_outs.at(0);
        auto x3578 = host_outs.at(1);
        auto x3579 = host_outs.at(2);
        auto x3580 = host_outs.at(3);
        auto x3581 = host_outs.at(4);
        auto x3582 = host_outs.at(5);
        auto x3583 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][158 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3577);
          reg = x3577;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][159 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3578);
          reg = x3578;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][160 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3579);
          reg = x3579;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][161 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3580);
          reg = x3580;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][162 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3581);
          reg = x3581;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][163 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3582);
          reg = x3582;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][164 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3583);
          reg = x3583;
        }
        host(ctx, "plonkRead", "ram", host_args.data(), 0, host_outs.data(), 7);
        auto x3584 = host_outs.at(0);
        auto x3585 = host_outs.at(1);
        auto x3586 = host_outs.at(2);
        auto x3587 = host_outs.at(3);
        auto x3588 = host_outs.at(4);
        auto x3589 = host_outs.at(5);
        auto x3590 = host_outs.at(6);
        // loc("zirgen/components/ram.cpp":36:3)
        {
          auto& reg = args[2][89 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3584);
          reg = x3584;
        }
        // loc("zirgen/components/ram.cpp":37:3)
        {
          auto& reg = args[2][90 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3585);
          reg = x3585;
        }
        // loc("zirgen/components/ram.cpp":38:3)
        {
          auto& reg = args[2][91 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3586);
          reg = x3586;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][92 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3587);
          reg = x3587;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][93 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3588);
          reg = x3588;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][94 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3589);
          reg = x3589;
        }
        // loc("zirgen/components/u32.cpp":82:5)
        {
          auto& reg = args[2][95 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3590);
          reg = x3590;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/global(Global)/sys_exit_code(Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3591 = args[1][104];
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3592 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x3592 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3593 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x3593 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
      auto x3594 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x3594 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3595 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x3595 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3596 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x3596 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3597 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x3597 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3598 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x3598 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3599 = args[2][147 * steps + ((cycle - 0) & mask)];
      assert(x3599 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3600 = args[2][148 * steps + ((cycle - 0) & mask)];
      assert(x3600 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3601 = args[2][149 * steps + ((cycle - 0) & mask)];
      assert(x3601 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3602 = args[2][150 * steps + ((cycle - 0) & mask)];
      assert(x3602 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3603 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x3603 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3604 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x3604 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3605 = x3592 - x3604;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3606 = (x3605 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3607 = x7 - x3606;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][165 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3607);
          reg = x3607;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3608 = args[2][165 * steps + ((cycle - 0) & mask)];
      assert(x3608 != Fp::invalid());
      if (x3608 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3609 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x3609 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3610 = x6 - x3609;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3610 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3611 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x3611 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3612 = x3611 - x3592;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3613 = x3612 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3614 = Fp(x3613.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3614);
            reg = x3614;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3615 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3615 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3616 = x3613 - x3615;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3617 = x3616 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3618 = Fp(x3617.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3618);
            reg = x3618;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3619 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3619 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3620 = x3617 - x3619;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3621 = x3620 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3622 = Fp(x3621.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3622);
            reg = x3622;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3623 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3623 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3624 = x3621 - x3623;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3625 = x3624 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3625);
          reg = x3625;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3626 = x3591 * x3603;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3626 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3627 = x7 - x3608;
      if (x3627 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3628 = args[2][144 * steps + ((cycle - 0) & mask)];
        assert(x3628 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3629 = x3592 - x3628;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3629 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3630 = args[2][145 * steps + ((cycle - 0) & mask)];
        assert(x3630 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3631 = x3630 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3632 = args[2][146 * steps + ((cycle - 0) & mask)];
        assert(x3632 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3633 = x3631 + x3632;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3634 = x3593 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3635 = x3633 - x3634;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3636 = x3635 + x3594;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3637 = Fp(x3636.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][9 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3637);
            reg = x3637;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3638 = args[2][9 * steps + ((cycle - 0) & mask)];
        assert(x3638 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3639 = x3636 - x3638;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3640 = x3639 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3641 = Fp(x3640.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][10 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3641);
            reg = x3641;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3642 = args[2][10 * steps + ((cycle - 0) & mask)];
        assert(x3642 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3643 = x3640 - x3642;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3644 = x3643 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3645 = Fp(x3644.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][11 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3645);
            reg = x3645;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3646 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3646 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3647 = x3644 - x3646;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3648 = x3647 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][72 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3648);
          reg = x3648;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3649 = x5 - x3632;
        if (x3649 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3650 = x3595 - x3599;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3650 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3651 = x3596 - x3600;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3651 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3652 = x3597 - x3601;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3652 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3653 = x3598 - x3602;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3653 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3654 = args[2][146 * steps + ((cycle - 0) & mask)];
      assert(x3654 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3655 = x7 - x3654;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3656 = x6 - x3654;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3657 = x3655 * x3656;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3658 = x5 - x3654;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3659 = x3656 * x3658;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3660 = x3655 * x3658;
      if (x3660 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3657 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3659 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][166 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3603);
          reg = x3603;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3661 = args[2][144 * steps + ((cycle - 0) & mask)];
      assert(x3661 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3662 = args[2][145 * steps + ((cycle - 0) & mask)];
      assert(x3662 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3663 = args[2][154 * steps + ((cycle - 0) & mask)];
      assert(x3663 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3664 = args[2][155 * steps + ((cycle - 0) & mask)];
      assert(x3664 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3665 = args[2][156 * steps + ((cycle - 0) & mask)];
      assert(x3665 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3666 = args[2][157 * steps + ((cycle - 0) & mask)];
      assert(x3666 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3667 = args[2][166 * steps + ((cycle - 0) & mask)];
      assert(x3667 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3668 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x3668 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3669 = x3661 - x3668;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3670 = (x3669 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3671 = x7 - x3670;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][167 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3671);
          reg = x3671;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3672 = args[2][167 * steps + ((cycle - 0) & mask)];
      assert(x3672 != Fp::invalid());
      if (x3672 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3673 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x3673 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3674 = x6 - x3673;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3674 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3675 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x3675 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3676 = x3675 - x3661;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3677 = x3676 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3678 = Fp(x3677.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3678);
            reg = x3678;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3679 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x3679 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3680 = x3677 - x3679;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3681 = x3680 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3682 = Fp(x3681.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3682);
            reg = x3682;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3683 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x3683 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3684 = x3681 - x3683;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3685 = x3684 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3686 = Fp(x3685.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3686);
            reg = x3686;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3687 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x3687 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3688 = x3685 - x3687;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3689 = x3688 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3689);
          reg = x3689;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3690 = x3591 * x3667;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3690 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3691 = x7 - x3672;
      if (x3691 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3692 = args[2][151 * steps + ((cycle - 0) & mask)];
        assert(x3692 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3693 = x3661 - x3692;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3693 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3694 = args[2][152 * steps + ((cycle - 0) & mask)];
        assert(x3694 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3695 = x3694 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3696 = args[2][153 * steps + ((cycle - 0) & mask)];
        assert(x3696 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3697 = x3695 + x3696;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3698 = x3662 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3699 = x3697 - x3698;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3700 = x3699 + x3654;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3701 = Fp(x3700.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][12 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3701);
            reg = x3701;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3702 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x3702 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3703 = x3700 - x3702;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3704 = x3703 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3705 = Fp(x3704.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][13 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3705);
            reg = x3705;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3706 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x3706 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3707 = x3704 - x3706;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3708 = x3707 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3709 = Fp(x3708.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][14 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3709);
            reg = x3709;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3710 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x3710 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3711 = x3708 - x3710;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3712 = x3711 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][73 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3712);
          reg = x3712;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3713 = x5 - x3696;
        if (x3713 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3714 = x3599 - x3663;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3714 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3715 = x3600 - x3664;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3715 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3716 = x3601 - x3665;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3716 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3717 = x3602 - x3666;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3717 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3718 = args[2][153 * steps + ((cycle - 0) & mask)];
      assert(x3718 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3719 = x7 - x3718;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3720 = x6 - x3718;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3721 = x3719 * x3720;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3722 = x5 - x3718;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3723 = x3720 * x3722;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3724 = x3719 * x3722;
      if (x3724 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3721 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3723 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][168 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3667);
          reg = x3667;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3725 = args[2][151 * steps + ((cycle - 0) & mask)];
      assert(x3725 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3726 = args[2][152 * steps + ((cycle - 0) & mask)];
      assert(x3726 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3727 = args[2][161 * steps + ((cycle - 0) & mask)];
      assert(x3727 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3728 = args[2][162 * steps + ((cycle - 0) & mask)];
      assert(x3728 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3729 = args[2][163 * steps + ((cycle - 0) & mask)];
      assert(x3729 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3730 = args[2][164 * steps + ((cycle - 0) & mask)];
      assert(x3730 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3731 = args[2][168 * steps + ((cycle - 0) & mask)];
      assert(x3731 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3732 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x3732 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3733 = x3725 - x3732;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3734 = (x3733 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3735 = x7 - x3734;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][169 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3735);
          reg = x3735;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3736 = args[2][169 * steps + ((cycle - 0) & mask)];
      assert(x3736 != Fp::invalid());
      if (x3736 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3737 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x3737 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3738 = x6 - x3737;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3738 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3739 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x3739 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3740 = x3739 - x3725;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3741 = x3740 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3742 = Fp(x3741.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3742);
            reg = x3742;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3743 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3743 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3744 = x3741 - x3743;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3745 = x3744 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3746 = Fp(x3745.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3746);
            reg = x3746;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3747 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3747 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3748 = x3745 - x3747;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3749 = x3748 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3750 = Fp(x3749.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3750);
            reg = x3750;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3751 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3751 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3752 = x3749 - x3751;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3753 = x3752 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3753);
          reg = x3753;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3754 = x3591 * x3731;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3754 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3755 = x7 - x3736;
      if (x3755 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3756 = args[2][158 * steps + ((cycle - 0) & mask)];
        assert(x3756 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3757 = x3725 - x3756;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3757 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3758 = args[2][159 * steps + ((cycle - 0) & mask)];
        assert(x3758 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3759 = x3758 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3760 = args[2][160 * steps + ((cycle - 0) & mask)];
        assert(x3760 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3761 = x3759 + x3760;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3762 = x3726 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3763 = x3761 - x3762;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3764 = x3763 + x3718;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3765 = Fp(x3764.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][15 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3765);
            reg = x3765;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3766 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3766 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3767 = x3764 - x3766;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3768 = x3767 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3769 = Fp(x3768.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][16 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3769);
            reg = x3769;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3770 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3770 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3771 = x3768 - x3770;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3772 = x3771 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3773 = Fp(x3772.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][17 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3773);
            reg = x3773;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3774 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3774 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3775 = x3772 - x3774;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3776 = x3775 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][74 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3776);
          reg = x3776;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3777 = x5 - x3760;
        if (x3777 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3778 = x3663 - x3727;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3778 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3779 = x3664 - x3728;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3779 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3780 = x3665 - x3729;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3780 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3781 = x3666 - x3730;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3781 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3782 = args[2][160 * steps + ((cycle - 0) & mask)];
      assert(x3782 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3783 = x7 - x3782;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3784 = x6 - x3782;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3785 = x3783 * x3784;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3786 = x5 - x3782;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3787 = x3784 * x3786;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3788 = x3783 * x3786;
      if (x3788 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3785 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3787 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][170 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3731);
          reg = x3731;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
      auto x3789 = args[2][158 * steps + ((cycle - 0) & mask)];
      assert(x3789 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
      auto x3790 = args[2][159 * steps + ((cycle - 0) & mask)];
      assert(x3790 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3791 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x3791 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3792 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x3792 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3793 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x3793 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3794 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x3794 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/Mux/14(BigIntCycle)/RamBody/PlonkBody/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
      auto x3795 = args[2][170 * steps + ((cycle - 0) & mask)];
      assert(x3795 != Fp::invalid());
      {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3796 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3796 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3797 = x3789 - x3796;
        // loc("zirgen/components/ram.cpp":75:35)
        auto x3798 = (x3797 == 0) ? Fp(1) : Fp(0);
        // loc("zirgen/components/ram.cpp":75:27)
        auto x3799 = x7 - x3798;
        // loc("zirgen/components/ram.cpp":75:12)
        {
          auto& reg = args[2][96 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3799);
          reg = x3799;
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3800 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x3800 != Fp::invalid());
      if (x3800 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3801 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3801 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":87:9)
        auto x3802 = x6 - x3801;
        // loc("zirgen/components/ram.cpp":87:9)
        if (x3802 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3803 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3803 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3804 = x3803 - x3789;
        // loc("zirgen/components/ram.cpp":89:17)
        auto x3805 = x3804 - x7;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3806 = Fp(x3805.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3806);
            reg = x3806;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3807 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3807 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3808 = x3805 - x3807;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3809 = x3808 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3810 = Fp(x3809.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3810);
            reg = x3810;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3811 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3811 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3812 = x3809 - x3811;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3813 = x3812 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3814 = Fp(x3813.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3814);
            reg = x3814;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3815 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3815 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3816 = x3813 - x3815;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3817 = x3816 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3817);
          reg = x3817;
        }
        // loc("zirgen/components/ram.cpp":91:9)
        auto x3818 = x3591 * x3795;
        // loc("zirgen/components/ram.cpp":91:9)
        if (x3818 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:91");
      }
      // loc("zirgen/components/ram.cpp":95:19)
      auto x3819 = x7 - x3800;
      if (x3819 != 0) {
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3820 = args[2][89 * steps + ((cycle - 0) & mask)];
        assert(x3820 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":97:9)
        auto x3821 = x3789 - x3820;
        // loc("zirgen/components/ram.cpp":97:9)
        if (x3821 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3822 = args[2][90 * steps + ((cycle - 0) & mask)];
        assert(x3822 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3823 = x3822 * x2;
        // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
        auto x3824 = args[2][91 * steps + ((cycle - 0) & mask)];
        assert(x3824 != Fp::invalid());
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3825 = x3823 + x3824;
        // loc("zirgen/components/ram.cpp":99:43)
        auto x3826 = x3790 * x2;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3827 = x3825 - x3826;
        // loc("zirgen/components/ram.cpp":99:17)
        auto x3828 = x3827 + x3782;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3829 = Fp(x3828.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][3 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3829);
            reg = x3829;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3830 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3830 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3831 = x3828 - x3830;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3832 = x3831 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3833 = Fp(x3832.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][4 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3833);
            reg = x3833;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3834 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3834 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3835 = x3832 - x3834;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3836 = x3835 * x3;
        {
          // loc("zirgen/components/bytes.cpp":96:21)
          auto x3837 = Fp(x3836.asUInt32() & x4.asUInt32());
          // loc("zirgen/components/bytes.cpp":96:12)
          {
            auto& reg = args[2][5 * steps + cycle];
            assert(reg == Fp::invalid() || reg == x3837);
            reg = x3837;
          }
        }
        // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
        auto x3838 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x3838 != Fp::invalid());
        // loc("zirgen/components/bytes.cpp":97:11)
        auto x3839 = x3836 - x3838;
        // loc("zirgen/components/bytes.cpp":97:10)
        auto x3840 = x3839 * x3;
        // loc("./zirgen/components/bits.h":68:23)
        {
          auto& reg = args[2][69 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3840);
          reg = x3840;
        }
        // loc("zirgen/components/ram.cpp":101:39)
        auto x3841 = x5 - x3824;
        if (x3841 != 0) {
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3842 = x3727 - x3791;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3842 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3843 = x3728 - x3792;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3843 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3844 = x3729 - x3793;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3844 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
          // loc("zirgen/components/ram.cpp":101:43)
          auto x3845 = x3730 - x3794;
          // loc("zirgen/components/ram.cpp":101:43)
          if (x3845 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        }
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3846 = args[2][91 * steps + ((cycle - 0) & mask)];
      assert(x3846 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":104:18)
      auto x3847 = x7 - x3846;
      // loc("zirgen/components/ram.cpp":104:53)
      auto x3848 = x6 - x3846;
      // loc("zirgen/components/ram.cpp":104:17)
      auto x3849 = x3847 * x3848;
      // loc("zirgen/components/ram.cpp":105:54)
      auto x3850 = x5 - x3846;
      // loc("zirgen/components/ram.cpp":105:16)
      auto x3851 = x3848 * x3850;
      // loc("zirgen/components/ram.cpp":106:18)
      auto x3852 = x3847 * x3850;
      if (x3852 != 0) {
        // loc("zirgen/components/ram.cpp":109:18)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x6);
          reg = x6;
        }
      }
      if (x3849 != 0) {
        // loc("zirgen/components/ram.cpp":110:17)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x7);
          reg = x7;
        }
      }
      if (x3851 != 0) {
        // loc("zirgen/components/ram.cpp":111:16)
        {
          auto& reg = args[2][97 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3795);
          reg = x3795;
        }
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:15)
    auto x3853 = args[2][115 * steps + ((cycle - 0) & mask)];
    assert(x3853 != Fp::invalid());
    if (x3853 != 0) {
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3854 = args[2][89 * steps + ((cycle - 1) & mask)];
      assert(x3854 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3855 = args[2][90 * steps + ((cycle - 1) & mask)];
      assert(x3855 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3856 = args[2][91 * steps + ((cycle - 1) & mask)];
      assert(x3856 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3857 = args[2][92 * steps + ((cycle - 1) & mask)];
      assert(x3857 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3858 = args[2][93 * steps + ((cycle - 1) & mask)];
      assert(x3858 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3859 = args[2][94 * steps + ((cycle - 1) & mask)];
      assert(x3859 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3860 = args[2][95 * steps + ((cycle - 1) & mask)];
      assert(x3860 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":36:3)
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3854);
        reg = x3854;
      }
      // loc("zirgen/components/ram.cpp":37:3)
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3855);
        reg = x3855;
      }
      // loc("zirgen/components/ram.cpp":38:3)
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3856);
        reg = x3856;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3857);
        reg = x3857;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3858);
        reg = x3858;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3859);
        reg = x3859;
      }
      // loc("zirgen/components/u32.cpp":82:5)
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3860);
        reg = x3860;
      }
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3861 = args[2][96 * steps + ((cycle - 1) & mask)];
      assert(x3861 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3862 = args[2][97 * steps + ((cycle - 1) & mask)];
      assert(x3862 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x3863 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x3863 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x3864 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x3864 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":92:10))
      auto x3865 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x3865 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/RamHeader/RamPlonkVerifier/Twit/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3866 = args[2][69 * steps + ((cycle - 1) & mask)];
      assert(x3866 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":128:3)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3861);
        reg = x3861;
      }
      // loc("zirgen/components/ram.cpp":129:3)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3862);
        reg = x3862;
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3867 = Fp(x3863.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3867);
          reg = x3867;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3868 = Fp(x3864.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3868);
          reg = x3868;
        }
      }
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3869 = Fp(x3865.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3869);
          reg = x3869;
        }
      }
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3866);
        reg = x3866;
      }
    }
  }
  if (x12 != 0) {
    // loc("zirgen/components/ram.cpp":22:3)
    {
      auto& reg = args[2][98 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1);
      reg = x1;
    }
    // loc("zirgen/components/ram.cpp":23:3)
    {
      auto& reg = args[2][99 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x0);
      reg = x0;
    }
    // loc("zirgen/components/ram.cpp":24:3)
    {
      auto& reg = args[2][100 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][101 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][102 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][103 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("zirgen/components/u32.cpp":28:5)
    {
      auto& reg = args[2][104 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x6);
      reg = x6;
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":55:40))
    auto x3870 = args[2][89 * steps + ((cycle - 1) & mask)];
    assert(x3870 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":56:42))
    auto x3871 = args[2][90 * steps + ((cycle - 1) & mask)];
    assert(x3871 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/Reg"("zirgen/components/ram.cpp":57:42))
    auto x3872 = args[2][91 * steps + ((cycle - 1) & mask)];
    assert(x3872 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3873 = args[2][92 * steps + ((cycle - 1) & mask)];
    assert(x3873 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3874 = args[2][93 * steps + ((cycle - 1) & mask)];
    assert(x3874 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3875 = args[2][94 * steps + ((cycle - 1) & mask)];
    assert(x3875 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3876 = args[2][95 * steps + ((cycle - 1) & mask)];
    assert(x3876 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/U32Reg/byte[0](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3877 = args[2][101 * steps + ((cycle - 0) & mask)];
    assert(x3877 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/U32Reg/byte[1](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3878 = args[2][102 * steps + ((cycle - 0) & mask)];
    assert(x3878 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/U32Reg/byte[2](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3879 = args[2][103 * steps + ((cycle - 0) & mask)];
    assert(x3879 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/U32Reg/byte[3](Reg)"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3880 = args[2][104 * steps + ((cycle - 0) & mask)];
    assert(x3880 != Fp::invalid());
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkVerifier/Reg"("zirgen/components/ram.cpp":60:56))
    auto x3881 = args[2][97 * steps + ((cycle - 1) & mask)];
    assert(x3881 != Fp::invalid());
    {
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3882 = args[2][98 * steps + ((cycle - 0) & mask)];
      assert(x3882 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":75:35)
      auto x3883 = x3870 - x3882;
      // loc("zirgen/components/ram.cpp":75:35)
      auto x3884 = (x3883 == 0) ? Fp(1) : Fp(0);
      // loc("zirgen/components/ram.cpp":75:27)
      auto x3885 = x7 - x3884;
      // loc("zirgen/components/ram.cpp":75:12)
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3885);
        reg = x3885;
      }
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/RamHeader/RamPlonkVerifier/Reg"("./zirgen/compiler/edsl/component.h":154:27))
    auto x3886 = args[2][96 * steps + ((cycle - 0) & mask)];
    assert(x3886 != Fp::invalid());
    if (x3886 != 0) {
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3887 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x3887 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":87:9)
      auto x3888 = x6 - x3887;
      // loc("zirgen/components/ram.cpp":87:9)
      if (x3888 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:87");
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3889 = args[2][98 * steps + ((cycle - 0) & mask)];
      assert(x3889 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":89:17)
      auto x3890 = x3889 - x3870;
      // loc("zirgen/components/ram.cpp":89:17)
      auto x3891 = x3890 - x7;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3892 = Fp(x3891.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3892);
          reg = x3892;
        }
      }
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x3893 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x3893 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x3894 = x3891 - x3893;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x3895 = x3894 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3896 = Fp(x3895.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3896);
          reg = x3896;
        }
      }
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x3897 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x3897 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x3898 = x3895 - x3897;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x3899 = x3898 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3900 = Fp(x3899.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3900);
          reg = x3900;
        }
      }
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x3901 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x3901 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x3902 = x3899 - x3901;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x3903 = x3902 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3903);
        reg = x3903;
      }
    }
    // loc("zirgen/components/ram.cpp":95:19)
    auto x3904 = x7 - x3886;
    if (x3904 != 0) {
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3905 = args[2][98 * steps + ((cycle - 0) & mask)];
      assert(x3905 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":97:9)
      auto x3906 = x3870 - x3905;
      // loc("zirgen/components/ram.cpp":97:9)
      if (x3906 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:97");
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3907 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x3907 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x3908 = x3907 * x2;
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
      auto x3909 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x3909 != Fp::invalid());
      // loc("zirgen/components/ram.cpp":99:17)
      auto x3910 = x3908 + x3909;
      // loc("zirgen/components/ram.cpp":99:43)
      auto x3911 = x3871 * x2;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x3912 = x3910 - x3911;
      // loc("zirgen/components/ram.cpp":99:17)
      auto x3913 = x3912 + x3872;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3914 = Fp(x3913.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3914);
          reg = x3914;
        }
      }
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x3915 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x3915 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x3916 = x3913 - x3915;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x3917 = x3916 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3918 = Fp(x3917.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3918);
          reg = x3918;
        }
      }
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x3919 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x3919 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x3920 = x3917 - x3919;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x3921 = x3920 * x3;
      {
        // loc("zirgen/components/bytes.cpp":96:21)
        auto x3922 = Fp(x3921.asUInt32() & x4.asUInt32());
        // loc("zirgen/components/bytes.cpp":96:12)
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x3922);
          reg = x3922;
        }
      }
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("zirgen/components/bytes.cpp":97:16))
      auto x3923 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x3923 != Fp::invalid());
      // loc("zirgen/components/bytes.cpp":97:11)
      auto x3924 = x3921 - x3923;
      // loc("zirgen/components/bytes.cpp":97:10)
      auto x3925 = x3924 * x3;
      // loc("./zirgen/components/bits.h":68:23)
      {
        auto& reg = args[2][69 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3925);
        reg = x3925;
      }
      // loc("zirgen/components/ram.cpp":101:39)
      auto x3926 = x5 - x3909;
      if (x3926 != 0) {
        // loc("zirgen/components/ram.cpp":101:43)
        auto x3927 = x3873 - x3877;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x3927 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x3928 = x3874 - x3878;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x3928 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x3929 = x3875 - x3879;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x3929 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
        // loc("zirgen/components/ram.cpp":101:43)
        auto x3930 = x3876 - x3880;
        // loc("zirgen/components/ram.cpp":101:43)
        if (x3930 != 0) throw std::runtime_error("eqz failed at: zirgen/components/ram.cpp:101");
      }
    }
    // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/PlonkFini/RamPlonkElement/Reg"("./zirgen/compiler/edsl/edsl.h":117:61))
    auto x3931 = args[2][100 * steps + ((cycle - 0) & mask)];
    assert(x3931 != Fp::invalid());
    // loc("zirgen/components/ram.cpp":104:18)
    auto x3932 = x7 - x3931;
    // loc("zirgen/components/ram.cpp":104:53)
    auto x3933 = x6 - x3931;
    // loc("zirgen/components/ram.cpp":104:17)
    auto x3934 = x3932 * x3933;
    // loc("zirgen/components/ram.cpp":105:54)
    auto x3935 = x5 - x3931;
    // loc("zirgen/components/ram.cpp":105:16)
    auto x3936 = x3933 * x3935;
    // loc("zirgen/components/ram.cpp":106:18)
    auto x3937 = x3932 * x3935;
    if (x3937 != 0) {
      // loc("zirgen/components/ram.cpp":109:18)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x6);
        reg = x6;
      }
    }
    if (x3934 != 0) {
      // loc("zirgen/components/ram.cpp":110:17)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x7);
        reg = x7;
      }
    }
    if (x3936 != 0) {
      // loc("zirgen/components/ram.cpp":111:16)
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x3881);
        reg = x3881;
      }
    }
  }
  if (x8 != 0) {
    {
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3938 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x3938 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3939 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x3939 != Fp::invalid());
      host_args.at(0) = x3938;
      host_args.at(1) = x3939;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3940 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x3940 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3941 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x3941 != Fp::invalid());
      host_args.at(0) = x3940;
      host_args.at(1) = x3941;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3942 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x3942 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3943 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x3943 != Fp::invalid());
      host_args.at(0) = x3942;
      host_args.at(1) = x3943;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3944 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x3944 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3945 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x3945 != Fp::invalid());
      host_args.at(0) = x3944;
      host_args.at(1) = x3945;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3946 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x3946 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3947 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x3947 != Fp::invalid());
      host_args.at(0) = x3946;
      host_args.at(1) = x3947;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3948 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x3948 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3949 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x3949 != Fp::invalid());
      host_args.at(0) = x3948;
      host_args.at(1) = x3949;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3950 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x3950 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3951 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x3951 != Fp::invalid());
      host_args.at(0) = x3950;
      host_args.at(1) = x3951;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3952 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x3952 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3953 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x3953 != Fp::invalid());
      host_args.at(0) = x3952;
      host_args.at(1) = x3953;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3954 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x3954 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3955 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x3955 != Fp::invalid());
      host_args.at(0) = x3954;
      host_args.at(1) = x3955;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3956 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x3956 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3957 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x3957 != Fp::invalid());
      host_args.at(0) = x3956;
      host_args.at(1) = x3957;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3958 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x3958 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3959 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x3959 != Fp::invalid());
      host_args.at(0) = x3958;
      host_args.at(1) = x3959;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3960 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x3960 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3961 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x3961 != Fp::invalid());
      host_args.at(0) = x3960;
      host_args.at(1) = x3961;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3962 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x3962 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3963 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x3963 != Fp::invalid());
      host_args.at(0) = x3962;
      host_args.at(1) = x3963;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3964 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x3964 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3965 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x3965 != Fp::invalid());
      host_args.at(0) = x3964;
      host_args.at(1) = x3965;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3966 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x3966 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3967 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x3967 != Fp::invalid());
      host_args.at(0) = x3966;
      host_args.at(1) = x3967;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3968 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x3968 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3969 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x3969 != Fp::invalid());
      host_args.at(0) = x3968;
      host_args.at(1) = x3969;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3970 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x3970 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3971 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x3971 != Fp::invalid());
      host_args.at(0) = x3970;
      host_args.at(1) = x3971;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3972 = args[2][37 * steps + ((cycle - 0) & mask)];
      assert(x3972 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3973 = args[2][38 * steps + ((cycle - 0) & mask)];
      assert(x3973 != Fp::invalid());
      host_args.at(0) = x3972;
      host_args.at(1) = x3973;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3974 = args[2][39 * steps + ((cycle - 0) & mask)];
      assert(x3974 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3975 = args[2][40 * steps + ((cycle - 0) & mask)];
      assert(x3975 != Fp::invalid());
      host_args.at(0) = x3974;
      host_args.at(1) = x3975;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3976 = args[2][41 * steps + ((cycle - 0) & mask)];
      assert(x3976 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3977 = args[2][42 * steps + ((cycle - 0) & mask)];
      assert(x3977 != Fp::invalid());
      host_args.at(0) = x3976;
      host_args.at(1) = x3977;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3978 = args[2][43 * steps + ((cycle - 0) & mask)];
      assert(x3978 != Fp::invalid());
      // loc("Top/mux(Mux)/bytes_setup(BytesSetupStep)/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3979 = args[2][44 * steps + ((cycle - 0) & mask)];
      assert(x3979 != Fp::invalid());
      host_args.at(0) = x3978;
      host_args.at(1) = x3979;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
    }
  }
  if (x13 != 0) {
    {
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3980 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x3980 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3981 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x3981 != Fp::invalid());
      host_args.at(0) = x3980;
      host_args.at(1) = x3981;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3982 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x3982 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3983 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x3983 != Fp::invalid());
      host_args.at(0) = x3982;
      host_args.at(1) = x3983;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3984 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x3984 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3985 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x3985 != Fp::invalid());
      host_args.at(0) = x3984;
      host_args.at(1) = x3985;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3986 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x3986 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3987 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x3987 != Fp::invalid());
      host_args.at(0) = x3986;
      host_args.at(1) = x3987;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3988 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x3988 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3989 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x3989 != Fp::invalid());
      host_args.at(0) = x3988;
      host_args.at(1) = x3989;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3990 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x3990 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3991 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x3991 != Fp::invalid());
      host_args.at(0) = x3990;
      host_args.at(1) = x3991;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3992 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x3992 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3993 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x3993 != Fp::invalid());
      host_args.at(0) = x3992;
      host_args.at(1) = x3993;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3994 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x3994 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3995 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x3995 != Fp::invalid());
      host_args.at(0) = x3994;
      host_args.at(1) = x3995;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3996 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x3996 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3997 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x3997 != Fp::invalid());
      host_args.at(0) = x3996;
      host_args.at(1) = x3997;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3998 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x3998 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x3999 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x3999 != Fp::invalid());
      host_args.at(0) = x3998;
      host_args.at(1) = x3999;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4000 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x4000 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4001 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x4001 != Fp::invalid());
      host_args.at(0) = x4000;
      host_args.at(1) = x4001;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4002 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x4002 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4003 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x4003 != Fp::invalid());
      host_args.at(0) = x4002;
      host_args.at(1) = x4003;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4004 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x4004 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4005 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x4005 != Fp::invalid());
      host_args.at(0) = x4004;
      host_args.at(1) = x4005;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4006 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x4006 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4007 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x4007 != Fp::invalid());
      host_args.at(0) = x4006;
      host_args.at(1) = x4007;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4008 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x4008 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4009 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x4009 != Fp::invalid());
      host_args.at(0) = x4008;
      host_args.at(1) = x4009;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4010 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x4010 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4011 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x4011 != Fp::invalid());
      host_args.at(0) = x4010;
      host_args.at(1) = x4011;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4012 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x4012 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_init(RamInitStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4013 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x4013 != Fp::invalid());
      host_args.at(0) = x4012;
      host_args.at(1) = x4013;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
    }
  }
  if (x9 != 0) {
    {
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4014 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x4014 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4015 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x4015 != Fp::invalid());
      host_args.at(0) = x4014;
      host_args.at(1) = x4015;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4016 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x4016 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4017 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x4017 != Fp::invalid());
      host_args.at(0) = x4016;
      host_args.at(1) = x4017;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4018 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x4018 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4019 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x4019 != Fp::invalid());
      host_args.at(0) = x4018;
      host_args.at(1) = x4019;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4020 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x4020 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4021 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x4021 != Fp::invalid());
      host_args.at(0) = x4020;
      host_args.at(1) = x4021;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4022 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x4022 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4023 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x4023 != Fp::invalid());
      host_args.at(0) = x4022;
      host_args.at(1) = x4023;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4024 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x4024 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4025 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x4025 != Fp::invalid());
      host_args.at(0) = x4024;
      host_args.at(1) = x4025;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4026 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x4026 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4027 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x4027 != Fp::invalid());
      host_args.at(0) = x4026;
      host_args.at(1) = x4027;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4028 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x4028 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4029 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x4029 != Fp::invalid());
      host_args.at(0) = x4028;
      host_args.at(1) = x4029;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4030 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x4030 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4031 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x4031 != Fp::invalid());
      host_args.at(0) = x4030;
      host_args.at(1) = x4031;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4032 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x4032 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4033 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x4033 != Fp::invalid());
      host_args.at(0) = x4032;
      host_args.at(1) = x4033;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4034 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x4034 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4035 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x4035 != Fp::invalid());
      host_args.at(0) = x4034;
      host_args.at(1) = x4035;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4036 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x4036 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4037 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x4037 != Fp::invalid());
      host_args.at(0) = x4036;
      host_args.at(1) = x4037;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4038 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x4038 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4039 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x4039 != Fp::invalid());
      host_args.at(0) = x4038;
      host_args.at(1) = x4039;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4040 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x4040 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4041 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x4041 != Fp::invalid());
      host_args.at(0) = x4040;
      host_args.at(1) = x4041;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4042 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x4042 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4043 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x4043 != Fp::invalid());
      host_args.at(0) = x4042;
      host_args.at(1) = x4043;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4044 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x4044 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4045 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x4045 != Fp::invalid());
      host_args.at(0) = x4044;
      host_args.at(1) = x4045;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4046 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x4046 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_load(RamLoadStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4047 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x4047 != Fp::invalid());
      host_args.at(0) = x4046;
      host_args.at(1) = x4047;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
    }
  }
  if (x10 != 0) {
    {
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4048 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x4048 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4049 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x4049 != Fp::invalid());
      host_args.at(0) = x4048;
      host_args.at(1) = x4049;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4050 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x4050 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4051 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x4051 != Fp::invalid());
      host_args.at(0) = x4050;
      host_args.at(1) = x4051;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4052 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x4052 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4053 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x4053 != Fp::invalid());
      host_args.at(0) = x4052;
      host_args.at(1) = x4053;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4054 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x4054 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4055 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x4055 != Fp::invalid());
      host_args.at(0) = x4054;
      host_args.at(1) = x4055;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4056 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x4056 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4057 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x4057 != Fp::invalid());
      host_args.at(0) = x4056;
      host_args.at(1) = x4057;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4058 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x4058 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4059 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x4059 != Fp::invalid());
      host_args.at(0) = x4058;
      host_args.at(1) = x4059;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4060 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x4060 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4061 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x4061 != Fp::invalid());
      host_args.at(0) = x4060;
      host_args.at(1) = x4061;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4062 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x4062 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4063 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x4063 != Fp::invalid());
      host_args.at(0) = x4062;
      host_args.at(1) = x4063;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4064 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x4064 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4065 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x4065 != Fp::invalid());
      host_args.at(0) = x4064;
      host_args.at(1) = x4065;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4066 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x4066 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4067 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x4067 != Fp::invalid());
      host_args.at(0) = x4066;
      host_args.at(1) = x4067;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4068 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x4068 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4069 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x4069 != Fp::invalid());
      host_args.at(0) = x4068;
      host_args.at(1) = x4069;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4070 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x4070 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4071 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x4071 != Fp::invalid());
      host_args.at(0) = x4070;
      host_args.at(1) = x4071;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4072 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x4072 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4073 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x4073 != Fp::invalid());
      host_args.at(0) = x4072;
      host_args.at(1) = x4073;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4074 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x4074 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4075 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x4075 != Fp::invalid());
      host_args.at(0) = x4074;
      host_args.at(1) = x4075;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4076 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x4076 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4077 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x4077 != Fp::invalid());
      host_args.at(0) = x4076;
      host_args.at(1) = x4077;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4078 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x4078 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4079 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x4079 != Fp::invalid());
      host_args.at(0) = x4078;
      host_args.at(1) = x4079;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4080 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x4080 != Fp::invalid());
      // loc("Top/mux(Mux)/reset(ResetStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4081 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x4081 != Fp::invalid());
      host_args.at(0) = x4080;
      host_args.at(1) = x4081;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
    }
  }
  if (x11 != 0) {
    {
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4082 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x4082 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4083 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x4083 != Fp::invalid());
      host_args.at(0) = x4082;
      host_args.at(1) = x4083;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4084 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x4084 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4085 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x4085 != Fp::invalid());
      host_args.at(0) = x4084;
      host_args.at(1) = x4085;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4086 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x4086 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4087 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x4087 != Fp::invalid());
      host_args.at(0) = x4086;
      host_args.at(1) = x4087;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4088 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x4088 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4089 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x4089 != Fp::invalid());
      host_args.at(0) = x4088;
      host_args.at(1) = x4089;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4090 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x4090 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4091 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x4091 != Fp::invalid());
      host_args.at(0) = x4090;
      host_args.at(1) = x4091;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4092 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x4092 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4093 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x4093 != Fp::invalid());
      host_args.at(0) = x4092;
      host_args.at(1) = x4093;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4094 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x4094 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4095 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x4095 != Fp::invalid());
      host_args.at(0) = x4094;
      host_args.at(1) = x4095;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4096 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x4096 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4097 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x4097 != Fp::invalid());
      host_args.at(0) = x4096;
      host_args.at(1) = x4097;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4098 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x4098 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4099 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x4099 != Fp::invalid());
      host_args.at(0) = x4098;
      host_args.at(1) = x4099;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4100 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x4100 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4101 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x4101 != Fp::invalid());
      host_args.at(0) = x4100;
      host_args.at(1) = x4101;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4102 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x4102 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4103 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x4103 != Fp::invalid());
      host_args.at(0) = x4102;
      host_args.at(1) = x4103;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4104 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x4104 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4105 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x4105 != Fp::invalid());
      host_args.at(0) = x4104;
      host_args.at(1) = x4105;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4106 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x4106 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4107 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x4107 != Fp::invalid());
      host_args.at(0) = x4106;
      host_args.at(1) = x4107;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4108 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x4108 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4109 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x4109 != Fp::invalid());
      host_args.at(0) = x4108;
      host_args.at(1) = x4109;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4110 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x4110 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4111 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x4111 != Fp::invalid());
      host_args.at(0) = x4110;
      host_args.at(1) = x4111;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4112 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x4112 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4113 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x4113 != Fp::invalid());
      host_args.at(0) = x4112;
      host_args.at(1) = x4113;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4114 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x4114 != Fp::invalid());
      // loc("Top/mux(Mux)/body(BodyStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4115 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x4115 != Fp::invalid());
      host_args.at(0) = x4114;
      host_args.at(1) = x4115;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
    }
  }
  if (x12 != 0) {
    {
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4116 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x4116 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4117 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x4117 != Fp::invalid());
      host_args.at(0) = x4116;
      host_args.at(1) = x4117;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4118 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x4118 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4119 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x4119 != Fp::invalid());
      host_args.at(0) = x4118;
      host_args.at(1) = x4119;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4120 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x4120 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4121 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x4121 != Fp::invalid());
      host_args.at(0) = x4120;
      host_args.at(1) = x4121;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4122 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x4122 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4123 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x4123 != Fp::invalid());
      host_args.at(0) = x4122;
      host_args.at(1) = x4123;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4124 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x4124 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4125 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x4125 != Fp::invalid());
      host_args.at(0) = x4124;
      host_args.at(1) = x4125;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4126 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x4126 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4127 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x4127 != Fp::invalid());
      host_args.at(0) = x4126;
      host_args.at(1) = x4127;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4128 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x4128 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4129 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x4129 != Fp::invalid());
      host_args.at(0) = x4128;
      host_args.at(1) = x4129;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4130 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x4130 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4131 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x4131 != Fp::invalid());
      host_args.at(0) = x4130;
      host_args.at(1) = x4131;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4132 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x4132 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4133 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x4133 != Fp::invalid());
      host_args.at(0) = x4132;
      host_args.at(1) = x4133;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4134 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x4134 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4135 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x4135 != Fp::invalid());
      host_args.at(0) = x4134;
      host_args.at(1) = x4135;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4136 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x4136 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4137 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x4137 != Fp::invalid());
      host_args.at(0) = x4136;
      host_args.at(1) = x4137;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4138 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x4138 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4139 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x4139 != Fp::invalid());
      host_args.at(0) = x4138;
      host_args.at(1) = x4139;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4140 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x4140 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4141 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x4141 != Fp::invalid());
      host_args.at(0) = x4140;
      host_args.at(1) = x4141;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4142 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x4142 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4143 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x4143 != Fp::invalid());
      host_args.at(0) = x4142;
      host_args.at(1) = x4143;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4144 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x4144 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4145 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x4145 != Fp::invalid());
      host_args.at(0) = x4144;
      host_args.at(1) = x4145;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4146 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x4146 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4147 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x4147 != Fp::invalid());
      host_args.at(0) = x4146;
      host_args.at(1) = x4147;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4148 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x4148 != Fp::invalid());
      // loc("Top/mux(Mux)/ram_fini(RamFiniStep)/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./zirgen/compiler/edsl/component.h":154:27))
      auto x4149 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x4149 != Fp::invalid());
      host_args.at(0) = x4148;
      host_args.at(1) = x4149;
      host(ctx, "plonkWrite", "bytes", host_args.data(), 2, host_outs.data(), 0);
    }
  }
  return x6;
}

} // namespace risc0::circuit::rv32im
// clang-format on
