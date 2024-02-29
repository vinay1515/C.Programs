#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	char sex,ms;
	printf("enter the age,sex,ms");
	scanf("%d%c%c",&age,&sex,&ms);
	if((ms=='m')||(ms=='u'&&sex=='m'&&age>30)||(ms=='u'&&sex=='f'&&age>25))
	 printf(“Driver should not be insured\n”);
	else
	 printf(“Driver should not be insured\n”);
	return 0;
}



