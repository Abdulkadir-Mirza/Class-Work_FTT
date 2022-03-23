#!/bin/bash
#open a file and write to it
exec 3</etc/resolv.conf
#touch /media/varun/Varun/linux/output.txt
exec 4>/media/varun/Varun/linux/output.txt
#$$ gives the pid of running process
pid=$$
read -u 3 a b
echo "Current pid is: $pid"
ls -l /proc/$pid/fd
echo "$a">&4
echo "$b">&4
exec 3<&-
exec 4<&-
