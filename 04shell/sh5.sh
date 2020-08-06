#!/bin/bash

dir=$1

if [ -e "$dir" ]
then 
  echo "the ${dir} is exist!"
else 
  echo "the ${dir} is no exist!"
fi

if [ -f "$dir" ]
then 
  echo "the ${dir} is a file!"
else 
  echo "the ${dir} is no a file!"
fi
