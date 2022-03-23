#!/bin/bash
if [ -z $1 ]
then
	ok=1
	while [ $ok -ne 4 ]
	do
	read -p "Enter 1 to display date/time, 2 to show hostname,3 to show network details, 4 to exit" ok
	case $ok in
	1)
		echo ""
		echo "Date is $(date)"
		echo ""
		;;
	2)
		echo ""
		echo "Hostname is $(hostname)"
		echo ""
		;;
	3)
		echo ""
		echo "Network details: $(ifconfig)"
		echo ""
		;;
	4)
		exit 1
		;;
	*)
		echo ""
		echo "Enter a valid operation"
		echo ""
		;;
	esac
	done
else
	case $1 in
	1)
		echo "Date is $(date)"
		;;
	2)
		echo "Hostname is $(hostname)"
		;;
	3)
		echo "Network details: $(ifconfig)"
		;;
	*)
		echo "Usage: 1 to show date, 2 to show hostname, 3 to show network details"
		;;
	esac
fi
