#include<stdio.h>
int main()
{
	long double i,sum=0,term=1,j;
	for(i=1;i<=20;i++)
	{
		term=1;
		for(j=1;j<=i;j++)
			term=term*j;
		sum=sum+term;
	}
	printf("%.1f\n",sum);//���ȴ�����ʧ��ʵ�ʽ������������13
}