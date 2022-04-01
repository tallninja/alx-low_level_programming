#!/bin/bash
gcc -g -O -c *.c
ar rc liball.a *.o
