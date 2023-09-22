//
// Created by haizz on 9/20/2023.
//
#include <stdio.h>
// void main()
{
    int num,res;
    printf("Enter the number:");
    scanf("%d",num);

    res = num %2;
    if (res == 0)
        printf("Enter the numbe is even");
    else
        printf("Enter the number is odd");

}