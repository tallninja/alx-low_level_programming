#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -c -fPIC
gcc *.o -shared -o liball.so
