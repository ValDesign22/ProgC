#!/bin/sh
set -e

find . -type f -name '*.c' | while IFS= read -r src; do
  out="${src%.c}.out"

  if [ ! -f "$out" ] || [ "$src" -nt "$out" ]; then
    echo "Compiling $src -> $out"
    gcc -Wall -Wextra -O2 "$src" -o "$out" -lm
  else
    echo "Skipping $src (up to date)"
  fi
done
