#!/bin/sh

set -xe

# clang -Wall -Wextra -o ./outputs/twice twice.c
# clang -Wall -Wextra -o gates gates.c
gcc gates.c -o ./outputs/gates -lm
gcc twice.c -o ./outputs/twice -lm