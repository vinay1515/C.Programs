/*calculate of factorial value of a number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,fact,i;
	printf("enter a number:");
	scanf("%d",&num);
	fact=i=1;
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial valueof %d=%d \n",num,fact);
	return 0;
}
