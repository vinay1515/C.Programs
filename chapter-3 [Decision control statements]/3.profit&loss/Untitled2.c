#include<stdio.h>
#include<conio.h>
int main()
{
	float cp,sp,p,l;
	printf("\n enter the cost price & selling price:");
	scanf("%f%f",&cp,&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
	printf("the seller made a profit of Rs %f\n",p);
	if(l>0)
	printf("The seller made a lose of Rs %f\n",l);
	if(p==0)
	printf("there is no lose,no profit\n");
	return 0;
}
