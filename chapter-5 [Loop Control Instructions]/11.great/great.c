#include<stdio.h>
#include<conio.h>
int main()
{
	int big,m,i;
	printf("Enter number");
	scanf("%d",&big);
	for(i=1;i<=4;i++)
	{
		printf("Please enter number");
		scanf("%d",&m);
		if(big>m)
		  big=big;
		else
		   big=m;  	
	}
	printf("The greates number =%d",big);
	return 0;
}
