#include<stdio.h>
#define n 10
int main()
{
	int i,x;
	float a[n],tran;
	printf("请输入十个数\n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);//输入部分

	for(i=0;i<n-1;i++)
	{
		for(x=0;x<n-i-1;x++)
		{
			if(a[x]>a[x+1])
			{tran=a[x+1];a[x+1]=a[x];a[x]=tran;}
		}
		
	}
	for(i=0;i<10;i++)
		printf("%.0f ",a[i]);
	getchar();
}
