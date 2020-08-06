#include <stdio.h>

int sum(int a)
{
	int i,j;
	for(i=1,j=0;i<=a;i++)
	{
		j+=i;
	}
	return j;
}

void main()
{
	int a,result;
	printf("please input a integer!\n");
	scanf("%d",&a);
	result=sum(a);
	printf("the %d add result is %d\n",a,result);
}
