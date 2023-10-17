#include <stdio.h>

int main(){
    int x;
    x = 123;
    int y =321;

    int edad = 18;
    float altura = 1.81; // En vez de double
    char nota = 'A'; 
    char nombre[] = "Jorge"; // Ou yea

    // %s para Strings, %d para ints
    // %c para chars, %f para floats
    printf("Me llamo %s\n",nombre);  
    printf("Tienes %d años\n",edad); // Se usa %d para indicar que hay una variable la cual se especifica al final después de una coma
    printf("Tu nota media es %c\n",nota);
   printf("Tu altura es %f\n",altura);
   
    return 0;
}