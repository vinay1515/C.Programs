#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("\n Enter the year:");
	scanf("%d",&year);
	if(year%400==0||year%100!=0&&year%4==0)
	 printf("leap year\n");
	else
	 printf("not leap year\n");
	return 0; 
}
