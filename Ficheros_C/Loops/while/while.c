#include <stdio.h>
#include <string.h>

int main()
{

    char nombre[25];

    printf("\nIntroduce tu nombre\n");

    fgets(nombre, 25, stdin);

    nombre[strlen(nombre) - 1] = '\0';

    while (strlen(nombre) == 0)

    {
        printf("Introduce un nombre valido\n");
        fgets(nombre, 25, stdin);
        nombre[strlen(nombre) - 1] = '\0';

    }
    printf("Bienvenido, %s", nombre);

    return 0;
}