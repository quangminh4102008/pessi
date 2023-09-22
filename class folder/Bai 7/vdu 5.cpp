//
// Created by haizz on 9/20/2023.
//
#include <stdio.h>
 int main()
{
    int c;
    printf("Enter the character: ");
    scanf("%c",c);

    if (c>= 'A'&& c <= 'Z')
        printf("Lowercase character = %c" , c + 'a'-'A');
    else
        printf("lowercase Entered = %c" , c);
    return 0;
}