#include<stdio.h>//密码2.0
#include<string.h>
#define N 20
int main()
{

	char in[N],key[]="marry christmas!";
	int i,n,k;
	printf("请输入密码\n");
	for(i=0,n=0;i<3;i++)
	{
		n++;
		gets(in);
		k=strcmp(key,in);
		if(k==0)
		{printf("欢迎回来!\n");break;}
		else
			printf("密码错误，请再次输入!\n");
		if(n==3)
			printf("您的操作过于频繁，请稍后再试!\n");
	}
}