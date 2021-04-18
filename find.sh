#!/bin/bash

echo -n "Enter the name: "
read query

echo "Name ; Address ; Phone number"
grep -i $query phonebook.txt
