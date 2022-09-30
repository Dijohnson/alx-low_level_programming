#!/bin/bash
gcc -wall -pendantic -werro -wextra -c *.c
ar rc liball.a *.o
