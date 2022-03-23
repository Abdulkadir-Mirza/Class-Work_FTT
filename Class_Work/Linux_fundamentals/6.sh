#!/bin/bash

f=/etc/passwd

while IFS=: read -r user pass uid gid home shell 

do
	[ $uid -ge 500 ] && echo "$user has $gid"

done < "$f"
