#include<stdio.h>
int main()
{
	int key[]={2,0,0,1,1,0,2,3},in[18];
	int i,a,k;
	k=sizeof(key)/sizeof(int);
	for(i=0;i<18;i++)
	{
		scanf("%d",&in[i]);
		if(getchar()=='\n')
			break;
	}
	for(i=0,a=0;i<k;i++)
	{
		if(key[i]==in[i])
			a++;
		else
		{printf("ÃÜÂë´íÎó\n");break;}
		if(a==k)
			printf("»¶Ó­»ØÀ´\n");
	}
}
