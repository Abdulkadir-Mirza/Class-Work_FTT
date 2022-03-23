#!/bin/bash
#Script to check whether user is present in /etc/passwd using function

check() {
var=$1
grep "^$1" /etc/passwd>/dev/null
status=$?
if [ $status -eq 0 ]
then
	echo "$var user found"
else
	echo "$var user not found"
fi
}
echo "Cheking user using functions"
read -p "Enter user you want to check: " usr

check $usr

