#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("Enter three sides of thriangle x,y,z\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y&&x==z)
	{
		printf("triangle is equilateral");
	}
	else if(x==y||y==z||z==x)
	{
		printf("triangle is isosceles");
	}
	else
      printf("The given Triangle is scalene\n");
   return 0;
}
