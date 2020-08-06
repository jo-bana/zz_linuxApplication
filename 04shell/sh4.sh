#!/bin/bash

var="var1"
echo $var

function func1()
{
  local var="var2"
  echo $var
}

func1
echo $var
