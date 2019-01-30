# C Examples

ANSI C examples from
[The C Programming Language - Second Edition](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628) 
by Brian W. Kernighan and Dennis M. Ritchie, also known as K&R.

Examples adapted for use with [GCC](https://en.wikipedia.org/wiki/GNU_Compiler_Collection), developed and tested on an Ubuntu 14.04.4 LTS.

Some examples provided to further clarify my own understanding of
how certain methods operate.

## Installation

To make use of these examples, you'll need to install `gcc` and `make`.

### Linux

```shell
sudo apt-get install gcc
sudo apt-get install make
```

### Mac

```shell
brew install gcc
brew install make
```

## Makefiles

A utility known as `make` automates the process of compiling your
C code into an executable file. It is designed to simplify very complex
compilation processes. I am using it here to simplify even
the simple process of compiling these examples.

When a directory has a `Makefile` present, the `make` utility
uses the configuration inside of the `Makefile` to perform certain tasks.

Tasks:
* `make` - Compiles the 'main' executable into machine code in the current directory
* `make clean` - Deletes the 'main' executable from the current directory
