#include<stdio.h>
#include<conio.h>
int main()
{
	int num,pos=0,neg=0,zeros=0;
	char choice;
	do
	{
		printf("Enter the number:");
		scanf("%d",&num);
		if(num>0)
		{
			pos++;
		}
		else if(num<0)
		{
			neg++;
		}
		else
		   zeros++;
		   printf("To continue enter y otherwise enter another key\n");
		   fflush(stdin);
		   scanf("%c",&choice);
		   
	}while(choice=='y');
	printf("The number of postive number=%d\n The number of negitve numbers=%d\n The number of zeros=%d\n",pos,neg,zeros);
	return 0;
}
