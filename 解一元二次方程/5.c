#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,x1,x2,i;
	printf("Please enter a,b,c\n");
	scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);//double输出只能用lf
	if(fabs(a)<=1e-6)
		printf("这不是一个一元二次方程!\n");
	i=-b/(2*a);	d=b*b-4*a*c;//数据运算要在输入之后才能运算
	if(fabs(d)<=1e-6)//else后面不能嵌套
	{
		x1=x2=i;
		printf("x1=x2=%.1lf\n",x1);
	}
	else if(d<-1e-6)
	{
		printf("此方程无解\n");
	}
	else //else不用写条件
	{
		x1=i+sqrt(d)/(2*a);
		x2=i-sqrt(d)/(2*a);
		printf("x1=%.1lf,x2=%.1lf\n",x1,x2);
	}
	