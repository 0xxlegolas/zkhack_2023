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

pub(crate) mod client;
pub(crate) mod convert;
#[cfg(feature = "prove")]
pub(crate) mod server;
#[cfg(test)]
#[cfg(feature = "prove")]
mod tests;

use std::{
    io::{Read, Write},
    net::{TcpListener, TcpStream},
    path::{Path, PathBuf},
    process::{Child, Command},
    sync::{
        atomic::{AtomicBool, Ordering},
        mpsc::channel,
        Arc,
    },
    thread,
    time::Duration,
};

use anyhow::{anyhow, Context, Result};
use bytes::{Buf, BufMut, Bytes};
use prost::Message;

use crate::{ExitCode, Journal};

mod pb {
    pub(crate) mod api {
        pub use crate::host::protos::api::*;
    }
    pub(crate) mod base {
        pub use crate::host::protos::base::*;
    }
    pub(crate) mod core {
        pub use crate::host::protos::core::*;
    }
}

const CONNECT_TIMEOUT: Duration = Duration::from_secs(10);

trait RootMessage: Message {}

pub trait Connection {
    fn stream(&self) -> &TcpStream;
    fn close(&mut self) -> Result<i32>;
    fn try_clone(&self) -> Result<Box<dyn Connection>>;
}

pub struct ConnectionWrapper {
    inner: Box<dyn Connection>,
    buf: Vec<u8>,
}

impl RootMessage for pb::api::HelloRequest {}
impl RootMessage for pb::api::HelloReply {}
impl RootMessage for pb::api::ServerRequest {}
impl RootMessage for pb::api::ServerReply {}
impl RootMessage for pb::api::GenericReply {}
impl RootMessage for pb::api::OnIoReply {}
impl RootMessage for pb::api::ProveSegmentReply {}
impl RootMessage for pb::api::LiftRequest {}
impl RootMessage for pb::api::LiftReply {}
impl RootMessage for pb::api::JoinRequest {}
impl RootMessage for pb::api::JoinReply {}
impl RootMessage for pb::api::IdentityP254Request {}
impl RootMessage for pb::api::IdentityP254Reply {}

impl ConnectionWrapper {
    fn new(inner: Box<dyn Connection>) -> Self {
        Self {
            inner,
            buf: Vec::new(),
        }
    }

    fn send<T: RootMessage>(&mut self, msg: T) -> Result<()> {
        let len = msg.encoded_len();
        self.buf.clear();
        self.buf.put_u32_le(len as u32);
        msg.encode(&mut self.buf)?;
        Ok(self.inner.stream().write_all(&self.buf)?)
    }

    fn recv<T: Default + RootMessage>(&mut self) -> Result<T> {
        let mut stream = self.inner.stream();
        self.buf.resize(4, 0);
        stream.read_exact(&mut self.buf)?;
        let len = self.buf.as_slice().get_u32_le() as usize;
        self.buf.resize(len, 0);
        stream.read_exact(&mut self.buf)?;
        Ok(T::decode(self.buf.as_slice())?)
    }

    fn close(&mut self) -> Result<i32> {
        self.inner.close()
    }

    #[cfg(feature = "prove")]
    fn try_clone(&self) -> Result<Self> {
        Ok(Self::new(self.inner.try_clone()?))
    }
}

/// Connects a zkVM client and server
pub trait Connector {
    /// Create a client-server connection
    fn connect(&self) -> Result<ConnectionWrapper>;
}

struct ParentProcessConnector {
    server_path: PathBuf,
    listener: TcpListener,
}

impl ParentProcessConnector {
    pub fn new<P: AsRef<Path>>(server_path: P) -> Result<Self> {
        Ok(Self {
            server_path: server_path.as_ref().to_path_buf(),
            listener: TcpListener::bind("127.0.0.1:0")?,
        })
    }

    fn spawn_fail(&self) -> String {
        format!(
            "Could not launch zkvm: \"{}\". \n
            Use `cargo binstall cargo-risczero` to install the latest zkvm.",
            self.server_path.to_string_lossy()
        )
    }
}

impl Connector for ParentProcessConnector {
    fn connect(&self) -> Result<ConnectionWrapper> {
        let addr = self.listener.local_addr()?;
        let child = Command::new(&self.server_path)
            .arg("--port")
            .arg(addr.port().to_string())
            .spawn()
            .with_context(|| self.spawn_fail())?;

        let shutdown = Arc::new(AtomicBool::new(false));
        let server_shutdown = shutdown.clone();
        let (tx, rx) = channel();
        let listener = self.listener.try_clone()?;
        let handle = thread::spawn(move || {
            let stream = listener.accept();
            if server_shutdown.load(Ordering::Relaxed) {
                return;
            }
            if let Ok((stream, _addr)) = stream {
                tx.send(stream).unwrap();
            }
        });

        let stream = rx.recv_timeout(CONNECT_TIMEOUT);
        let stream = stream.map_err(|err| {
            shutdown.store(true, Ordering::Relaxed);
            let _ = TcpStream::connect(addr);
            handle.join().unwrap();
            err
        })?;

        Ok(ConnectionWrapper::new(Box::new(
            ParentProcessConnection::new(child, stream),
        )))
    }
}

struct TcpConnector {
    addr: String,
}

impl TcpConnector {
    #[cfg(feature = "prove")]
    pub(crate) fn new(addr: &str) -> Self {
        Self {
            addr: addr.to_string(),
        }
    }
}

impl Connector for TcpConnector {
    fn connect(&self) -> Result<ConnectionWrapper> {
        log::debug!("connect");
        let stream = TcpStream::connect(&self.addr)?;
        Ok(ConnectionWrapper::new(Box::new(TcpConnection::new(stream))))
    }
}

struct ParentProcessConnection {
    child: Child,
    stream: TcpStream,
}

struct TcpConnection {
    stream: TcpStream,
}

impl ParentProcessConnection {
    pub fn new(child: Child, stream: TcpStream) -> Self {
        Self { child, stream }
    }
}

impl Connection for ParentProcessConnection {
    fn stream(&self) -> &TcpStream {
        &self.stream
    }

    fn close(&mut self) -> Result<i32> {
        let status = self.child.wait()?;
        Ok(status.code().unwrap_or_default())
    }

    fn try_clone(&self) -> Result<Box<dyn Connection>> {
        unimplemented!()
    }
}

impl TcpConnection {
    pub fn new(stream: TcpStream) -> Self {
        Self { stream }
    }
}

impl Connection for TcpConnection {
    fn stream(&self) -> &TcpStream {
        &self.stream
    }

    fn close(&mut self) -> Result<i32> {
        Ok(0)
    }

    fn try_clone(&self) -> Result<Box<dyn Connection>> {
        Ok(Box::new(Self::new(self.stream.try_clone()?)))
    }
}

fn malformed_err() -> anyhow::Error {
    anyhow!("Malformed error")
}

impl pb::api::Asset {
    fn as_bytes(&self) -> Result<Bytes> {
        let bytes = match self.kind.clone().ok_or(malformed_err())? {
            pb::api::asset::Kind::Inline(bytes) => bytes,
            pb::api::asset::Kind::Path(path) => std::fs::read(path)?,
        };
        Ok(bytes.into())
    }
}

/// Represents a binary executable or image that a zkvm can execute.
pub struct Binary {
    kind: BinaryKind,
    asset: Asset,
}

pub enum BinaryKind {
    Elf,
    Image,
}

/// Determines the format of an asset.
#[derive(Clone)]
pub enum Asset {
    /// The asset is encoded inline.
    Inline(Bytes),

    /// The asset is written to disk.
    Path(PathBuf),
}

/// Determines the format of an asset request.
#[derive(Clone)]
pub enum AssetRequest {
    /// The asset is encoded inline.
    Inline,

    /// The asset is written to disk.
    Path(PathBuf),
}

/// Provides information about the result of execution.
#[derive(Clone)]
pub struct SessionInfo {
    /// The number of user cycles for each segment.
    pub segments: Vec<SegmentInfo>,

    /// The data publicly committed by the guest program.
    pub journal: Journal,

    /// The [ExitCode] of the session.
    pub exit_code: ExitCode,
}

/// Provides information about a segment of execution.
#[derive(Clone)]
pub struct SegmentInfo {
    /// The number of cycles used for proving in powers of 2.
    pub po2: u32,

    /// The number of user cycles without any overhead for continuations or po2
    /// padding.
    pub cycles: u32,
}

impl Binary {
    /// Construct a [Binary] from raw ELF bytes.
    pub fn new_elf_inline(bytes: Bytes) -> Self {
        Self {
            kind: BinaryKind::Elf,
            asset: Asset::Inline(bytes),
        }
    }

    /// Construct a [Binary] from an ELF on disk specified by the `path`.
    pub fn new_elf_path<P: AsRef<Path>>(path: P) -> Self {
        Self {
            kind: BinaryKind::Elf,
            asset: Asset::Path(path.as_ref().to_path_buf()),
        }
    }

    /// Construct a [Binary] from an encoding of a [crate::MemoryImage] bytes.
    pub fn new_image_inline(bytes: Bytes) -> Self {
        Self {
            kind: BinaryKind::Image,
            asset: Asset::Inline(bytes),
        }
    }

    /// Construct a [Binary] from a [crate::MemoryImage] stored on disk
    /// specified by the `path`.
    pub fn new_image_path<P: AsRef<Path>>(path: P) -> Self {
        Self {
            kind: BinaryKind::Image,
            asset: Asset::Path(path.as_ref().to_path_buf()),
        }
    }
}

impl Asset {
    /// Return the bytes for this asset.
    pub fn as_bytes(&self) -> Result<Bytes> {
        Ok(match self {
            Asset::Inline(bytes) => bytes.clone(),
            Asset::Path(path) => std::fs::read(path)?.into(),
        })
    }
}

fn invalid_path() -> anyhow::Error {
    anyhow::Error::msg("Path must be UTF-8")
}

fn path_to_string<P: AsRef<Path>>(path: P) -> Result<String> {
    Ok(path.as_ref().to_str().ok_or(invalid_path())?.to_string())
}
