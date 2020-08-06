#include <stdio.h>
#include <string.h>

#define MAX_STR 256
#define COM_LEN 16

typedef struct
{
	char com_str[MAX_STR];
	void (*p)(char a[][MAX_STR],char b[MAX_STR]);
}SystemCommand;

void welcomeAndBye(int flag)
{
	printf("*************************************\n");
	printf("*************************************\n");
	if(0==flag)
	{
		printf("**welcome enter pinyin shell system**\n");
	}
	else
	{
		printf("****  pinyin shell system quit   ****\n");
	}
	printf("*************************************\n");
	printf("*************************************\n");

}

int departStr(char*str,char desStr[][MAX_STR],char block)
{
	int len;
	len=strlen(str);
	int i,count=0,j=0;
	for(i=0;i<len;i++)
	{
		if(block==str[i])
		{
			desStr[count][j]='\0';
			count++;
			j=0;
		}
		else
		{
			desStr[count][j++]=str[i];			
		}
	}
	return count+1;
}

void xsml(char comList[][MAX_STR],char *str)
{
	sprintf(str,"ls %s",comList[1]);
	if(0==strcmp(comList[2],"-All"))
	{
		strcat(str,"-a");
	}
	else if(0==strcmp(comList[2],"-List"))
	{
		strcat(str,"-l");
	}
}

void cjml(char comList[][MAX_STR],char *str)
{
	sprintf(str,"mkdir -p  %s",comList[1]);
}

void fzwj(char comList[][MAX_STR],char *str)
{
	sprintf(str,"cp -r %s %s",comList[1],comList[2]);
}

void ydwj(char comList[][MAX_STR],char *str)
{
	sprintf(str,"mv %s %s",comList[1],comList[2]);
}

void cjwj(char comList[][MAX_STR],char *str)
{
	sprintf(str,"touch %s",comList[1]);
}

void scwj(char comList[][MAX_STR],char *str)
{
	sprintf(str,"rm -r %s",comList[1]);
}

const SystemCommand Sys_command[]=
{
	{"xianshimulu",xsml},
	{"chuangjianmulu",cjml},
	{"fuzhiwenjian",fzwj},
	{"yidongwenjian",ydwj},
	{"chuangjianwenjian",cjwj},
	{"shanchuwenjian",scwj}
};//结构化，模块化

void comFunc(char comList[][MAX_STR])
{
	int i,len=sizeof(Sys_command)/sizeof(SystemCommand); 
	char commandLine[MAX_STR]={0};//装的最终命令
	for(i=0;i<len;i++)
	{
		if(0==strcmp(comList[0],Sys_command[i].com_str))
		{
			Sys_command[i].p(comList,commandLine);
			break;
		}
				#if 0
				if(0==strcmp(comList[0],"xianshimulu"))
				{
					xsml(comList,commandLine);
				}
						
				else if(0==strcmp(comList[0],"chuangjianmulu"))//chuangjianmulu
				{
					cjml(comList,commandLine);
				}
				
				else if(0==strcmp(comList[0],"fuzhiwenjian"))//fuzhiwenjian
				{
					fzwj(comList,commandLine);
				}
				
				else if(0==strcmp(comList[0],"yidongwenjian"))//yidongwenjian
				{
					ydwj(comList,commandLine);
				}
				
				else if(0==strcmp(comList[0],"chuangjianwenjian"))//chuangjianwenjian
				{
					cjwj(comList,commandLine);
				}
				
				else if(0==strcmp(comList[0],"shanchuwenjian"))//shanchuwenjian
				{
					scwj(comList,commandLine);
				}
				
				else
				{
					printf("you input error command!\n");
					return;
				}
				#endif
	
	
	}
	if(i==len)
	{
		printf("you input error command!\n");
		return;
	}
	system(commandLine);
	

}


int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("please input password!\n");
		return -1;
	}
	if(strcmp(argv[1],"goodluck"))
	{
		printf("password error!\n");
		return -1;
	}
	char commandStr[MAX_STR]={0};//接受用户输入
	char comList[COM_LEN][MAX_STR]={0};//分割成命令、参数、参数等
	int commandLength=0;
	//welcome gui
	welcomeAndBye(0);
	while(1)
	{
		memset(commandStr,0,sizeof(commandStr));
		memset(comList,0,sizeof(comList));//清空首地址
		//不清空就没有结束标记，无法输入quit退出
		printf("_>");
		gets(commandStr);//接受一个字符串
		commandLength=departStr(commandStr,comList,' ');
		if(0==strcmp(comList[0],"quit"))
		{
			break;			
		}
		comFunc(comList);
		
	}
	//bye gui
	welcomeAndBye(1);
}
