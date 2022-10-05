#!/bin/bash

gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 main.h *.c
ar -rc liball.a *.o
ranlib liball.a
