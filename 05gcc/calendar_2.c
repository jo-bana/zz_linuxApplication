#include <stdio.h>

#define MAX_SIZE 256

const char week[]={"Sun  Mon  Tus  Wed  Thu  Fri  Sat"};
const char monthName[][MAX_SIZE]={
	"Jan",
	"Feb",
	"Mar",
	"Apr",
	"May",
	"Jun",
	"Jul",
	"Aug",
	"Sep",
	"Oct",
	"Nov",
	"Dec"};
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
	int dates=
((year-1900)*365)+(year-1901)/4
-(year-1901)/100+(year-1601)/400;
	dates+=getDatesFromDate(year,month,date);
	return (dates%7);	
}

void drawCalendar(int year)
{
	int i,j,k,weekday1,weekday2;
	int flag11=0,flag12=0;
	int flag21=0,flag22=0;
	int date1=1,date2=1;
	weekday1=getDayFromDate(year,1,1);
	weekday2=getDayFromDate(year,7,1);
	for(i=0;i<6;i++)
	{
		printf("--------------- %s ---------------\t",
			monthName[i]);
		printf("--------------- %s ---------------\n",
			monthName[i+6]);
		printf("%s\t%s\n",week,week);
		flag11=0;
		flag12=0;
		flag21=0;
		flag22=0;
		date1=1;
		date2=1;
		while(!(flag12==1 && flag22==1))
		{
			for(j=0;j<7;j++)
			{
				if(0==flag11&&weekday1>j||1==flag12)
				{
					printf("     ");
				}
				else
				{	
					flag11=1;
					printf("%3d  ",date1);
					if(date1 == month_day[i])
					{
						flag12=1;
						weekday1=(j+1)%7;
					}
					date1++;
				}
			}
			printf("\t");
			for(j=0;j<7;j++)
			{
				if(0==flag21&&weekday2>j||1==flag22)
				{
					printf("     ");
				}
				else
				{
					flag21=1;
					printf("%3d  ",date2);
					if(date2 == month_day[i+6])
					{
						flag22=1;
						weekday2=(j+1)%7;
					}
					date2++;
				}
			}
			printf("\n");
		}
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
