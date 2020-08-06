#include<stdio.h>
#include<string.h>
#include"common.h"


void errorCtr(enum status aa)
{	
	
	
	if(aa==COMMAND_ERROR)
		{
			printf("The inputing string is invalid!\n");
		}
	else if(aa==NOT_NUMBER)
		{
			printf("The inputing number is invalid!\n");
		}
	else if(aa==OPERATOR_UNSUPPORT)
		{
			printf("The operator is not support!\n");
		}
	else if(aa==DIV_ZERO_ERROR)
		{
			printf("The 0 can not be divided!\n");
		}
	else if(aa==ERROR)
		{
			printf("system error!\n");
		}
	else if(aa==SAVING_ERROR)
		{
			printf("Savings_ERROR!\n");
		}
	else
		{
			printf("The parameter error!\n");
		}
	
	
}
























