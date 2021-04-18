#!/bin/bash

echo "Enter number of days"
read number

find /home/ykim135 -iname "*" -atime $number -type f | zip compress -@ 
