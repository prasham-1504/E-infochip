#!/bin/bash

#If else

read -p "Enter your total marks " marks

if  [ $marks -gt 40 ] 
then
	echo "You are passed"
elif [ $marks -gt 70 ]
then
	echo "You Passed with distinction"
else
	echo "You are failed"
fi
