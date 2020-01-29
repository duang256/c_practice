#include<stdio.h>
int main()
{
	float accept(float *p);
	float average(float *p1);
	float max(float *p2);
	float min(float *p3);
	float score[10]={88,78,87,98,100,67,76,66,77,56};
	accept(score);
}

float accept(float *p)
{
	float pin,m,n;
	pin=average(p);
	m=max(p);
	n=min(p);
	printf("pin=%.1f\nmax=%.1f\nmin=%.1f\n",pin,m,n);
}

float average(float *p1)
{
	float sum=0,pin;
	int i;
	for(i=0;i<10;i++,p1++)
	{
		sum+=*p1;
	}
	pin=sum/10;
	return pin;
}
float max(float *p2)
{
	int i;
	float m=*p2;
	for(i=0;i<10;i++,p2++)
	{
		m=m>*p2?m:*p2;
	}
	return m;
}
float min(float *p3)
{
	int i;
	float n=*p3;
	for(i=0;i<10;i++,p3++)
	{
		n=n<*p3?n:*p3;
	}
	return n;
}