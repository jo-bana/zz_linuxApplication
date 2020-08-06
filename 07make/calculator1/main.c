#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "common.h"
const char operator_system[MAX_STR]={'+','-','x','/','^','%'};

void main()
{
	char command[MAX_STR];
	welcomeAndBye(0);
	while(1)
	{
		printf("_>");
		memset(command,0,sizeof(command));
		gets(command);
		if(0==strcmp("quit",command))
		{
			break;
		}
		commandCtr(command);
	}
	welcomeAndBy(1);	
}
