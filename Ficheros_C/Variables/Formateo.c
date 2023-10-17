#include <stdio.h>

int main(){
   float item1 = 18.99;
   float item2 = 10.99;
   float item3 = 100.50;

    // %1. = alinear 1 espacio a la drch
    // %-1. = alinear 1 espacio a la izq
    // %.1 = mostrar 1 decimal
    
   printf("Item 1: $%50.2f\n",item1); // DecimalFormat 
   printf("Item 2: $%-5.2f\n",item2); // DecimalFormat
   printf("Item 3: $%10.2f\n",item3); // DecimalFormat
return 0;
}