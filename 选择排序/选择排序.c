#include<stdio.h>
#define n 10
int main()
{
	int i,k,x;
	float a[n],t,min;
	printf("请输入十个数\n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);//


	for(i=0;i<n-1;i++)
	{
		for(x=i,min=a[x];x<n;x++)
		{
			if(min>=a[x])//改变大于就变成从大到小排序
			{min=a[x];k=x;} 

		}
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	for(i=0;i<10;i++)
		printf("%.0f ",a[i]);
	printf("\n");
}