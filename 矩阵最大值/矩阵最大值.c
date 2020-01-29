#include<stdio.h>
int main()
{
	int a[3][4]={{54,6,5,65},{54,6,5,65},{87,8,76,98}};
	int i,j,max=a[0][0],m,n;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				m=i+1,n=j+1;
			}
		}
		printf("最大值是%d  第%d行%d列\n",max,m,n);
}