#include<stdio.h>
int main()
{
	int n1=1,n2=1,i,max;
	scanf("%d",&max);
	for(i=1;i<=max;i++)//输出个数是max的倍数
	{
		printf("%d %d ",n1,n2);
		n1=n2+n1;
		n2=n2+n1;
	}
	printf("\n");
}