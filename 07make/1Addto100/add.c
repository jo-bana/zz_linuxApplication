#include <stdio.h>
#define N 100   //const int N=100;
int main(void)
{
    int sum=0;
	//��1�ź�������ۼӺ�����
	sum=method1(N);
	printf("method1:1 to %d sum:%d\n",N,sum);
	//��2�ź�������ۼӺ�����
	sum=method2(N);
	printf("method2:1 to %d sum:%d\n",N,sum);
	//��3�ź�������ۼӺ�����
	sum=method3(N);
	printf("method3:1 to %d sum:%d\n",N,sum);
}
#if 0
int method1(int maxValue)/*forѭ��*/
{
    int s=0,i=0;	
	for(i=1;i<=maxValue;i++)
    {
       s+=i;      //s=s+i
	}
	return s;
}

int method2(int maxValue)/*�ݹ�*/
{
    if(1==maxValue)   /* ����ϰ��*/
    {
      return 1;
    }
    return(maxValue+method2(maxValue-1));
}

int method3(int maxValue)/*��ʽ*/
{
return maxValue*(maxValue+1)/2;
}
#endif
