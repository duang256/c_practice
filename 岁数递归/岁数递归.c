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
	printf("��һ����18��,��n���˱ȵ�n-1���˴�3��,���ʵ�n���˶����ꣿ  ������n \n");
	scanf("%d",&n);
	printf("��n����%d��\n",age(n));
}