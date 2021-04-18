#!/bin/bash

echo "Enter the name: "
read name

sed -i '/$name/d' phonebook.txt
