#include <stdio.h>

void cambio(int *x,int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a = 20;
    int b = 40;
    printf("Antes del cambio en memoria: A > %d\tB > %d\nMEM_A: %p\nMEM_B: %p", a,b,&a,&b);

    cambio(&a,&b);

    printf("\nDespues del cambio en memoria: A > %d\tB > %d\nMEM_A: %p\nMEM_B: %p", a,b,&a,&b);

    return 0;
}