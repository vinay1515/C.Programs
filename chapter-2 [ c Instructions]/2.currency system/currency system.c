#include<stdio.h>
#include<conio.h>
int main()
{
	int amount,hun,fifty,ten,five,two,one,total;
	printf("\n Enter the amount:");
	scanf("%d",&amount);
	hun=amount/100;
	amount=amount%100;
	fifty=amount/50;
	amount=amount%50;
	ten=amount/10;
	amount=amount%10;
	five=amount/5;
	amount=amount%5;
	two=amount/2;
	amount=amount%2;
	one=amount/1;
	amount=amount%1;
	total=hun+fifty+ten+five+two+one;
	printf("smallest number of notes= %d\n",total);
	getch();
	return 0;
}
