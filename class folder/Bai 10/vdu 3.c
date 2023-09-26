//
// Created by haizz on 9/26/2023.
//
#include <stdio.h>
#include <conio.h>
void main()
{
    int cnt = 0,num ;

    do {
        printf("\n Enter a number:");
        scanf("%d", &num);
        printf("No . is %d , num");
        cnt++;
    } while (num != 0);
    printf("\n The total members entered were %d",--cnt);
    }