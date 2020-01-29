#include<stdio.h>
int main()
{
	int i;
	float max,min,a[10];
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	for(i=0,max=a[0],min=a[0];i<9;i++)
	{
		if(a[i+1]>max)
			max=a[i+1];
		if(a[i+1]<min)
			min=a[i+1];
	}
	printf("max=%.1f    min=%.1f\n",max,min);
}