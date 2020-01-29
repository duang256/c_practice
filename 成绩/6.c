#include<stdio.h>
int main()
{
	float a;
	int c;
	printf("请输入一个同学的分数\n");
	scanf("%f",&a);
	c=(int)(a)/10;
	switch(c)
	{

	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("渣渣\n");break;
	case 6:
	case 7:
	case 8:printf("渣\n");break;
	case 9:
	case 10:
	case 11:printf("一般\n");break;
	case 12:
	case 13:printf("很好!\n");break;
	case 14:printf("不可思议!\n");break;
	case 15:printf("非人类!\n");break;
	default:printf("input wrong\n");
	
	}
}
