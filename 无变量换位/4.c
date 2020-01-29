#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	getchar();
	scanf("%d",&b);
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	printf("%d %d\n",b,a);



}