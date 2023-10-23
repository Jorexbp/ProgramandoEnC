#include <stdio.h>
#include <ctype.h>


int main()
{
    char preguntas[][100] = {"1. Quien es el creador del programa?",
                            "2. Quien llego primero el huevo o la gallina?",
                            "3. Existe algun dios?"};
    char opciones[][100] = {"A. Jorge","B. Luis","C. Saul",
                            "A. Huevo","B. Gallina","C. Ninguno",
                            "A. No","B. No lo se","C. Soy retrasado (Si)"
    
    };

    char respuestas [3] = {'A','C','A'};

    int numPregu = sizeof(preguntas) / sizeof(preguntas[0]);
    char respUsu;
    int ptos;

    printf("Mini-Test\n");

    for (int i = 0; i < numPregu; i++)
    {
        printf("////////////////////////////\n");
        printf("%s\n",preguntas[i]);
        printf("////////////////////////////\n");
        for (int j = (i * 3); j < (i * 3 + 3); j++)
        {
            printf("%s\n",opciones[j]);
        }
        printf("Introduzca su respuesta: ");
        scanf("%c",&respUsu);
        scanf("%c");
      

    }
    

    return 0;
}