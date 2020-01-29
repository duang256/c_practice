#include<stdio.h>
int main()
{
	char a,b,c;
	printf("please input three characters\n");
	a=getchar();
	b=getchar();
	c=getchar();
	putchar(a);
	putchar('\n');
	putchar(b);
	putchar('\n');
	putchar(c);
	putchar('\n');
	putchar('\007');

}
