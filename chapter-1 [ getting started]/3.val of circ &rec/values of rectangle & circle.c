#include<stdio.h>
#include<conio.h>
int main()
{
	float l,b,r,aor,por,aoc,coc;
	printf("\ Enter the values of l,b,r:");
	scanf("%f%f%f",&l,&b,&r);
	aor=l*b;
	por=2*(l+b);
	aoc=3.14*r*r;
	coc=2*3.14*r;
	printf("area of rectangle=%f\n",aor);
	printf("perimeter of rectangle=%f\n",por);
	printf("area of circle=%f\n",aoc);
	printf("circumference of circle%f\n",coc);
	getch();
	return 0;
}
