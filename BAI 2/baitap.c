//
// Created by haizz on 9/15/2023.
//#include <stdio.h>

#include <stdio.h>

//int math_operator() {
int main() {
    int i, a, b, c, d;
    int r1, r2, r3;
    printf("Enter the number i= ");
    scanf("%d", &i);
    printf("Enter the number a= ");
    scanf("%d", &a);
    printf("Enter the second number b=");
    scanf("%d", &b);
    printf("Enter the last number c= ");
    scanf("%d", &c);
    printf("Enter the number d= ");
    scanf("%d", &d);
    r1 = ++i % 7;
    printf("i=%d r1 =%d\n", i, r1);
    r2 = 5 * (c - 3 + d);
    printf("r2= %d\n", r2);
    r3 = a * (b + c / d) - 22;
    printf("r3 = %d\n ,r3");
    return 0;
}


