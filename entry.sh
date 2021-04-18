#!/bin/bash

echo -n "Enter the name: "
read name

echo -n "Enter the address: "
read address

echo -n "Enter the phone number: "
read telephone_number
 
echo -n "$name ; $address ; $telephone_number" >> phonebook.txt

