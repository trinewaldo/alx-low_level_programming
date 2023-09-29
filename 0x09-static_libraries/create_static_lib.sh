#!/bin/bash

# Find all .c files in the current directory
C_FILES=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file and add it to the library
for SOURCE_FILE in $C_FILES; do
    # Extract the file name without the extension
    FILE_NAME=$(basename -s .c "$SOURCE_FILE")
    
    # Compile the .c file into an object file
    gcc -c "$SOURCE_FILE" -o "${FILE_NAME}.o"
    
    # Add the object file to the library
    ar rcs liball.a "${FILE_NAME}.o"
    
    # Clean up the temporary object file
    rm "${FILE_NAME}.o"
done

echo "Static library liball.a created successfully."
