#!/bin/bash
#Here ok will take tar/zip as input
if [ -z $1 ]
then
	read -p " Enter zip/tar " ok
	case $ok in
	tar)
		echo "invoking tar"
		;;
	zip)
		echo "invoking zip"
		;;
	*)
		echo "Enter a valid operation"
	esac
else
	case $1 in
	tar)
		echo "invoking tar"
		;;
	zip)
		echo "invoking zip"
		;;
	*)
		echo "Enter a valid operation"
	esac
fi
