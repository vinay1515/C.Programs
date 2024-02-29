#include<stdio.h>
#include<conio.h>
int main()
{
	int p,n,count;
	float r,si;
	for(count=1;count<=3;count=count+1)
	{
		printf("Enter values of p,n,r\t");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("simple interest=rs.%f\n",si);
	}
	return 0;
}
