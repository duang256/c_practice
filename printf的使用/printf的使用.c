#include<stdio.h>
int main()
{	
	int a=067,b=0x6f,c=55,d=111;
	double x=2e2,y=200;
	char m=',',n[]={"chinese army!"};
	printf("%5d\n",a);
	printf("%-5d\n",b);
	printf("%5o\n",c);
	printf("%-5x\n",d);
	printf("%8.1f\n",x);
	printf("%-5g\n",x);
	printf("%11.1e\n",y);
	printf("%c\n",m);
	printf("%s\n",n);

}