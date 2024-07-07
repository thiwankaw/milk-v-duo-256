# milk-v-duo-256

## Introduction
Testing milk-v duo 256 board

## Default Credentials
- **Username:** root
- **Password:** milkv

## Specifications
- **Documentation and Default Image:** [milk-v-duo-256 Documentation](https://milkv.io/docs/duo/resources/image-sdk)

## Processor Information
Run the following command to get processor information:
```bash
cat /proc/cpuinfo 

processor   : 0
hart        : 0
isa         : rv64imafdvcsu
mmu         : sv39

cat /proc/version

Linux version 5.10.4-tag- (root@06883d61fb65) (riscv64-unknown-linux-musl-gcc (Xuantie-900 linux-5.10.4
musl gcc Toolchain V2.6.1 B-20220906) 10.2.0, GNU ld (GNU Binutils) 2.35) #1 PREEMPT Tue May 28 20:45:31 CST 2024

free -m

              total        used        free      shared  buff/cache   available
Mem:           166          15         142           0           9         145
Swap:            0           0           0

You can add this directly to your README file. Just ensure to paste it into a Markdown editor or a
platform that supports Markdown format to maintain the intended styling.
