#!/bin/bash
#Function script

function to_lower() 
{
local str="$@"
echo "Value of str is $str"
local output
output=$(tr '[A-Z]' '[a-z]'<<<"$str")
echo $output
}
