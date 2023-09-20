//
// Created by haizz on 9/20/2023.
//
#include <stdio.h>

// int chan_le() {
 int main() {
     int num, res;
     printf("enter number ");
     scanf("%d" ,& num);
     res = num % 2;
     if (res == 0)
         printf("so chan\n");
     else
         printf("so le\n");
     return 1;
 }