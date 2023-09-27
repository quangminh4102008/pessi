//
// Created by haizz on 9/27/2023.
//
#include <stdio.h>
#define COFFEE_Price 2
#define TEA_Price 3
#define Water_Price 1.5
// int bestcaffeeshop (){
 int main(){
 int Numcoffees = 0 , Numteas = 0 , Numwateres = 0;
 float totalcost;
 char choice;

 printf("\n Chao mung quy khach\n");
     do {
         printf("\n----menu----\n");
         printf("1.Coffee (%.2f)\n",COFFEE_Price);
         printf("2.Tea (%.2f)\n",TEA_Price);
         printf("3.Water (%.2f)\n",Water_Price);
         printf("4.Quit (%%.2f)\n");

         switch (choice) {
             case '1':
                 Numcoffees++;
                 break;
             case '2':
                 Numteas++;
             case '3':
                 Numwateres++;
             case '4':
                 break;
             default:
                 ("Invalid choice , PLease get out");
         }
         }while (choice != '4');
     // Caculate the cost
     totalcost= (Numcoffees * COFFEE_Price)+(Numteas * TEA_Price)+(Numwateres * Water_Price);
     //Order display
     printf("\nOrder Detail:\n");
     printf("Coffe: %d\n",Numcoffees);
     printf("Tea:%d\n",Numteas);
     printf("water:%d\n",Numwateres);
     printf("Totalcost : %.2f\n",totalcost);

     printf("\nTHank you for order pls dont enjoy your drink\n");
     return 0;




         }



