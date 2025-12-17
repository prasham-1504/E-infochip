#!/bin/bash

#String Operation

myvar="Hello This is the best Thing to happen"
echo "Length of string is ${#myvar}"
echo "In uppercase ${myvar^^}"
echo "In lowercase ${myvar,,}"

echo "${myvar/happen/happened}"
