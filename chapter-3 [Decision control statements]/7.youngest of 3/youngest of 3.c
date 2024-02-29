#include<stdio.h>
#include<conio.h>
int main()
{
    int ram, shyam, ajay;
	printf("Enter the age of Ram: ");
    scanf("%d", &ram);
    
	printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);
    
	printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);
    
    if(ram<shyam && ram<ajay)
    	printf(" Ram is the youngest person");
    
    else if (shyam<ram && shyam<ajay)
    	printf("shyam is the youngest person");
    else
		printf("ajay is the youngest person");
	
	return 0;
}
    
