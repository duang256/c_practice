#include<stdio.h>
#include<math.h>
int main()
{
	int j,x;
	double y;
	y=sqrt(x);
	for(x=2;x<=99;x++)
	{
		for(j=2;j<=y;j++)
		{
			if(x%j==0)break;
		}
		if(j*j>x)
			printf("%d ",x);
	}

}