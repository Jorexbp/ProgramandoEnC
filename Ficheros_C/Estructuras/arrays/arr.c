#include <stdio.h>

int main()
{

    double precios[6] = {2.5, 99.01, 120.35, 250.75, 10, 56};

    for (int i = 0; i < sizeof(precios) / sizeof(precios[0]); i++)
    {
        printf("\nPosicion: %d\t Valor: %.2lf",i,precios[i]);
    }
    

    return 0;
}