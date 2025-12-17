#!/bin/bash

#File existence

echo -n "Enter the file name"
read filename

if [ -f "$filename" ]; then  
	echo "File exist"
else
	echo "File not found"
fi
