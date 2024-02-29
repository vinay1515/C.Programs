/*Determine overtime pay of 10 employees*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float otpay;
	int hour,i=1;
	while(i<=10)/*loop for ten employees*/
	{
		printf("\n Enter the no. of hours worked:");
		scanf("%d",&hour);
		if(hour>=40)
			otpay=(hour-40)*120;
		else
			otpay=0;
		 printf("hour=%d overtimepay=Rs.%f \n",hour6,otpay);
		 i++;
	}
	return 0;
}
