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

//! Finite field types and operations
//!
//! Defines base fields and extension fields used for finite field-based
//! operations across the RISC Zero zkVM architecture

use alloc::vec::Vec;
use core::{cmp, fmt::Debug, ops};

pub mod baby_bear;
pub mod goldilocks;

/// A pair of fields, one of which is an extension field of the other.
pub trait Field {
    /// An element of the base field
    type Elem: Elem + RootsOfUnity;
    /// An element of the extension field
    type ExtElem: ExtElem<SubElem = Self::Elem>;
}

/// Subfield elements that can be compared, copied, and operated
/// on via multiplication, addition, and subtraction
pub trait Elem:
    ops::Mul<Output = Self>
    + ops::MulAssign
    + ops::Add<Output = Self>
    + ops::AddAssign
    + ops::Neg
    + ops::Sub<Output = Self>
    + ops::SubAssign
    + cmp::PartialEq
    + cmp::Eq
    + core::clone::Clone
    + core::marker::Copy
    + Sized
    + bytemuck::Pod
    + core::default::Default
    + Clone
    + Copy
    + Send
    + Sync
    + Debug
    + 'static
{
    /// Invalid, a value that is not a member of the field.  This
    /// should only be used with the "is_valid" or "unwrap_or_zero"
    /// methods.
    const INVALID: Self;

    /// Zero, the additive identity.
    const ZERO: Self;

    /// One, the multiplicative identity.
    const ONE: Self;

    /// How many u32 words are required to hold a single element
    const WORDS: usize;

    /// Compute the multiplicative inverse of `x` (or `1 / x` in finite field
    /// terms).
    fn inv(self) -> Self;

    /// Return an element raised to the given power.
    fn pow(self, exp: usize) -> Self {
        debug_assert!(self.is_valid());
        let mut n = exp;
        let mut tot = Self::ONE;
        let mut x = self;
        while n != 0 {
            if n % 2 == 1 {
                tot *= x;
            }
            n /= 2;
            x *= x;
        }
        tot
    }

    /// Returns a random valid field element.
    fn random(rng: &mut impl rand_core::RngCore) -> Self;

    /// Import a number into the field from the natural numbers.
    fn from_u64(val: u64) -> Self;

    /// Represent a field element as a sequence of u32s
    fn to_u32_words(&self) -> Vec<u32>;

    /// Interpret a sequence of u32s as a field element
    fn from_u32_words(val: &[u32]) -> Self;

    /// Returns true if this element is not INVALID.  Unlike most
    /// methods, this may be called on an INVALID element.
    fn is_valid(&self) -> bool;

    /// Returns 0 if this element is INVALID, else the value of this
    /// element.  Unlike most methods, this may be called on an
    /// INVALID element.
    fn valid_or_zero(&self) -> Self {
        if self.is_valid() {
            *self
        } else {
            Self::ZERO
        }
    }

    /// Returns this element, but checks to make sure it's valid.
    fn ensure_valid(&self) -> &Self {
        debug_assert!(self.is_valid());
        self
    }

    /// Interprets a slice of these elements as u32s.  These elements
    /// may not be INVALID.
    fn as_u32_slice(elems: &[Self]) -> &[u32] {
        if cfg!(debug_assertions) {
            for elem in elems {
                elem.ensure_valid();
            }
        }
        Self::as_u32_slice_unchecked(elems)
    }

    /// Interprets a slice of these elements as u32s.  These elements
    /// may potentially be INVALID.
    fn as_u32_slice_unchecked(elems: &[Self]) -> &[u32] {
        bytemuck::cast_slice(elems)
    }

    /// Interprets a slice of u32s as a slice of these elements.
    /// These elements may not be INVALID.
    fn from_u32_slice(u32s: &[u32]) -> &[Self] {
        let elems = Self::from_u32_slice_unchecked(u32s);
        if cfg!(debug_assertions) {
            for elem in elems {
                elem.ensure_valid();
            }
        }
        elems
    }

    /// Interprets a slice of u32s as a slice of these elements.
    /// These elements may be INVALID.
    fn from_u32_slice_unchecked(u32s: &[u32]) -> &[Self] {
        bytemuck::cast_slice(u32s)
    }
}

/// A field extension which can be constructed from a subfield element [Elem]
///
/// Represents an element of an extension field. This extension field is
/// associated with a base field (sometimes called "subfield") whose element
/// type is given by the generic type parameter.
pub trait ExtElem:
    Elem
    + ops::Add<Output = Self>
    + ops::AddAssign
    + ops::Neg<Output = Self>
    + ops::Mul<Self, Output = Self>
    + ops::Mul<Self::SubElem, Output = Self>
    + ops::MulAssign<Self>
    + ops::MulAssign<Self::SubElem>
    + ops::Sub<Output = Self>
    + ops::SubAssign
    + cmp::PartialEq
    + cmp::Eq
{
    /// An element of the base field
    ///
    /// This type represents an element of the base field (sometimes called
    /// "subfield") of this extension field.
    type SubElem: Elem;

    /// The degree of the field extension
    ///
    /// This the degree of the extension field when interpreted as a vector
    /// space over the base field. Thus, an [ExtElem] can be represented as
    /// `EXT_SIZE` [SubElem](ExtElem::SubElem)s.
    const EXT_SIZE: usize;

    /// Interpret a base field element as an extension field element
    ///
    /// Every [SubElem](ExtElem::SubElem) is (mathematically) an [ExtElem]. This
    /// constructs the [ExtElem] equal to the given [SubElem](ExtElem::SubElem).
    fn from_subfield(elem: &Self::SubElem) -> Self;

    /// Construct an extension field element
    ///
    /// Construct an extension field element from a (mathematical) vector of
    /// [SubElem](ExtElem::SubElem)s. This vector is length
    /// [EXT_SIZE](ExtElem::EXT_SIZE).
    fn from_subelems(elems: impl IntoIterator<Item = Self::SubElem>) -> Self;

    /// Express an extension field element in terms of base field elements
    ///
    /// Returns the (mathematical) vector of [SubElem](ExtElem::SubElem)s equal
    /// to the [ExtElem]. This vector is length [EXT_SIZE](ExtElem::EXT_SIZE).
    fn subelems(&self) -> &[Self::SubElem];
}

/// Roots of unity for the field whose elements are represented by [ExtElem] and
/// whose subfield elements are represented by [Elem]
pub trait RootsOfUnity: Sized + 'static {
    /// Maximum root of unity which is a power of 2 (i.e., there is a
    /// 2^MAX_ROU_PO2th root of unity, but no 2^(MAX_ROU_PO2+1)th root.
    const MAX_ROU_PO2: usize;

    /// For each power of 2, the 'forward' root of unity for
    /// the po2.  That is, this list satisfies ROU_FWD\[i+1\] ^ 2 =
    /// ROU_FWD\[i\] in the prime field, which implies ROU_FWD\[i\] ^
    /// (2 ^ i) = 1.
    const ROU_FWD: &'static [Self];

    /// For each power of 2, the 'reverse' root of unity for
    /// the po2.  This list satisfies ROU_FWD\[i\] * ROU_REV\[i\] = 1
    /// in the prime field F_2013265921.
    const ROU_REV: &'static [Self];
}

#[cfg(test)]
mod tests {
    use core::fmt::Debug;

    use rand::Rng;

    use super::{Elem, RootsOfUnity};

    pub fn test_roots_of_unity<F: Elem + RootsOfUnity + Debug>() {
        let mut cur: Option<F> = None;

        for &rou in F::ROU_FWD.iter().rev() {
            if let Some(ref mut curval) = &mut cur {
                *curval *= *curval;
                assert_eq!(*curval, rou);
            } else {
                cur = Some(rou);
            }
        }
        assert_eq!(cur, Some(F::ONE));

        for (&fwd, &rev) in F::ROU_FWD.iter().zip(F::ROU_REV.iter()) {
            assert_eq!(fwd * rev, F::ONE);
        }
    }

    fn non_zero_rand<F: Elem>(r: &mut impl Rng) -> F {
        loop {
            let val = F::random(r);
            if val != F::ZERO {
                return val;
            }
        }
    }
    pub fn test_field_ops<F: Elem>(p_u64: u64)
    where
        F: Into<u64> + From<u64> + Debug,
    {
        // For testng, we do 128-bit arithmetic so we don't have to worry about
        // overflows.
        let p: u128 = p_u64 as _;

        assert_eq!(F::from(0), F::ZERO);
        assert_eq!(F::from(p_u64), F::ZERO);
        assert_eq!(F::from(1), F::ONE);
        assert_eq!(F::from(p_u64 - 1) + F::from(1), F::ZERO);

        assert_eq!(F::ZERO.inv(), F::ZERO);
        assert_eq!(F::ONE.inv(), F::ONE);

        // Compare against many randomly generated numbers to make sure results match
        // the expected results for regular modular arithmetic.
        let mut rng = rand::thread_rng();

        for _ in 0..1000 {
            let x: F = non_zero_rand(&mut rng);
            let y: F = non_zero_rand(&mut rng);

            let xi: u128 = x.into() as _;
            let yi: u128 = y.into() as _;

            assert_eq!((x + y).into() as u128, (&xi + &yi) % p);
            assert_eq!((x * y).into() as u128, (&xi * &yi) % p);
            assert_eq!((x - y).into() as u128, (&xi + p - &yi) % p);

            let xinv = x.inv();
            if x != F::ONE {
                assert!(xinv != x);
            }
            assert_eq!(xinv * x, F::ONE);
        }
    }
}
