//
// Created by haizz on 9/22/2023.
//
#include <stdio.h>

//int atm_basic ( int argc , char *argv[])
int main(int argc , char *argv[])
{
    printf("Ban da dang nhap thanh cong.Xin chuc mung!\n");
    printf("Ban muon su dung chuc nang nao?\n");
    printf("1.rut tien\n");
    printf("2.kiem tra so du\n");
    printf("3.chuyen khoan\n");
    printf("4.kiem tra lich su giao dich\n");
    printf("Moi ban nhan cac lua chon 1-4\n");

    int choose = 0;
    scanf("%d", &choose);
    if (choose >= 1 && choose <=  4) {

        if (choose == 1) {
            printf("Giao dich thanh cong .SO tien con lai la 4 trieu USD");
        } else if (choose == 2) {
            printf("so du trong tai khoan cua ban la 5 trieu USD");
        } else if (choose == 3) {
            printf("Ban hay nhap so tai khoan can chuyen khoan");
        } else if (choose == 4) {
            printf("danh sach cac giao dich gan day cua ban");
        }
    }else {
        printf("Lua chon cua ban khong phu hop.Moi ban nhap cac so trong pham vi tu 1 toi 4");
    }
    printf("\n");
    return 0;
        }
