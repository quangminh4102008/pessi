//
// Created by haizz on 9/20/2023.
//
#include <stdio.h>
//int toantu2() {
    int main() {
        int a= 5;
        int b=10;
        int c=7  ;
        int tong = a + b;
        int hieu = a - b;
        int tich = a * b;
        int thuong = a / b;

        int ketqua1 = (a > b);
        int ketqua2 = (a<= b);
        int ketqua3 = (a==b);
        int ketqua4 = ( a != b);

        int ketqua5 = (a > b && b > c);
        int ketqua6 = (a < b || a < c);
        int ketqua7 = !( a < b);
    printf("Tong : %d\n",tong);
    printf("Hieu : %d\n" , hieu);
    printf("tich : %d\n", tich);
    printf("Thuong : %d\n",thuong);

    printf("Ket qua 1 : %d\n",ketqua1);
    printf("Ket qua 2 : %d\n",ketqua2);
    printf("Ket qua 3 : %d\n",ketqua3);
    printf("Ket qua 4: %d\n",ketqua4);

    printf("Ket qua 5 : %d\n",ketqua5);
    printf("Ket qua 6 : %d\n",ketqua6);
    printf("Ket qua 7 : %d\n",ketqua7);

    return 0;
    }
