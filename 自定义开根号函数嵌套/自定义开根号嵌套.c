#include<stdio.h>
#include<math.h>
int main()
{
	float gen(float y);
	float a,g;
	printf("（开根号）请输入一个数:\n");
	while(scanf("%f",&a)!=1)//这里是关于   scanf只输入数字否则报错   功能的实现
	{
		if(scanf("%f",&a)!=1)
	printf("请再输入一次\n");
	scanf("%f",&a);
	getchar();
	}
	g=gen(a);
	printf("%.1f\n",g);
}
    float gen(float y)
	{
		float x=1;
		while(fabs(x-y/x)>1e-6)
			x=(x+y/x)/2;
		return x;
	}
