#include <stdio.h>

void main()
{
	int sum(int sum);
	int i,result=0;
	sum(100);
	for(i=1;i<=100;i++)
	{
		result+=i;
	}
	printf("the sum in main function %d\n",result);
}

int sum(int num)
{
	int i,n=0;
	for(i=1;i<=num;i++)
	{
		n+=i;
	}
	printf("the sum in sum function is %d\n",n);
}

