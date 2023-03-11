#!/bin/bash
gcc  -c -Wall -werror -Wextra *.c
ar rcs liball.a *.o
