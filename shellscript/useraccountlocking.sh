#!/bin/bash
#User Account Locking

echo "Checking for inactive user (30+days)"
inactive_user=$(lastlog -b 30 | awk 'NR>1 {print $1}')

for user in $inactive_user; do
	if [[ "$user" != "**Never" && "$user" != "Username" ]]; then
		echo "Locking account : $user"
		sudo usermod -L "$user"
	fi
done
