#include<stdio.h>
#include<math.h>
int main()
{
	float gen(float y);
	float a,g;
	printf("�������ţ�������һ����:\n");
	while(scanf("%f",&a)!=1)//�����ǹ���   scanfֻ�������ַ��򱨴�   ���ܵ�ʵ��
	{
		if(scanf("%f",&a)!=1)
	printf("��������һ��\n");
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
