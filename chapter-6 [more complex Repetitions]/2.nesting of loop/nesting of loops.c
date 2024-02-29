#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,sum;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=4;c++)
		{
			sum=r+c;
			printf("r=%d c=%d sum=%d\n",r,c,sum);
		}
	}
	return 0;
}
