#include<stdio.h>
int main()
{
	int i,a,b,gys=1,gbs;
	printf("������������\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<999;i++)
	{
		if((a%i==0)&&(b%i==0))
			gys=i;
	}
		for(i=1;i<999;i++)
	{
		if((i%a==0)&&(i%b==0))
		{gbs=i;break;}
	}
	if(gys==1)
	{
		printf("û�й���������������%d",gbs);
	}
	else if(gys!=1)
	printf("��������%d  ��������%d",gys,gbs);
	putchar('\n');
}