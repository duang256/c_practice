#include<stdio.h>
int main()
{
	int i,a,b,gys=1,gbs;
	printf("请输入两个数\n");
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
		printf("没有公因数，公倍数是%d",gbs);
	}
	else if(gys!=1)
	printf("公因数是%d  公倍数是%d",gys,gbs);
	putchar('\n');
}