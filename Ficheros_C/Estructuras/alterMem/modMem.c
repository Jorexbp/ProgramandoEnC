#include <stdio.h>

void mostrarSiguientePosicionMemoria(int);

int main()
{
    int x = 10;
    mostrarSiguientePosicionMemoria(x);
    return 0;
}

void mostrarSiguientePosicionMemoria(int n)
{
    printf("Posicion en memoria: %p", &n);
    printf("\nValor en memoria: %d", n);

    int *pValor = &n + sizeof(n);
    *pValor = 15;
    int *pN = &n;
    *pN = *pValor; // Sobreescribo
    printf("\nPosicion en memoria: %p", pValor);
    printf("\nValor en memoria: %d\n", *pValor);

    printf("Valor de la variable: %d\n",n);
    

}