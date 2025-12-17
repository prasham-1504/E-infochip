#!/bin/bash
#Loops

#for i in {1...20}
#do
#	echo $i
#done

#i=100;
#while [ $i -ge 0 ] ;
#do
#echo Counting down, from 100 to 0, now at $i;
#let i--;
#done

let i=100;
until [ $i -le 0 ] ;
do
echo Counting down, from 100 to 1, now at $i;
let i--;
done
