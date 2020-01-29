#include<stdio.h>
int main()
{
	int a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};
	int sum,j,i;
	float pin;
	for(i=0;i<3;i++)//表示科目0=math  1=C  2=foxprop
	{
		for(j=0,sum=0;j<5;j++)//学生
		{
			sum=sum+a[j][i];
		}
		if(i==0)
			printf("mathp=%.1f\n",sum/5.0);
		if(i==1)
			printf("Cp=%.1f\n",sum/5.0);
		if(i==2)
			printf("Foxprop=%.1f\n",sum/5.0);
	}
}