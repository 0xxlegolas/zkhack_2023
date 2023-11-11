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

use std::collections::BTreeMap;

use anyhow::{bail, Result};
use log::trace;
use risc0_circuit_recursion::{
    layout::{CodeReg, RecursionMicroInst, LAYOUT},
    micro_op, Externs,
};
use risc0_core::field::baby_bear::{BabyBearElem as Fp, BabyBearExtElem as Fp4};
use risc0_zkp::{
    adapter::CircuitStepContext,
    core::hash::{
        poseidon::{poseidon_mix, CELLS},
        sha::SHA256_INIT,
    },
    field::Elem,
};

pub struct Preflight<'a, Ext: Externs> {
    externs: &'a mut Ext,

    sha_state: [u32; 8],
    sha_load: [u32; 16],

    poseidon_state: [Fp; CELLS],

    sha_init_pos: usize,
    sha_load_pos: usize,
    sha_fini_pos: usize,

    // Cycle offsets that we can split before when doing parallel processing.
    pub split_points: Vec<usize>,

    // Cycles, and what IOP input elements were read during them.
    pub iop_reads: BTreeMap<usize, Vec<Fp4>>,

    // All the data written by the program
    pub output: Vec<u32>,
}

impl<'a, Ext: Externs> Preflight<'a, Ext> {
    pub fn new(externs: &'a mut Ext) -> Self {
        Preflight {
            externs,
            poseidon_state: [Fp::new(0); CELLS],
            sha_state: [0; 8],
            sha_load: [0; 16],
            sha_init_pos: 0,
            sha_load_pos: 0,
            sha_fini_pos: 0,

            split_points: Vec::new(),
            iop_reads: BTreeMap::new(),
            output: Vec::new(),
        }
    }

    // Returns true if we can split the parallel workload before this
    // cycle, e.g. if nothing this cycle or after depends on anything
    // before this cycle.
    pub fn set_top(&mut self, ctx: &CircuitStepContext, code: &[Fp]) -> Result<()> {
        // By default we can split before this cycle.
        self.split_points.push(ctx.cycle);

        trace!("top: {code:?}");
        if self.get(code, LAYOUT.code.select.macro_ops) == Fp::ONE {
            self.set_macro(ctx, code)?
        }
        if self.get(code, LAYOUT.code.select.micro_ops) == Fp::ONE {
            self.set_micros(ctx, code)?
        }
        if self.get(code, LAYOUT.code.select.poseidon_load) == Fp::ONE {
            let inst = LAYOUT.code.inst.poseidon_load;
            let do_mont = self.get(code, inst.do_mont).as_u32();
            let add_consts = self.get(code, inst.add_consts).as_u32();
            let keep_state = self.get(code, inst.keep_state).as_u32();
            let group = (self.get(code, inst.group.g1).as_u32()
                + self.get(code, inst.group.g2).as_u32() * 2) as usize;
            trace!(
                "Poseidon Load: group = {}, add_consts = {}, keep_state = {}",
                group,
                add_consts,
                keep_state
            );
            if keep_state != 1 {
                self.poseidon_state = [Fp::new(0); CELLS];
            }
            for i in 0..8 {
                let addr = self.get(code, inst.inputs[i]);
                let mut load = self.externs.wom_read(addr).elems()[0];
                if do_mont != 0 {
                    // Convert from montgomery form
                    load = load * Fp::from(943718400u32);
                }
                self.poseidon_state[group * 8 + i] += load;
            }
            self.set_not_splittable(ctx);
        }
        if self.get(code, LAYOUT.code.select.poseidon_full) == Fp::ONE {
            trace!("Poseidon full");
            self.set_not_splittable(ctx);
        }
        if self.get(code, LAYOUT.code.select.poseidon_partial) == Fp::ONE {
            trace!("Poseidon partial");
            poseidon_mix(&mut self.poseidon_state);
            self.set_not_splittable(ctx);
        }
        if self.get(code, LAYOUT.code.select.poseidon_store) == Fp::ONE {
            let inst = LAYOUT.code.inst.poseidon_load;
            let do_mont = self.get(code, inst.do_mont).as_u32();
            let group = (self.get(code, inst.group.g1).as_u32()
                + self.get(code, inst.group.g2).as_u32() * 2) as usize;
            trace!("Poseidon store, group = {}", group);
            let write_addr = self.get(code, LAYOUT.code.write_addr).as_u32() as usize;
            for i in 0..8 {
                let addr = Fp::new((write_addr + i) as u32);
                let mut store = self.poseidon_state[group * 8 + i];
                if do_mont != 0 {
                    // Convert to montgomery form
                    store = store * Fp::from(268435454u32);
                }
                self.externs.wom_write(addr, Fp4::from(store));
            }
            self.set_not_splittable(ctx);
        }
        Ok(())
    }

    // Mark the current cycle as one we can't split before for
    // parallel processing.  E.g., if we have to resolve any calls to
    // BACK.
    fn set_not_splittable(&mut self, ctx: &CircuitStepContext) {
        if self
            .split_points
            .last()
            .map_or(false, |cycle| *cycle == ctx.cycle)
        {
            self.split_points.pop();
        }
    }

    fn get(&self, code: &[Fp], reg: &CodeReg) -> Fp {
        code[reg.offset]
    }

    fn set_macro(&mut self, ctx: &CircuitStepContext, code: &[Fp]) -> Result<()> {
        let macro_ops = LAYOUT.code.inst.macro_ops;
        let opcode = macro_ops.opcode;
        let arg: [Fp; 3] = core::array::from_fn(|i| self.get(code, macro_ops.operand[i]));
        let u32arg: [u32; 3] = core::array::from_fn(|i| arg[i].into());
        let write_addr = self.get(code, LAYOUT.code.write_addr).into();

        trace!("write_addr = {write_addr:?}");

        if self.get(code, opcode.bit_and_elem) == Fp::ONE {
            let in_a = self.externs.wom_read(arg[0]);
            let in_b = self.externs.wom_read(arg[1]);
            let result = Fp4::from_u32(u32::from(in_a.elems()[0]) & u32::from(in_b.elems()[0]));

            trace!("{in_a:?} & {in_b:?} -> {result:?}");

            self.externs.wom_write(write_addr, result)
        }

        if self.get(code, opcode.bit_op_shorts) == Fp::ONE {
            let in_a = self.externs.wom_read(arg[0]);
            let in_b = self.externs.wom_read(arg[1]);

            let result;
            if u32arg[2] != 0 {
                // AND and combine [a, b, 0, 0] & [c, d, 0, 0] -> [(a&c) + ((b&d) << 16), 0, 0,
                // 0]
                result = Fp4::new(
                    Fp::from(
                        (u32::from(in_a.elems()[0]) & u32::from(in_b.elems()[0]))
                            + ((u32::from(in_a.elems()[1]) & u32::from(in_b.elems()[1])) << 16),
                    ),
                    Fp::ZERO,
                    Fp::ZERO,
                    Fp::ZERO,
                );
                trace!("{in_a:?} & {in_b:?} (as shorts) -> {result:?}");
            } else {
                // Xors and returns 2 shorts: [a, b, 0, 0] ^ [c, d, 0, 0] -> [a ^ c, b ^ d, 0,
                // 0]
                result = Fp4::new(
                    Fp::from(u32::from(in_a.elems()[0]) ^ u32::from(in_b.elems()[0])),
                    Fp::from(u32::from(in_a.elems()[1]) ^ u32::from(in_b.elems()[1])),
                    Fp::ZERO,
                    Fp::ZERO,
                );
                trace!("{in_a:?} ^ {in_b:?} -> {result:?}");
            }
            self.externs.wom_write(write_addr, result);
        }

        if self.get(code, opcode.sha_init) == Fp::ONE {
            self.set_not_splittable(ctx);

            if self.sha_init_pos == 0 {
                trace!("sha_init");

                for i in 0..self.sha_state.len() {
                    self.sha_state[i] = SHA256_INIT.as_words()[i].to_be();
                }
            }
            self.sha_init_pos = (self.sha_init_pos + 1) % 4;
        } else {
            assert_eq!(self.sha_init_pos, 0);
        }

        if self.get(code, opcode.sha_load) == Fp::ONE {
            self.set_not_splittable(ctx);

            let io0 = self.externs.wom_read(arg[0]);
            trace!("Reading sha from wom {:?}, got {io0:?}", arg[0]);
            let subtype = u32arg[2];
            let val: u32;
            if subtype == 0 {
                // Montgomery encoded.
                val = io0.elems()[0].as_u32_montgomery();
            } else {
                val = u32::from(u32::from(io0.elems()[0]) + (u32::from(io0.elems()[1]) << 16));
            }
            trace!(
                "sha_load {:x?} (from {:?}) (subtype = {subtype})",
                val.to_be(),
                io0
            );

            self.sha_load[self.sha_load_pos] = val;
            self.sha_load_pos = (self.sha_load_pos + 1) % 16;
        } else {
            assert_eq!(self.sha_load_pos, 0);
        }

        if self.get(code, opcode.sha_mix) == Fp::ONE {
            self.set_not_splittable(ctx);
        }

        if self.get(code, opcode.sha_fini) == Fp::ONE {
            self.set_not_splittable(ctx);

            if self.sha_fini_pos == 0 {
                trace!("sha_fini: state={:x?}", self.sha_state);
                trace!("sha_fini: in={:x?}", self.sha_load);
                let u8s: &[u8] = bytemuck::cast_slice(&self.sha_load);

                sha2::compress256(
                    &mut self.sha_state,
                    &[*generic_array::GenericArray::from_slice(u8s)],
                );
                trace!("sha_fini: out={:x?}", self.sha_state);
                // for (size_t i = 0; i < 4; i++) {
                //   addMacro(/*outs=*/0, MacroOpcode::SHA_FINI, out + 3 - i, out + 7 - i);
                // So, if shaFiniPos is 0, we're at the first SHA_FINI of the bunch, and
                // arg[0] = out + 3 - 0, so out = arg[0] - 3.
                let out_addr = u32::from(arg[0]) - 3;

                for i in 0u32..8 {
                    let out = self.sha_state[i as usize].to_be();
                    trace!("sha_fini {out:?} -> wom[{out_addr} + {i}]");
                    self.externs.wom_write(
                        Fp::from(out_addr + i),
                        Fp4::new(
                            Fp::from(out & 0xFFFF),
                            Fp::from(out >> 16),
                            Fp::ZERO,
                            Fp::ZERO,
                        ),
                    );
                }
            }

            self.sha_fini_pos = (self.sha_fini_pos + 1) % 4;
        } else {
            assert_eq!(self.sha_fini_pos, 0);
        }
        Ok(())
    }

    fn set_micros(&mut self, ctx: &CircuitStepContext, code: &[Fp]) -> Result<()> {
        let write_addr = self.get(code, LAYOUT.code.write_addr);
        trace!("micros -> wom[{write_addr:?}]");
        for i in 0..3 {
            self.set_micro(
                ctx,
                code,
                write_addr + Fp::new(i as u32),
                LAYOUT.code.inst.micro_ops.inst[i],
            )?;
        }
        Ok(())
    }

    fn set_micro(
        &mut self,
        ctx: &CircuitStepContext,
        code: &[Fp],
        write_addr: Fp,
        inst: &RecursionMicroInst,
    ) -> Result<()> {
        let opcode = u32::from(self.get(code, inst.opcode));
        let arg: [Fp; 3] = core::array::from_fn(|i| self.get(code, inst.operand[i]));
        let u32arg: [u32; 3] = core::array::from_fn(|i| arg[i].into());

        match opcode {
            micro_op::CONST => {
                let result = Fp4::new(arg[0], arg[1], Fp::ZERO, Fp::ZERO);
                trace!("const {result:?}");
                self.externs.wom_write(write_addr, result);
            }
            micro_op::ADD => {
                let a = self.externs.wom_read(arg[0]);
                let b = self.externs.wom_read(arg[1]);
                let result = a + b;
                trace!("{a:?} + {b:?} -> {result:?}");
                self.externs.wom_write(write_addr, result);
                if arg[2] != Fp::ZERO {
                    self.output.push(a.elems()[0].into());
                }
            }
            micro_op::SUB => {
                let a = self.externs.wom_read(arg[0]);
                let b = self.externs.wom_read(arg[1]);
                let result = a - b;
                trace!("{a:?} - {b:?} -> {result:?}");
                self.externs.wom_write(write_addr, result);
            }
            micro_op::MUL => {
                let a = self.externs.wom_read(arg[0]);
                let b = self.externs.wom_read(arg[1]);
                let result = a * b;
                trace!("{a:?} * {b:?} -> {result:?}");
                self.externs.wom_write(write_addr, result);
            }
            micro_op::INV => {
                let a = self.externs.wom_read(arg[0]);
                if u32arg[1] == 0 {
                    let result = if a.elems()[0] == Fp::ZERO {
                        Fp::ONE
                    } else {
                        Fp::ZERO
                    };
                    trace!("is_zero({a:?}) -> {result:?}");
                    self.externs.wom_write(write_addr, Fp4::from(result));
                } else {
                    let result = a.inv();
                    trace!("inv({a:?}) -> {result:?}");
                    self.externs.wom_write(write_addr, a.inv());
                }
            }
            micro_op::EQ => {
                let a = self.externs.wom_read(arg[0]);
                let b = self.externs.wom_read(arg[1]);
                trace!("eq({a:?} ({:?}), {b:?}) ({:?})", arg[0], arg[1]);
                if a != b {
                    bail!("Equality check failed: Expecting {a:?} == {b:?}");
                }
            }
            micro_op::READ_IOP_HEADER => {
                trace!("iop header {:?} {:?}", arg[0], arg[1]);
                self.externs.read_iop_header(arg[0], arg[1]);
            }
            micro_op::READ_IOP_BODY => {
                let body = self.externs.read_iop_body(arg[2]);
                trace!("iop body -> {:?}", body);
                self.externs.wom_write(write_addr, body);
                self.iop_reads.entry(ctx.cycle).or_default().push(body);
            }
            micro_op::MIX_RNG => {
                let mut val = arg[2];
                if u32arg[2] != 0 {
                    // If non-zero, multiply in "extraPrev" which was the last
                    // instruction that wrote to the previous WOM address.
                    let prev = self.externs.wom_read(write_addr - Fp::ONE).elems()[0];
                    trace!("mix_rng prev={prev:?}");
                    val = val * prev;
                    self.set_not_splittable(&ctx)
                }
                let a = self.externs.wom_read(arg[0]);
                let b = self.externs.wom_read(arg[1]);
                const SHIFT_WORD: Fp = Fp::new(1 << 16);
                val = val * SHIFT_WORD + a.elems()[1];
                val = val * SHIFT_WORD + a.elems()[0];
                val = val * SHIFT_WORD + b.elems()[1];
                val = val * SHIFT_WORD + b.elems()[0];
                trace!("mix_rng -> {val:?}");
                self.externs.wom_write(write_addr, Fp4::from_fp(val));
            }
            micro_op::SELECT => {
                let a = self.externs.wom_read(arg[0]);
                let val = self.externs.wom_read(arg[1] + arg[2] * a.elems()[0]);
                trace!("select {a:?} -> {val:?}");
                self.externs.wom_write(write_addr, val);
            }
            micro_op::EXTRACT => {
                let a = self.externs.wom_read(arg[0]);
                let val = arg[1] * arg[2] * a.elems()[3]
                    + arg[1] * (Fp::ONE - arg[2]) * a.elems()[2]
                    + (Fp::ONE - arg[1]) * arg[2] * a.elems()[1]
                    + (Fp::ONE - arg[1]) * (Fp::ONE - arg[2]) * a.elems()[0];
                trace!("extract {a:?} -> {val:?}");
                self.externs.wom_write(write_addr, Fp4::from_fp(val));
            }
            _ => panic!("Unknown opcode"),
        }
        Ok(())
    }
}
