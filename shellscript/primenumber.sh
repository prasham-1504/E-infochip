#!/bin/bash
#To find prime number between 1 to 100

echo "Prime number between 1 to 100 are : "
for num in {2..100}
do
	prime=1
	for((i=2; i<=num/2; i++))
	do
		if(( num % i == 0))
		then
			prime=0
			break
		fi
	done
	if((prime==1))
	then 
		echo -n " $num "
	fi
done
echo

