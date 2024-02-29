#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6,s7,gd;
	float c1,c2,c3,c4,c5,c6,c7,cr,gc,sgpa;
	printf("\n enter the grades:");
	scanf("%d%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
	printf("\n enter the credits:");
	scanf("%f%f%f%f%f%f%f",&c1,&c2,&c3,&c4,&c5,&c6,&c7);
	cr=c1+c2+c3+c4+c5+c6+c7;
	gc=s1*c1+s2*c2+s3*c3+s4*c4+s5*c5+s6*c6+s7*c7;
	sgpa=gc/cr;
	printf("total percentage=%f",sgpa);
	getch();
	return 0;
}
