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
	printf("���n�Ľײ��,������n��ֵ\n");
	scanf("%d",&n);
	if(cla(n)>0)
	printf("%d�Ľײ��Ϊ%d\n",n,cla(n));
}