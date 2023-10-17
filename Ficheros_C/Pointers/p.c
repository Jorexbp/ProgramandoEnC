#include <stdio.h>

int main()
{
    int edad = 18;
    double alt = 1.72;
    char nombre[] = "Jorge";

    printf("Edad:%p\nAltura:%p\nNombre:%p\n", &edad, &alt, &nombre);

    int *ptrEdad = &edad;
    double *ptrAlt = &alt;

    printf("Edad:%p\nAltura:%p\n", ptrEdad, ptrAlt);
    printf("-----------------\n");
    printf("Edad:%d\nAltura:%lf\n", *ptrEdad, *ptrAlt);
    return 0;
}