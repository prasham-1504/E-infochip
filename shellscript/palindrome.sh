#!/bin/bash
#Palindrome checker

echo "Enter the string"
read string
rev=$(echo "$string" | rev)

if [[ "$string" == "$rev" ]]; then
	echo "They are palindrome"
else
	echo "Not palindrome"
fi
