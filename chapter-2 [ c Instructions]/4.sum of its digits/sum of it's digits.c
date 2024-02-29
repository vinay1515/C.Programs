#include<stdio.h>
#include<conio.h>
int main()
{
	int n,d1,d2,d3,d4,d5;
	printf("\n enter the five digit number n=");
	scanf("%d",&n);
	d5=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d1=n%10;
	int sum=d5+d4+d3+d2+d1;
	printf("the sum of its digits=%d\n",sum);
	getch();
	return 0;
	
}
