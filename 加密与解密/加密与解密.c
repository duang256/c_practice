#include<stdio.h>//����
int main()
{
	char c[5];
	int i;
	printf("������һ������\n");
	scanf("%s",c);
	for(i=0;i<5;i++)
	{
		if((c[i]>=97)&&(c[i]<=122))
	{
		if((c[i]>=97)&&(c[i]<=107))
			printf("%d\n",c[i]-87);
		if((c[i]>=108)&&(c[i]<=122))
			printf("%d\n",c[i]-78);
	}
	}
}