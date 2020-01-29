#include<stdio.h>
int main()
{
	int a[10],b[10],n=0,m=0,k=0,i,x;
	printf("Please input array a");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("Please input array b");
	for(i=0;i<10;i++)
	scanf("%d",&b[i]);
	for(i=0;i<10;i++)
	{
		x=large(a[i],b[i]);
		if(x==1) n++;
		if(x==0) m++;
		if(x==-1) k++;
	}
	printf("n=%d,k=%d\n",n,k);
	if(n>k)
		printf("array n is larger than array b\n");
	else if(n==k)
		printf("same\n");
	else
		printf("array a is smaller than array b\n");
	

}
    int large(int y,int z)
{
	int c;
	if(y>z)
		c=1;
	else if(y==z)
		c=0;
	else
		c=-1;
	return c;
}
