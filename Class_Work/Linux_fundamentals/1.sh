#!/bin/bash
echo "the name of script is $0"
if [ -z $1 ]
then
	echo "No arg given, please pass username as argument to the script"
	exit 1
elif [ -n $1 ]
then
	if grep $1 /etc/passwd 1>/dev/null
		then
			echo "User $1 found"
	else
		echo "User not found"
	fi
fi
exit 1
