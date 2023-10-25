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

    printf("Tamano del valor: %d\tTamano del puntero: %d\n", sizeof(edad), sizeof(pEdad));
    // El puntero guarda la addr en hexadecimal ocupa 8 bytes

    mostrarEdad(pEdad);

    return 0;
}