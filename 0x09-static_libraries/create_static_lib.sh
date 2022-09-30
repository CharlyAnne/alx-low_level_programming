#!/bin/bash
gcc -Wall -Werror -Wextra -pendantic -c *.c
ar -rc liball.a *.o
