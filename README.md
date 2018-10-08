# little-heart: a tiny IBAMR application

## Overview

This repository is a sample application demonstrating how one can build an IBAMR
application that is configured with GNU autotools. Try the following:

    mkdir build
    cd build
    ../configure --with-ibamr-source-directory=(...) --with-ibamr-build-directory=(...)
    make
    ./heart2d ../input2d

where each `(...)` is replaced by the correct path.

## Caveats

Weird things may happen if you do not use the same compilers and MPI
implementation when building this library as you did when compiling IBAMR.
