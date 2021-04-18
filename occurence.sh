#!/bin/bash

echo "Type a word"

read word

if grep -q -i $word myexamfile.txt; then
    grep -o -i $word myexamfile.txt | wc -l 
else
    echo "Sorry, cannot find that word"
fi
