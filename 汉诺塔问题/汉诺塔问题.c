#include<stdio.h>
int main()
{
	int hannoi(int x,int one,int two,int three);
	int move(int times,int a,int b);


	int n,temps;
	printf("���������ӵĸ���\n");

	for(;;)
	{
		if(scanf("%d",&n)!=1)
		{
			printf("�����ʽ����������������   ");getchar();
			scanf("%d",&n);getchar();continue;
		}
		if(n<=0)
		{
			printf("�����ʽ����������������   ");getchar();
			scanf("%d",&n); getchar();continue;
		}
		break;
	}

	hannoi(n,'A','B','C');           //A,B,C�ֱ���������,���ú�ŵ���������޷���ֵ��
}


int hannoi(int x,int one,int two,int three)       //�ֱ��Ӧ������
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
	static int i=1;           //static��ʾi��ֵ�����ٽ��еڶ��θ�ֵ
	printf("��%d��:����%d��������%c���Ƶ�%c��\n",i++,times,a,b);
}