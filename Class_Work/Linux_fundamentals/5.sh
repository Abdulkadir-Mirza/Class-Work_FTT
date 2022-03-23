#!/bin/bash

pwd
for file in 'ls /media/varun/Varun/linux/*.sh'
do
	#echo "$file"
	$file
#	echo "$1"
done

#for k in $(cat /etc/passwd)
#do
#	echo "$k"
#done
