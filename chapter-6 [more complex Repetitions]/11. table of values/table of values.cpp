#include<stdio.h>
int main()
{
    int y;  //y is integer 1 to 6
    float i, x;

    //print column names
    printf("i\t\ty\tx\n");

    //for loop for y range (1 to 6)
    for(y=1;y<=6;y++)
    {
        //for loop for every value y range (5.5 to 12.5 step .5)
        for(x=5.5;x<=12.5;x=x+0.5)
        {
            //formula for intelligence
            i = 2+(y+0.5*x);

            //print the values
            printf("%.2f\t\t%d\t%.2f\n",i,y,x);
        }
    }
}
