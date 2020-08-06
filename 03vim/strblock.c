#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 256

void strblock(char *srcStr,char desStr[MAX_STRING][MAX_STRING],char block)
{
	int a,b,c=0;
	int len;
	len=strlen(srcStr);
	for(a=0,b=0;b<len;b++)
	{		 				
			if(srcStr[b]!=block)
			{
				desStr[a][c]=srcStr[b];
				c++;
			}
			else
			{				
				a++;
				c=0;
			}			
	}		
}

