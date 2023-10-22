#include <stdio.h>
#include <string.h>

int main()
{
    int row;
    int col;
    char simb[1];

    printf("Introduce el numero de filas: ");
    scanf("%d", &row);

    printf("Introduce el numero de columnas: ");
    scanf("%d", &col);

    scanf("%c"); // Para quitar el \n

    printf("Introduce el simbolo para construir: ");
    scanf("%c",&simb);

   // printf("%d\t%d\n", col, row);

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%c", simb);
        }
        printf("\n");
    }

    return 0;
}