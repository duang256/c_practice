#include<stdio.h>
int main()
{
	char a[50];
	int w=0,i;
	gets(a);
	if(a[0]==' ')
	{
		w=0;
		for(i=0;a[i];i++)
		{
			if(a[i]==' '&&(a[i+1]!=' '&&a[i+1]))
				w++;
		}

	}
	else
	{
		w=1;
		for(i=0;a[i];i++)
		{
			if(a[i]==' '&&(a[i+1]!=' '&&a[i+1]))
				w++;
		}
	}

	printf("there are %d words.\n",w);
}
