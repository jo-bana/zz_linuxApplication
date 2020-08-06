#include <stdio.h>
#include <stdlib.h>


void welcomeAndBye(int i)
{
	if(i==0)
	{
		system("clear");
	}
	printf("**************************************\n");
	printf("*********     ***********     ********\n");
	printf("*******           ***          *******\n");
	printf("******             *             *****\n");
	printf("******                           *****\n");
	if(i==0)
	{
		printf("******          welcome          *****\n");
	}
	else
	{
		printf("******            bye            *****\n");
	}
	printf("*******                         ******\n");
	printf("********                      ********\n");
	printf("***********                 **********\n");
	printf("**************           *************\n");
	printf("*****************     ****************\n");
	printf("******************* ******************\n");
}
