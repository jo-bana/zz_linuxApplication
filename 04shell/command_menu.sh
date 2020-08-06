#!/bin/bash
# menu interface to simple commands

echo "--------------------[Menu Command Sample]----------------------"
while true
do
 clear
 echo -e "\n [COMMAND MENU]"
 echo " a. Cuttent date and time"
 echo " b. Users currently logged in"
 echo " c. Name of the working directory"
 echo " d. Content of working directory"
 echo " e. Compare Two Character"
 echo -e " q. Quit this script\n "
 echo -n "Enter Command:"

 read answer
 if [ $answer = "q" ]
 then 
	echo "------------------------[Program End]-----------------------------"
 	exit
 fi

 if [ $answer = "a" ]
 then
 time=$(date "+%Y-%m-%d %H:%M:%S")
 echo "current date and time is ${time}"
 sleep 3
 fi

 if [ $answer = "b" ]
 then
 echo "current logged Users is: $USER "
 sleep 3
 fi

 if [ $answer = "c" ]
 then 
 work_path=$(dirname $(readlink -f $0))
 echo "Name of the working directory is: ${work_path}"
 sleep 3
 fi

 if [ $answer = "d" ]
 then 
 echo -n "Connect of the working directory is:" 
 ls $work_path
 sleep 3
 fi
 
 if [ $answer = "e" ]
 then
 echo "Please input two chars or strings"
	read a b
 	if [ "$a" = "$b" ]
	then
	echo "two characters are equal!"
 	else
 	echo "two characters are not equal!"
	fi
 sleep 3
 fi 
done
