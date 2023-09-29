#!/bin/bash

# Compile all .c files in the current directory and create a static library liball.a

# Create an object file for each .c file
for source_file in *.c; do
    object_file="${source_file%.c}.o"
    gcc -Wall -Werror -Wextra -c "$source_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $source_file"
        exit 1
    fi
done

# Create the static library liball.a from all object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up intermediate object files
rm -f *.o

echo "Static library liball.a created successfully."

