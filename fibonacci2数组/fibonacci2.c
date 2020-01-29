#include<stdio.h>
#define N 30
int main()
{
	int a[N],i,k;
	a[0]=1;
	a[1]=1;
	for(i=0;i<N-2;i++)
	{
		a[i+2]=a[i]+a[i+1];
	}
	for(i=0,k=0;i<N;i++)
	{
		k++;
		printf("%-10d",a[i]);
		if(k%5==0)
			printf("\n");
	}
}