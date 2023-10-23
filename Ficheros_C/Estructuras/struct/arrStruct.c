#include <stdio.h>
#include <string.h>


struct Estudiante
{
    char nombre[25];
    float nota;
};

int main()
{
    struct Estudiante est1 = {"Jorge", 8.5};
    struct Estudiante est2 = {"Carlos", 8.75};
    struct Estudiante est3 = {"Luis", 5.45};
    struct Estudiante est4 = {"Juan", 2.5};

    struct Estudiante arr[] = {est1, est2, est3, est4};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%s\t", arr[i].nombre);
        printf("%.2lf\n", arr[i].nota);
    }

    return 0;
}
