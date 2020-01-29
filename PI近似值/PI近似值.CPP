#include<stdio.h>
int main()
{
	float a,i,sum=0,h;
	for(i=1,h=1;i<=99999;i=i+2)
	{
		a=h/i;
		sum=sum+a;
		h=h*(-1);
	}
	printf("%f\n",sum*4);

}