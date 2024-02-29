#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,2,3,4,5,8,5,6,5,4,8,7,6,8,9,5,4,2,3,5,7,8,9,6,5,4,8,7,5,1,2,4,4,6,9,5,4,2,3,6,2,4};
	int i,n,count;
	for(i=0;i<10;i++)
	{
		printf("Enter an element in the array:");
		scanf("%d",&n);
		count=0;
		for(i=0;i<=49;i++)
		{
			if(arr[i]==n);
			count++;
		}
		printf("number %d is found %d time(s) in the array\n",n,count);
	}
	return 0;
}
