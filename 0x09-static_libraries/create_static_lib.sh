#!/bin/bash

# Collect all .c files in current directory
c_files=$(ls *.c)

# Compile all .c files into object files
for c_file in $c_files
do
  gcc -Wall -Werror -Wextra -pedantic -c "$c_file"
done

# Create static library from object files
ar -rc liball.a *.o

# Index static library
ranlib liball.a

# Clean up object files
rm *.o

