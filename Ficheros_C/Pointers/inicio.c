#include <stdio.h>

void mostrarEdad(int *pEdad)
{
    printf("Tienes %d anos", *pEdad); // dereferencia
}
int main()
{
    int edad = 18;
    int *pEdad = NULL; // Esto se considera buena practica sino asignas el valor al crearlo
    pEdad = &edad;     // Debe ser del mismo tipo que el valor
    printf("\nEdad: %d\tMemoria: %p\n", edad, pEdad);
    printf("Valor en la memoria: %d\n", *pEdad); // dereferenciar

    printf("Tamano del valor: %ld\tTamano del puntero: %lu\n", sizeof(edad), sizeof(pEdad));
    // El tamaño del puntero es dos veces el del valor porque el puntero tambien es del mismo tipo 
   
    mostrarEdad(pEdad);

    return 0;
}