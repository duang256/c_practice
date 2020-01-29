#include#include<stdio.h>
int main()
{
	int a[10]={4,5,43,53,4,34,56,43,77,5};
	int i,j,t;
	int x,m;
	int mid,low,high;


	for(i=0;i<9;i++)//排序
	{
		for(j=i;j<10;j++)
		{
			if(a[i]>a[j])
			{t=a[i];a[i]=a[j];a[j]=t;}
		}
	}


	for(i=0;i<10;i++)//输出正确排序
	{
		printf("%5d",a[i]);
		if((i+1)%5==0)
			printf("\n");
	}




	printf("请您输入要查找的数\n");//输入查找数字
	while(scanf("%d",&x)!=1)
	{
		if(scanf("%d",&x)!=1)
			printf("请输入正整数!\n");
			scanf("%d",&x);
			getchar();
	}

	low=0;
	high=9;
	mid=high/2;
					
while(high>=low)
{
		if(x<a[mid])//在数组中进行选择
		{
			low=0;
			high=mid-1;
			mid=mid/2;
		}
		else if(x>a[mid])
		{
			low=mid+1;
			mid=(mid+high)/2;
		}
		else
		{
			m=mid;break;
		}
}

		if(high>=low)
			printf("这个数在数组中为a[%d]\n",m);


		else
			printf("数组中没有这个数\n");







}
	
}