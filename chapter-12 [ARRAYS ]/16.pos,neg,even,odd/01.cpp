#include<stdio.h>
int main()
{
	int arr[5],i,pos=0,neg=0,even=0,odd=0;
	for(i=0;i<5;i++)
	{
		printf("enter a number:");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<5;i++)
	{
		if(arr[i]>0)
		pos++;
		if(arr[i]<0)
		neg++;
		if(arr[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("\n\n The given number is %d postive,%d negitve,%d even,%d odd,pos,neg,even,odd");
	return 0;
}
