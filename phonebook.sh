#!/bin/bash

x=0
while [ $x -ne 1 ]
do
    echo -e "add, find, delete, exit: "
    read input

    if [ "$input" = "add" ]
    then
        /home/ykim135/entry.sh
    elif [ "$input" = "find" ]
    then
        /home/ykim135/find.sh
    elif [ "$input" = "delete" ]
    then 
        /home/ykim135/delete.sh
    elif [ "$input" = "exit" ]
    then 
        x=1
    fi
done

exit 0
