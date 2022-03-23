#!/bin/bash

# reading the path from user
read -p "enter the path of directory[without /home/] " path

# reading the filename starting characters from user
read -p "enter the letters consecutively from which you want to find the files " letters

# reading how much days ago last modification done
read -p "how much days before? " days_before

DAY=$(date -d "$D" '+%d') #current date
MONTH=$(date -d "$D" '+%b') #current month
final=$(($DAY-$days_before)) #last modified date = current date - days before last modification done

find $HOME/$path -type f -name "[$letters]*" -ls |grep "$MONTH $final"
