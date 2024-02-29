#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("\n Enter first side of a triangle:");
	scanf("%f",&a);
	printf("\n Enter second side of a triangle:");
	scanf("%f",&b);
	printf("\n Enter thrid side of a triangle:");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle=%f\n",area);
	getch();
	return 0;
}
