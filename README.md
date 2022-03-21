# Practice
This project is for practicing of calling Rust function in c++

# Explain
1. Set up Cargo.toml to build dynamic library in rust.
2. To do this, add libc in depandency table and crate-types in lib table.
3. Cargo build, then libfoo.dylib file will be created in ./target/debug
4. Declear and call the rust function in writing C file.
5. build C file with dylib path option which c compiler needs for linking.
6. execute created binary excutable file.

# Automation
For easy build, just execute complie.sh

