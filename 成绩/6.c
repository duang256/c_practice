#include<stdio.h>
int main()
{
	float a;
	int c;
	printf("������һ��ͬѧ�ķ���\n");
	scanf("%f",&a);
	c=(int)(a)/10;
	switch(c)
	{

	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("����\n");break;
	case 6:
	case 7:
	case 8:printf("��\n");break;
	case 9:
	case 10:
	case 11:printf("һ��\n");break;
	case 12:
	case 13:printf("�ܺ�!\n");break;
	case 14:printf("����˼��!\n");break;
	case 15:printf("������!\n");break;
	default:printf("input wrong\n");
	
	}
}
