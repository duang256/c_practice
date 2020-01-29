#include<stdio.h>
int main()
{
	void reserve(int *x,int n);
	int i,a[10];
	printf("请输入十个数\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%5d",*(a+i));
	printf("\n");
	reserve(a,10);
		for(i=0;i<10;i++)
		printf("%5d",*(a+i));
		printf("\n");

}
void reserve(int *x,int n)
{
	int *p,temp,*i,*j,m;
	m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;
	for(;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}