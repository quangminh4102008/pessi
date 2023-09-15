//
// Created by haizz on 9/15/2023.
//
#include <stdio.h>
int d4_scanf(){
//    int main(){
    int a;
    float d =123.123456;
    printf("float 123.123456: %e",d);
    char fullname[100];
    gets(fullname);
    printf("fullname: %s\n", fullname);
    char ch , name[40];
    printf("please enter the data\n");
    scanf("%d %e %s", &a, &d, &ch, name);
    printf("\n The value accepted are : %d %e %s",&a,&d,&ch,name);
    return 0;


}