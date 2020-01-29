#include<stdio.h>

int cla(int x)
{
	int an(int y);
	int sum=0,i;
	for(i=1;i<=x;i++)
		sum=sum+an(i);
	return sum;
}
int an(int y)
{
	int z;
	if(y<0)
		printf("error!");
	else if(y==1)
		z=1;
	else 
	z=y*an(y-1);
	return z;
}


int main()
{
	int n;
	printf("求解n的阶层和,请输入n的值\n");
	scanf("%d",&n);
	if(cla(n)>0)
	printf("%d的阶层和为%d\n",n,cla(n));
}