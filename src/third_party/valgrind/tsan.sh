#!/bin/bash
DIR="$(dirname "$0")"
NACL_DANGEROUS_SKIP_QUALIFICATION_TEST=1 \
NACLENV_LD_PRELOAD=libvalgrind.so \
"$DIR/bin/tsan" --suppressions="$DIR/nacl.supp" --ignore="$DIR/nacl.ignore" "$@"
