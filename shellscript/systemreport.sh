#!/bin/bash
#System health Report

report_date=$(date +%Y-%m-%d)
filename="system_health_report $report_date.txt"
echo "Generating system health report"
{
echo "### System Health Report ###"
echo "Date: $(date)"
echo 
echo "CPU usage"
top -bn1 | grep "cpu(s)"
echo 
echo "Memory Usage"
free -h
echo "Disk Usage"
df -h
echo 
echo "Uptime info"
uptime
echo
} > "$filename"
echo "Report saved in $filename"
