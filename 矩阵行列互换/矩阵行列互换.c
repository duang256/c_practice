#include<stdio.h>
int main()
{
	int a[4][5],j,i,b[5][4],k=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}





//***************************
		for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			b[j][i]=a[i][j];
	}
//***************************

		for(i=0;i<5;i++)
		printf("\n");




		for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			k++;
			printf("%5d",b[i][j]);
			if(k%4==0)
				printf("\n");
		}
	}






}