#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,r,i,n,x,m;
//	printf("Enter the number ");
//	scanf("%d",&x);
		i=1;
	while(i<=1000)
	{
	    x=i;
	    //printf("%d\n",x);
	    sum=0;
		while(x!=0)
		{
			r=x%10;
			x=x/10;
			sum=sum+r*r*r;
			
		}
		
		if(sum==i)
				printf("%d\t",sum);
	i++;
	//printf("%d",i);
	}
	
	
}
