#!/bin/bash
gcc -pedantic -Werror -Wextra -Wall -fPIC *.c -shared -o liball.so
