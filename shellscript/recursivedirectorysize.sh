#!/bin/bash
#Recursive Directory size Calculator

if [ -z "$1" ] ; then
	echo "usage : $0 <directory_path>"
	exit 1
fi
directory_path="$1"
if [ ! -d "$directory_path" ]; then
	echo " '$directory_path'Invalid directory path"
	exit 1
fi

echo "Calculating the size of directory '$directory_path'"
total_size=$(du -sh "$directory_path" | cut -f1)
echo "Total size of directory is '$total_size'"
