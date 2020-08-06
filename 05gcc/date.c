#include <stdio.h>
#include <string.h>

#define MAX_STR 256
#define MAX_ITEM 16

void str_block(char *srcStr,char desStr[][MAX_STR],char block)
{
	if(!srcStr||!desStr)
	{
	 	return;
	}
	int i,j=0,k=0;
	for(i=0;srcStr[i]!='\0';i++)
	{
		if(srcStr[i]==block)
		{
			j++;
			k=0;
		}
		else
		{
		 	desStr[j][k]=srcStr[i];
			k++;
		}
	}
}

int isLeapYear(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int month_day[]={31,28,31,30,31,30,31,31,30,31,30,31};
	char date[MAX_STR]={0};
	char ymd[MAX_ITEM][MAX_STR]={0};
	int year=0,month=0,day=0,i,Alldays=0;
	printf("please input a date:");
	scanf("%s",date);
	str_block(date,ymd,'/');
	year=atoi(ymd[0]);
	month=atoi(ymd[1]);
	day=atoi(ymd[2]);
	if(isLeapYear(year))
	{
		month_day[1]=29;
	}
	for(i=0;i<month-1;i++)
	{
		Alldays+=month_day[i];
	}
	Alldays+=day;
	printf("%s is the %d day of the %d",date,Alldays,year);
	printf("\n");
		
}
