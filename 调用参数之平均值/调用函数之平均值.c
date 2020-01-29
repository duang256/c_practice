#include<stdio.h>
int main()
{
	float average(float x[]);
	int i;
	float score[10],pin;
	printf("Please input 10 numbers\n");
	for(i=0;i<10;i++)
	scanf("%f",&score[i]);
	pin=average(score);
	printf("%.1f\n",pin);
}


    float average(float x[])
	{
		float sum=0,y;
		int i;
		for(i=0;i<10;i++)
		{
			sum+=x[i];
		}
		y=sum/10;
		return y;
	}