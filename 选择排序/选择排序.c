#include<stdio.h>
#define n 10
int main()
{
	int i,k,x;
	float a[n],t,min;
	printf("������ʮ����\n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);//


	for(i=0;i<n-1;i++)
	{
		for(x=i,min=a[x];x<n;x++)
		{
			if(min>=a[x])//�ı���ھͱ�ɴӴ�С����
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