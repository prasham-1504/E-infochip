#!/bin/bash
#To manage processes

if [ -z "$1" ] ; then
	echo "Usage $0 <process_name>"
	exit 1
fi
process_name="$1"
echo "Monitoring process '$process_name'. Press CTRl+C to exit"
while true ; do
	if ! pgrep "$process_name" > /dev/null ; then
		echo "Process '$process_name' has stopped:"
		break
	fi
	sleep 5
done


