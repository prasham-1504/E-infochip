#!/bin/bash

#Using Switch Case

echo "Choose an option"
echo "a=to print date and time"
echo "b=to print current working directory"
echo "c=list all the files"

read choice

case $choice in 
	a) date;;
	b) pwd;;
	c) ls;;
	*) echo "Invalid option"
esac
