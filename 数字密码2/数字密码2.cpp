#include<stdio.h>//����2.0
#include<string.h>
#define N 20
int main()
{

	char in[N],key[]="marry christmas!";
	int i,n,k;
	printf("����������\n");
	for(i=0,n=0;i<3;i++)
	{
		n++;
		gets(in);
		k=strcmp(key,in);
		if(k==0)
		{printf("��ӭ����!\n");break;}
		else
			printf("����������ٴ�����!\n");
		if(n==3)
			printf("���Ĳ�������Ƶ�������Ժ�����!\n");
	}
}