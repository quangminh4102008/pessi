//
// Created by haizz on 9/22/2023.
//
#include <stdio.h>
//void main ()
{
    int x , y;
    x = y=0;
    printf("Enter choice (1 - 3) :");
    scanf("%d",&x);
    if (x==1)
    {
        printf("\n ENter the value for y (1-5) :");
        scanf ("%d",&y);
        if (y<= 5)
            printf("\n The value for y is : %d" , y);
        else
            printf("\n the value of y exceeds 5");
    }
    else
        printf("\n choice entered was not 1");
}