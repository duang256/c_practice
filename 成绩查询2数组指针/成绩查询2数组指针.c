#include<stdio.h>
int main()
{
	int source(int *p0,int m0,int n0);
	int average(int *p1,int m1,int n1);
	int search(int (*p3)[4],int m3,int n3);
	int put(int (*p2)[4],int n2,int kk);

	int m=3,n=4;
	int k;
	int a[3][4]={{64,65,66,76},{87,78,89,94},{43,54,55,56}};

	source(a[0],m,n);    //��ʾ����ͬѧ����
	average(a[0],m,n);
	search(a,m,n);       //�ҳ�������ͬѧ

	printf("������Ҫ��ѯͬѧ��ѧ��\n");//��ѯ����
	scanf("%d",&k);
	put(a,n,k);      
}



int source(int *p0,int m0,int n0)
{
	int i;
	for(i=0;i<m0*n0;i++,p0++)
	{
		printf("%5d",*p0);
		if((i+1)%n0==0) printf("\n");
	}
	printf("\n");
}


int average(int *p1,int m1,int n1)
{
	int i;
	float s=0;
	for(i=0;i<m1*n1;i++)
	{
		s+=*p1++;
	}
	printf("����ͬѧ��ƽ������%.1f(����һλС��)\n",s/(m1*n1));
}


int search(int (*p3)[4],int m3,int n3)
{
	int i,j;
	for(i=0;i<m3;i++)
		for(j=0;j<n3;j++)
			if(p3[i][j]<60)
			{
				printf("�������ͬѧ����:\n");
				put(p3,n3,i);break;
			}
}





int put(int (*p2)[4],int n2,int kk)
{
	int i;
	printf("%d:",kk);
	for(i=0;i<n2;i++)
	printf("%5d",*(*(p2+kk)+i));
	printf("\n");
}