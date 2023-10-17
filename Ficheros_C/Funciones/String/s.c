#include <stdio.h>
#include <string.h>

int main()
{

    char nombre[] = "Jorge";
    char apellido[] = "Barba";

    strlwr(nombre); // toLowerCase()
    printf("%s\n", nombre);

    strupr(nombre); // toUpperCase()
    printf("%s\n", nombre);

    strcat(nombre, apellido); // concat()
    printf("%s\n", nombre);

    strncat(nombre, apellido, 1); // concat() usando index para el segundo string
    printf("%s\n", nombre);

    strcpy(nombre, apellido); // Copia apellido a nombre
    printf("%s\n", nombre);

    strncpy(nombre, apellido, 3); // Copia apellido a nombre por index
    printf("%s\n", nombre);

    strset(nombre, '?'); // replaceAll();
    printf("%s\n", nombre);

    strnset(apellido, 'x', 2); // replaceCharAt();
    printf("%s\n", apellido);

    strrev(apellido); // Revierte el string;
    printf("%s\n", apellido);

    int res = strlen(nombre);
    printf("%d\n", res);

    int res1 = strcmp(nombre, apellido);
    printf(res1 == 0 ? "Las Strings son iguales\n" : "Las Strings no son iguales\n");

    int res2 = strncmp(nombre, apellido, 1); // Solo comprueba ese char
    printf("%d\n", res2);

    int res3 = strcmpi(nombre, apellido); // Compara con ignoreCase
    printf("%d\n", res3);

    int res4 = strnicmp(nombre, apellido,2); // Compara con ignoreCase y index
    printf("%d\n", res4);

    return 0;
}