#include<stdio.h>
int main()
{
	int factorial(int a);
	int n,fac;
	printf("求n的阶层,请输入n的值     ");
	while(scanf("%d",&n)!=1)
	{
		if(scanf("%d",&n)!=1)
			printf("输入错误,请再次输入\n");
		getchar();
		scanf("%d",&n);
		getchar();
	}
	while(n<=0)
	{
		if(n<=0)
			printf("输入错误,请再次输入\n");
		getchar();
		scanf("%d",&n);
		getchar();
	}
	fac=factorial(n);
	printf("n的阶层是%d\n\n",fac);
}



int factorial(int a)
{
	int z;
	if(a==1)
		z=1;
	else
	z=factorial(a-1)*a;
	return z;
}