#include <stdio.h>

int main()
{
    int edad = 18;
    double alt = 1.72;
    char nombre[] = "Jorge";

    printf("Edad:%p\nAltura:%p\nNombre:%p\n", &edad, &alt, &nombre);

    int *ptrEdad = &edad;
    double *ptrAlt = &alt;

    // Hace referencia al puntero como dirección
    printf("Edad:%p\nAltura:%p\n", ptrEdad, ptrAlt);
    printf("-----------------\n");
    // Hace referencia al valor en la dirección del puntero
    printf("Edad:%d\nAltura:%lf\n", *ptrEdad, *ptrAlt);
    return 0;
}