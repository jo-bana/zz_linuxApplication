#include <stdio.h>
#include <string.h>
#include "common.h"

double add(double number1,double number2)
{	
	return(number1+number2);
}

double sub(double number1,double number2)
{
 	return(number1-number2);
}

double mul(double number1,double number2)
{
    return (number1*number2);
}

int res(int number1,int number2)
{
	return number1%number2;
}

double div(double number1,double number2)
{
	return (number1/number2);
}

double sqr(double number1,double number2)
{
	double result=1;
	int i;
	if(number2==0)
	{
		return 1; 
	}
	else
	{
		for(i=1;i<=number2;i++)
		{
		  	result*=number1;	
		}
		return result;
	}
}

enum status calculate(double a,double b, char c,double *result)
{
	switch (c)
	{
		case '+':
		{
			*result=add(a,b);
		}
		break;
		case '-':
		{
			*result=sub(a,b);
		}
		break;	
		case 'x':
		{
			*result=mul(a,b);
		}
		break;	
		case '/':
		{   
			if(b>=(-1e-6)&&b<(1e-6))
			{
			 	return DIV_ZERO_ERROR;
			}	
			*result=div(a,b);
		}
		break;	
		case '%':
		{
			if(b>=(-1e-6)&&b<(1e-6))
			{
			 	return DIV_ZERO_ERROR;
			}	
			int f;
			int h;
			f=(int)a;
			h=(int)b;
		   *result=res(f,h);
		}
		break;	
		case '^':
		{   
           int f;
		   f=(int)b;
		   if(f==0)
		   {
		   		return  DIV_ZERO_ERROR;
		   }
		   *result=sqr(a,b);
			
		}
		break;
		default:
		{
			return ERROR;
		}
	}
    return OK;
}
