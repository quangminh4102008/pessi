//
// Created by haizz on 9/20/2023.
//
#include <stdio.h>
 int toantu() {
// int main() {
    int a = 5;
    int    b = 2;
    int    c = 7;
        printf("a= ");
        scanf("%d",&a);
        printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);

    printf("a + b > c,&& a != b \n");
    scanf("ket qua cua bieu thuc ( %d + %d >%d,&& %d != %d)\n",a,b,c,a,b);
    int ketqua= a + b > c &&  a != b;
    printf("Ket qua : %d\n",ketqua);

    printf(" a + b = c || a !=b\n");
    scanf("ket qua bieu thuc( %d + %d = %d || %d !=%d\n",a,b,c,a,b);
    int ketqua2 = a + b > c || a !=b;
    printf("Ket qua : %d\n,ketqua2");
    return 0;
}