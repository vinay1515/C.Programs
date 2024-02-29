#include<stdio.h>
#include<conio.h>
int main()
{
	int n,d5,d4,d3,d2,d1,revnum,x;
	printf("\n Enter the five digit number:");
	scanf("%d",&n);
	x=n;
	d5=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
//	printf("n=%d",n);
	d1=n%10;
	revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("The revesered Number is %d\n",revnum);
//	{
		if(x==revnum)
			printf("\nThe original and revnum is same");
		else
			printf("\nThe original and revnum is not same");
//	}
	return 0;
	getch();
}
