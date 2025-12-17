#!/bin/bash
#Menu Driven Calculator

echo "simple calculator"
echo "1 for addition"
echo "2 for subtraction"
echo "3 for multiplication"
echo "4 for division"
read -p "Choose Option [1-4] " choice

read -p "Enter first number " a
read -p "Enter second number " b

case $choice in 
	1) echo "Addition is $((a+b))";;
	2) echo "Subtraction is $((a-b))";;
	3) echo "Multiplication is $((a*b))";;
	4) echo "Division is $((a/b))";;
	*) echo "Invalid choice";;
esac
