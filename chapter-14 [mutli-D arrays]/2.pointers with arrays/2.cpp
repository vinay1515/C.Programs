#include<stdio.h>
int main()
{
	int s[4][3]={
					{1234,564},{1212,652},{2314,695},{1246,231}
				};
	int i;
	for(i=0;i<=3;i++)
		printf("Address of %d th 1-D Array =%u\n",i,s[i]);
	return 0;
}
