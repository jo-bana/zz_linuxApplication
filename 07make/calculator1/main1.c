#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

void main()
{
	char num;
	double number=0;
	printf("_>");
	scanf("%s",&num);
	stringToNum(num,number);
	printf("result:%f\n",number);
}
