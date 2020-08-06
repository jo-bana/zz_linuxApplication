#include <stdio.h>

#define LINUX

#ifndef LINUX
	#define WORLD "C World\n"
#else
	#define WORLD "LNIUX C World\n"
#endif

void main()
{
 	printf("%s",WORLD);
	#ifdef LINUX
	printf("please input a number:");
	int a=0,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<=1;i++)
	{
		sum+=i;
	}
	printf("the sum result:%d",sum);

	#else
	
	printf("please input a number:");
	int a=0,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<=1;i++)
	{
		sum*=i;
	}
	printf("the sum result:%d",sum);
	#endif
}
