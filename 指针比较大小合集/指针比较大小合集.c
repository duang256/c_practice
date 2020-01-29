#if(0)
#include<stdio.h>
int main()
{
	int a,b,t;
	printf("请输入两个数\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{t=a;a=b;b=t;}
	printf("%d %d\n",a,b);
}
#endif



#if(0)
#include<stdio.h>
int main()
{
	int a,b;
	int t;
	int *p1,*p2;
	p1=&a;p2=&b;
	printf("请输入两个整数\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{t=*p1;*p1=*p2;*p2=t;}
	printf("max=%d min=%d\n",a,b);
}
#endif





#if(0)
#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2;
	int *p;
	p1=&a;p2=&b;
	printf("请输入两个整数\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{p=p1;p1=p2;p2=p;}
	printf("%d %d\n",*p1,*p2);

}
#endif






#if(0)
#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2;
	p1=&a;p2=&b;
	printf("输入两个整数\n");
	scanf("%d %d",&a,&b);
	if(a<b)swap(p1,p2);
	printf("%d %d\n",a,b);
}

int swap(int *pp1,int *pp2)
{
	int t;
	t=*pp1;
	*pp1=*pp2;
	*pp2=t;
}


#endif






#if(0)
#include<stdio.h>
int main()
{
	int a,b,c;
	int t;
	printf("请输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<c)
	{t=a;a=c;c=t;}
	if(a<b)
	{t=a;a=b;b=t;}
	if(b<c)
	{t=b;b=c;c=t;}
	printf("%d %d %d\n",a,b,c);

}
#endif


#if(0)
#include<stdio.h>
int main()
{
	  int a,b,c;
	  int t;
	  int *p1,*p2,*p3;
	  p1=&a;p2=&b;p3=&c;
	  printf("请输入三个整数\n");
	  scanf("%d %d %d",&a,&b,&c);
	  if(a<b)
	  {t=*p1;*p1=*p2;*p2=t;}
	  if(a<c)
	  {t=*p1;*p1=*p3;*p3=t;}
	  if(b<c)
	  {t=*p3;*p3=*p2;*p2=t;}
	  printf("max=%d min=%d min=%d\n",a,b,c);
}

#endif



#if(0)
#include<stdio.h>
int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	int *p;
	printf("请输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	if(a<b)
	{p=p1;p1=p2;p2=p;}
	if(a<c)
	{p=p1;p1=p3;p3=p;}
	if(b<c)
	{p=p3;p3=p2;p2=p;}
	printf("max=%d mid=%d min=%d\n",*p1,*p2,*p3);
}




#endif



















#if(1)
#include<stdio.h>
int main()
{
	int sort(int *pp1,int *pp2,int *pp3);
	int a,b,c;
	int *p1,*p2,*p3;
	printf("请输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	sort(p1,p2,p3);
	printf("max=%d mid=%d min=%d\n",a,b,c);
}


int sort(int *pp1,int *pp2,int *pp3)
{
	int swap(int *pa,int *pb);
	if(*pp1<*pp2)
	swap(pp1,pp2);
	if(*pp1<*pp3)
	swap(pp1,pp3);
	if(*pp2<*pp3)
	swap(pp2,pp3);
}



int swap(int *pa,int *pb)
{
	int t;
	t=*pa;*pa=*pb;*pb=t;
}
#endif