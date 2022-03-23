#!/bin/bash
#Testing Commandline Arguments

arg() {
echo "Name of the script is $0"
echo "First Argument is $1"
echo "Second Argument is $2"
echo "Total No. of Arguments passed $#"
#echo "Value of Arguments are $*"
echo "Value of Arguments are $@"
}

echo "Invoking Function"
arg kia tata hii

