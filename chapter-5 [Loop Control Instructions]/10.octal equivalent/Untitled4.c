#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,s=0,r;
	printf("Enter the number n:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%8;
		n=n/8;
		//printf("n=%d\n",n);
		r=r*i;
		s=s*r;
		//printf("s=%d\n",s);
		i=i*10;
	}
	printf("octal=%d",s);
	return 0;
}
