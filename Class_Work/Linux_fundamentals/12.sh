#!/bin/bash
#open a file and write to it
exec 3<> hello.txt
exec 4</etc/passwd
date >&3
echo "ok" >&3
cat hello.txt
#cat <&4
#close the file
exec 3<&-
exec 4<&-
