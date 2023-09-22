//
// Created by haizz on 9/22/2023.
//
#include <stdio.h>
 void main ()
{
    int basic;

    printf("\n Please enter your basic: ");
    scanf("%d",&basic);
    switch (basic)
{
    case 200:
        printf("\n Bonus is dollar %d\n", 125);
        break;
    case 300:
        printf ("\n bonus is dollar %d\n", 125);
        break;
    case 400:
        printf ("\n Bonus is dollar %d\n", 140);
        break;
    case 500:
        printf("\n Bonus is dollar %d\n", 175);
        break;

    default:
        printf(" Invalid entry");
        break;
}
}