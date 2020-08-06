#include <stdio.h>

#define MAX_SIZE 256

const char week[]={"Sun\tMon\tTus\tWed\tThu\tFri\tSat\n"};
const char monthName[][MAX_SIZE]={
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"};
int month_day[]={31,28,31,30,31,30,31,31,30,31,30,31};


int isLeapYear(int year)
{
	if((year%4==0 && year%100!=0)||year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int getDatesFromDate(int year,int month,int date)
{
	int dates=0;
	int i;
	if(isLeapYear(year))
	{
		month_day[1]=29;
	}
	else
	{
		month_day[1]=28;
	}
	for(i=0;i<month-1;i++)
	{
		dates+=month_day[i];
	}
	dates+=date;
	return dates;
}

// 1: mon
// 2: tus
// 3: wed
// 4: thur
// 5: fri
// 6: sat
// 0: sun
int getDayFromDate(int year,int month,int date)
{
	int dates = ((year-1900)*365)+(year-1901)/4;
	dates+=getDatesFromDate(year,month,date);
	return (dates%7);	
}

void drawCalendar(int year)
{
	int i,j,k,weekday,flag=0;
	weekday=getDayFromDate(year,1,1);
	for(i=0;i<12;i++)
	{
		printf("-----------------  %s  -----------------\n",
			monthName[i]);
		printf("%s",week);
		for(j=1,k=0,flag=0;j<=month_day[i];k++,j++)
		{
			if(0==flag&&weekday>k)
			{
				printf("\t");
				j--;
				continue;
			}
			flag=1;
			printf("%d\t",j);
			if(k==6)
			{
				printf("\n");
				k=-1;
			}	
		}
		weekday=k;
		printf("\n");
	}
}


void main()
{
	int year;
	while(1)
	{
		printf("**************Calendar***************\n");
		printf("please input year:");
		scanf("%d",&year);
		if(year<1900)
		{
			printf("you input error!\n");
			printf("please input the year after 1900\n");
			continue;
		}
		drawCalendar(year);
	}
}
