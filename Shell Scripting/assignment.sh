#!/bin/bash

echo "Instruction"
echo "First in file name type 'GUTINDEX.ALL' then"
echo "Enter books name or author name or id no then"
echo "enter it is case sensitive or not\n"

read -p "Enter a filename: " filename
if [[ -f $filename ]] ; then
    echo "The file $filename exists. Now Search by Title, Author Name or EXT No."
    read -p "Enter Autor name/Book Title/ID: " user_input
    read -p "Case sensitive ? Yes = 1 and No = 0: " cases
    if (($cases == 1))
    	then
    	if [[ $user_input ]]; then
    	 	grep "$user_input" "$filename"
    	else
    		echo "There is no such books/author's book in our library."
    	fi
	elif ((cases == 0))
	then
		if [[ $user_input ]]; then
    	 	grep -i "$user_input" "$filename"
    	else
    		echo "There is no such books/author's book in our library."
   		fi
    fi
else
    echo "The file $filename does not exist."
fi
