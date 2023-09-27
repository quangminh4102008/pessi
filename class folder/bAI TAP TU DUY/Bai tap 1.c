//
// Created by haizz on 9/27/2023.
//
#include <stdio.h>
 int mark() {
// int main() {
    int count = 0;
    char subject[50];
    float total = 0;
    float score;
    char choice;
    do {
        printf("Nhap mon hoc cua ban :");
        scanf("%s", subject);
        printf("Nhap so diem cua ban:");
        scanf("%f", &score);
        total += score;
        count++;
        printf("Ban co muon tiep tuc ko (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    if (count > 0) {
        double average = total/count;
        printf("Diem trung binh cua ban la = %.2lf\n",average);
    } else {
        printf("ko co mon hoc nao duoc nhap");
    }
    return 0;
}




