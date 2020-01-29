#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=40-i;j++)
		{
			printf(" ");
		}
		for(a=1;a<=2*i-1;a++)
		{
			printf("*");
		}
		printf("\n");
	}
}