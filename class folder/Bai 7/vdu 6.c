//
// Created by haizz on 9/20/2023.
//
#include <stdio.h>
// void main()
{
    int x;
    x = 0;
    printf("Enter the choice (1-3):");
    scanf("%d",&x);
    if(x==1)
        printf("\nChoice is 1");
    else if(x==2)
        printf("\nChoice is 2");
    else if(x==3)
        printf("\nChoice is 3");
    else
    printf("\n Invalid choice : invalid");
}