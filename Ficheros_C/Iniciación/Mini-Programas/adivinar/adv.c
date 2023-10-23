#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int numeroAdivinar = (rand() % 100) + 1;
    int numeroUsuario;
    int intentos = 0;

    printf("Introduce un numero para adivinar\n");
    scanf("%d", &numeroUsuario);
    do
    {
        if (numeroAdivinar > numeroUsuario)
        {
            printf("Muy pequeno\n");
            intentos++;
             scanf("%d", &numeroUsuario);
        }
        else if (numeroAdivinar < numeroUsuario)
        {
            printf("Muy grande\n");
            intentos++;
             scanf("%d", &numeroUsuario);
        }

    } while (numeroAdivinar != numeroUsuario);
    printf("¡Adivinaste el numero!\n");
    printf("/////////////////////\n");
    printf("Intentos totales: %d\n", intentos);
    printf("/////////////////////");
    return 0;
}