#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,x1,x2,i;
	printf("Please enter a,b,c\n");
	scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);//double���ֻ����lf
	if(fabs(a)<=1e-6)
		printf("�ⲻ��һ��һԪ���η���!\n");
	i=-b/(2*a);	d=b*b-4*a*c;//��������Ҫ������֮���������
	if(fabs(d)<=1e-6)//else���治��Ƕ��
	{
		x1=x2=i;
		printf("x1=x2=%.1lf\n",x1);
	}
	else if(d<-1e-6)
	{
		printf("�˷����޽�\n");
	}
	else //else����д����
	{
		x1=i+sqrt(d)/(2*a);
		x2=i-sqrt(d)/(2*a);
		printf("x1=%.1lf,x2=%.1lf\n",x1,x2);
	}
	