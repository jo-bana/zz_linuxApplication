#include <stdio.h>
#include <string.h>
#include "common.h"

enum status stringToNum(char *string,double* number)
{
	int i,k=0;
	double l=0,j=0,o=10;
	for(i=0;i<strlen(string);i++)
	{
		if((string[i]<'0'||string[i]>'9')&&string[i]!='.')
		{
			return NOT_NUMBER;
		}
		else if(string[i]=='.'||k==1)
		{
			k=1;
			if(i+1==strlen(string))
			{
				break;
			}
			l=l+(string[i+1]-'0')/o;
			o=o*10;
		}
		else if(string[i]>='0'&&string[i]<='9'&&k==0)
		{
			j=j*10+string[i]-'0';
		}
	}
	*number=j+l;
	return OK;
}
