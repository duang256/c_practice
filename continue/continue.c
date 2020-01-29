#include<stdio.h>
int main()
{
	char i;
	printf("请输入i:\n");
	scanf("%c",&i);
	while(i!='p')
	{
		printf("输入p退出循环!");
		scanf("%c",&i);
	}
}