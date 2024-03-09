#!/bin/bash

# compile all .c files in the current directory and create a static library

# Collect all .c files in the current directory
c_files=$(ls *.c 2>/dev/nul)

if [ -z "$c_files" ]; then
	echo "No .c files found in the current directory."
	exit 1
fi

# compile each .c file and create corresponding .o files
for file in $c_files; do
	gcc -c $file -o ${file%.c}.o
done

# Create a static library (liball.a) from all .o fils
ar rcs liball.a *.o

# clean up: remove temporary .o files
rm -f *.o

echo "Static library liball.a created successfully."
