#include <stdio.h>
#include <string.h>

int main(){
    int edad ;
    char nombre[20];
    printf("Como te llamas?\n");
    //scanf("%s",&nombre); // scnaf() lee hasta el siguiente espacio
    fgets(nombre, 20,stdin); // El 20 es el n de chars 
    //nombre[strlen(nombre)-1] = '\0'; // Algo más avanzado solo quita el último char siendo enter

    printf("Cuantos anos tienes?\n");

    scanf("%d",&edad);

    printf("\nTienes %d anos",edad);
 printf("\nTe llamas %s",nombre);


    return 0;
}