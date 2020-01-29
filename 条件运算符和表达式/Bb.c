#include<stdio.h>
void main()
{
	char c;
	printf("please input a letter\n");
	c=getchar();
	printf("%c\n",c>=97&&c<=122?c:c+32);

}