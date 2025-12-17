#!/bin/bash

#KeyValue Pair

declare -A myarray
myarray=([name]="Prasham" [city]="Anand" [age]=30)
echo " ${myarray['name']}"
