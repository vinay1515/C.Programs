#include<stdio.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter marks in five subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)*100/500;
	if(per>=60)
		printf("First division\n");
	else
	{
		if(per>=50)
			printf("Sencond division\n");
		else
		{
			if(per>=40)
				printf("third division\n");
			else
				printf("fail\n");
		}
	}
}
