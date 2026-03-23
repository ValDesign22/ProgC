#!/bin/sh
set -e

find . -type f -name '*.c' | while IFS= read -r src; do
    out="${src%.c}.out"
    echo "Compiling $src -> $out"
    gcc -Wall -Wextra -O2 "$src" -o "$out" -lm
done
