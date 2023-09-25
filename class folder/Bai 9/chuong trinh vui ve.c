#include <stdio.h>

int main() {
 char ans;

  do {
      printf("do u love me ? (y/n)");
      fflush(stdin);
      scanf("%cc", &ans);


  }while (ans !='y');
      return 1;
  }