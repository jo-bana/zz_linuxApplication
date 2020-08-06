#include <stdio.h>
#include <string.h>
#include "common.h"


void commandCtr(char* comStr)
{
	char num1[MAX_STR]={0};
	char num2[MAX_STR]={0};
	char opt;
	enum status aa;
	double number1,number2,result;
	aa=departWords(comStr,num1,num2,&opt);
	if(aa==COMMAND_ERROR)
	{
		errorCtr(aa);
		return;
	}
	aa=stringToNum(num1,&number1);
	if(aa==NOT_NUMBER)
	{
		errorCtr(aa);
		return;
	}
	aa=stringToNum(num2,&number2);
	if(aa==NOT_NUMBER)
	{
		errorCtr(aa);
		return;
	}
	aa=checkOperator(opt);
	if(aa==OPERATOR_UNSUPPORT)
	{
		errorCtr(aa);
		return;
	}
	aa=calculate(number1,number2,opt,&result);
	if(aa==DIV_ZERO_ERROR||aa==ERROR||aa==SAVING_ERROR)
	{
		errorCtr(aa);
		return;
	}
	printf("the result is %lf\n",result);
}
