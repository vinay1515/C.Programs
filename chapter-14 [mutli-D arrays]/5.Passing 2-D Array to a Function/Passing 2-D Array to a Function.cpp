/*passing 2-D array to a function*/
#include<stdio.h>
void display(int q[][4],int,int);
int main()
{
	int a[3][4]={
					1,2,3,4,
					5,6,7,8,
					9,0,1,6
				};
	display(a,3,4);
	return 0;
}
void display (int q[][4],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",q[i][j]);
		printf("\n");
	}
	printf("\n");
}
