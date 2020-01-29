#include<stdio.h>

int age(int x)
{
	int an,a1=18;
	if(x==1)
		an=a1;
	else
		an=age(x-1)+3;
}



int main()
{
	int n;
	printf("第一个人18岁,第n个人比第n-1个人大3岁,请问第n个人多少岁？  请输入n \n");
	scanf("%d",&n);
	printf("第n个人%d岁\n",age(n));
}