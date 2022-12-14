#!/bin/bash
gcc -Wall -Wextra -c -fPIC *.c | gcc *.o -o liball.so -shared -fPIC
