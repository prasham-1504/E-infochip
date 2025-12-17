#!/bin/bash
#Guessing the correct number
target=$(( RANDOM % 50 + 1))
while true
do
	read -p "Guess the number(1-50)" guess
	if (( guess == target )) ; then
		echo "The number is guessed perfectly $target"
		break
	elif (( guess < target )) ; then 
		echo "Too low"
	else
		echo "Too high"
	fi
done


