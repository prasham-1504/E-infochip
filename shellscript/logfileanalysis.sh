#!/bin/bash
#Log File Analyzer

read -p "Enter log file path" logfile
echo "Top 5 IP address"
awk '{print $1}' "$logfile" | sort | uniq -c | sort -nr | head -5
echo "Number of failed login attempts"
grep -i "Failed" "$logfile" | wc -l
