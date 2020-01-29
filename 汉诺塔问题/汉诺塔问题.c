#include<stdio.h>
int main()
{
	int hannoi(int x,int one,int two,int three);
	int move(int times,int a,int b);


	int n,temps;
	printf("请输入盘子的个数\n");

	for(;;)
	{
		if(scanf("%d",&n)!=1)
		{
			printf("输入格式错误，请输入正整数   ");getchar();
			scanf("%d",&n);getchar();continue;
		}
		if(n<=0)
		{
			printf("输入格式错误，请输入正整数   ");getchar();
			scanf("%d",&n); getchar();continue;
		}
		break;
	}

	hannoi(n,'A','B','C');           //A,B,C分别是三个塔,调用汉诺塔函数，无返回值；
}


int hannoi(int x,int one,int two,int three)       //分别对应三个塔
{
	if(x==1)
		move(1,one,three);
	else
	{
		hannoi(x-1,one,three,two);
		move(x,one,three);
		hannoi(x-1,two,one,three);
	}
}

int move(int times,int a,int b)
{
	static int i=1;           //static表示i的值不会再进行第二次赋值
	printf("第%d步:将第%d个盘子由%c柱移到%c柱\n",i++,times,a,b);
}