#include <stdio.h>
void main()
{
 float a=2,b=1,tmp=0,sum=0;
 int n;
 printf("please input a number:");
 scanf("%d",&n);
 for(;n>0;n--)
{
 sum+=a/b;
 tmp=a;
 a+=b;
 b=tmp;
}
 printf("the result:%f\n",sum);
}

 
