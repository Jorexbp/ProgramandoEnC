#include <stdio.h>
#include <string.h>

struct jugador
{
    char nombre[12];
    int puntos;
};

int main()
{
    struct jugador jug1;
    struct jugador jug2;

    strcpy(jug1.nombre,"Jorge");
    strcpy(jug2.nombre,"Luis");

    jug1.puntos = 4;
    jug2.puntos = 7;

    printf("%s\n",jug1.nombre);
    printf("%d\n",jug1.puntos);

    printf("%s\n",jug2.nombre);
    printf("%d\n",jug2.puntos);

    return 0;
}