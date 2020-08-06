#!/bin/bash

echo -n "please input three numbers:"

read a b c 
if [ $a -gt $b ]
then
  tmp1=$a
  a=$b
  b=$tmp1
fi

if [ $b -gt $c ]
then
  tmp1=$b 
  b=$c
  c=$tmp1
fi

if [ $a -gt $b ]
then
  tmp1=$a
  a=$b
  b=$tmp1
fi
echo "the numbers from min to max output is: ${a}${b}${c}"
