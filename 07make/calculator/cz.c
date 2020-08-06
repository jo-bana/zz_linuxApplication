#include <stdio.h>
#include <string.h>
#include "common.h"

enum status departWords(char *string, char *num1, char *num2, char *opt)
{
	if(!string)
	{
		return COMMAND_ERROR;
	}
	
	int i,j;
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]=='.' || (string[i]>='0' && string[i]<='9'))
		{
			num1[i]=string[i];
		}
		else
		{
			break;
		}
	}
	
	if(0==i||strlen(string)==i||i+1 == strlen(string))
	{
		return COMMAND_ERROR;
	}
	
	*opt=string[i];
	
	for(i=i+1,j=0;i<strlen(string);i++,j++)
	{
		num2[j]=string[i];	
	}
		
	return OK;
	
}
