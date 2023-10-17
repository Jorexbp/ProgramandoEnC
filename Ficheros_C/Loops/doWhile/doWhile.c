#include <stdio.h>
#include <string.h>

int main()
{
    int n1 = 0;
    int suma = 0;

    do
    {
        printf("Introduce un numero mayor que cero\n");
        scanf("%d\n", &n1);
        suma += n1 > 0 ? n1 : 0;
    } while (n1 > 0);
    printf("La suma es: %d", suma);

    return 0;
}