#include<stdio.h>
int main()
{
	int factorial(int a);
	int n,fac;
	printf("��n�Ľײ�,������n��ֵ     ");
	while(scanf("%d",&n)!=1)
	{
		if(scanf("%d",&n)!=1)
			printf("�������,���ٴ�����\n");
		getchar();
		scanf("%d",&n);
		getchar();
	}
	while(n<=0)
	{
		if(n<=0)
			printf("�������,���ٴ�����\n");
		getchar();
		scanf("%d",&n);
		getchar();
	}
	fac=factorial(n);
	printf("n�Ľײ���%d\n\n",fac);
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