#!/bin/bash
C_FILES=$(find . -maxdepth 1 -type f -name "*.c")

for SOURCE_FILE in $C_FILES; do
FILE_NAME=$(basename -s .c "$SOURCE_FILE")
gcc -c "$SOURCE_FILE" -o "${FILE_NAME}.o"
ar rcs liball.a "${FILE_NAME}.o"
rm "${FILE_NAME}.o"
done
echo "Static library liball.a created successfully."
