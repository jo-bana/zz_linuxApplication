#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
//显示系统当前的时间
int main()
{
	while(1)
	{
	 time_t t;
	 struct tm *lt;
	 time(&t);
	 lt = localtime(&t);
	 printf("\r%d/%d/%d/ %02d:%02d:%02d",lt->tm_year+1900,lt->tm_mon+1,lt->tm_mday,lt->tm_hour,lt->tm_min,lt->tm_sec);
	 fflush(stdout);
	 sleep(1);
	}
 return 0;
}



