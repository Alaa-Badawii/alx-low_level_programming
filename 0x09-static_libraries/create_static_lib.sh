#!/bin/bash
cat >create_static_lib.sh
gcc -c *.c
ar rc liball.a *.o
