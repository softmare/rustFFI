#!/bin/bash
cargo build
g++ src/main.cc -o ./target/debug/hello -l foo -L ./target/debug/ -Wl,-rpath,./target/debug/
echo build is done. Execute ./target/debug/hello