#include<stdio.h>
int main()
{
	int num[]={24,42,56,35,59,69};
	int i;
	for(i=0;i<=5;i++)
	{
		printf("address=%u\n",&num[i]);
		printf("element=%d%d",num[i],*(num+i));
		printf("%d%d\n",*(i+num),i[num]);
	}
	return 0;
}
