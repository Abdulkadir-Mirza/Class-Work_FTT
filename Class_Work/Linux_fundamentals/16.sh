#!/bin/bash

if [ ! $(id -u) -eq 0 ];
then
	echo "Run the script as root!"
else
	read -p "Enter number of users to be added : " users
	for i in $(seq $users)
	do
		read -p "Enter username : " username
		read -p "Enter pass : " pass
		grep "^$username" /etc/passwd > /dev/null
		if [ $? -eq 0 ];
		then
				echo "User exists"
				exit 0
		else
			useradd -m -p "$pass" "$username"
			[ $? -eq 0 ] && echo "User added!" || echo "Failed"
		fi
	done
fi
