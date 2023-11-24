#!/bin/bash
# Check if the path to the input file is provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <path_to_input_file>"
    exit 1
fi

# Path to the input file
input_file="$1"

# Check if the input file exists
if [ ! -f "$input_file" ]; then
    echo "Input file '$input_file' does not exist."
    exit 1
fi

# Execute the commands in order

# Step 1: Run Flex (lex.l)
flex lex.l
# Step 2: Run Yacc (yacc.y)
bison -d yacc.y
# Step 3: Compile the generated code
clang lex.yy.c yacc.tab.c -o a.out
# Step 4: Execute the generated program with the input file
./a.out "$input_file"

# Check if the execution was successful
if [ $? -eq 0 ]; then
    echo "Execution completed successfully."
else
    echo "Execution encountered an error."
fi
