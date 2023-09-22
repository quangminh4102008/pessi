//
// Created by haizz on 9/22/2023.
//
#include <stdio.h>
// void main ()
{
    char ch;
    printf("\n Enter a lower cased alphabet (a-z):");
    scanf("%c",&ch);

    if (ch < 'a'|| ch > 'z')
        printf("\n Character not a lower cased alphabet");
    else
        switch (ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case'u':
printf ("\n Character is a wowel");
break;

    case 'z':
printf("\nLast alphabet (z) was entered");
break;

    default:
printf("\nCharacter is a consonat");
break;
}
  }