#include#include<stdio.h>
int main()
{
	int a[10]={4,5,43,53,4,34,56,43,77,5};
	int i,j,t;
	int x,m;
	int mid,low,high;


	for(i=0;i<9;i++)//����
	{
		for(j=i;j<10;j++)
		{
			if(a[i]>a[j])
			{t=a[i];a[i]=a[j];a[j]=t;}
		}
	}


	for(i=0;i<10;i++)//�����ȷ����
	{
		printf("%5d",a[i]);
		if((i+1)%5==0)
			printf("\n");
	}




	printf("��������Ҫ���ҵ���\n");//�����������
	while(scanf("%d",&x)!=1)
	{
		if(scanf("%d",&x)!=1)
			printf("������������!\n");
			scanf("%d",&x);
			getchar();
	}

	low=0;
	high=9;
	mid=high/2;
					
while(high>=low)
{
		if(x<a[mid])//�������н���ѡ��
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
			printf("�������������Ϊa[%d]\n",m);


		else
			printf("������û�������\n");







}
	
}