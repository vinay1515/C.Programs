#include <stdio.h>
int main()
{
	int arr[25],i,*p,smallest;
	printf("Enter 25 integers:\n");
    for (i = 0; i < 25; i++)
    {
    	scanf("%d",&arr[i]);
	}
	p = &arr[0];
	smallest=*p;
	for (i = 1; i < 25; i++)
	{
	  if (*(p+i) < smallest)
	  {
	  	smallest = *(p+i);
	  }
	}
	printf("The smallest number is %d\n", smallest);

  return 0;
}
