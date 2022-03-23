#!/bin/bash
#Append text to a file
echo "Hello" > hello.txt
echo "There" >> hello.txt
cat hello.txt
#Convert lowercase to upper, append it to hello
tr "[a-z]" "[A-Z]" < hello.txt >> hello.txt
echo "After appending"
cat hello.txt
