#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, num;

    printf("Enter number: ");
    scanf("%d", &num);

    while(i!=11)
    {
        printf("%d x %d = %d\n",num,i, num*i);
        i++;
    }
}
