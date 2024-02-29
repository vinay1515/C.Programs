#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num;
	printf("Enter the number:");
	scanf("%d",&n);
	// first method
	num=n;
	if(num<0);
	{
		num=(-1)*num;
	}
	//second method
	//num=abs(num);
	printf("The absolute value of %d is %d",n,num);
	return 0;
}
