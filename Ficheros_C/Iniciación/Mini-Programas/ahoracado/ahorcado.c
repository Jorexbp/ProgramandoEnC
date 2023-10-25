#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(0));

    char opciones[][25] = {"Perro", "Gato", "Tigre", "Avion"};
    char palabra[25];
    int nAleatorio = (rand() % 4);
    int intentos = 3;
    char usuario;
    bool contiene = false; 

    strcpy(palabra, opciones[nAleatorio]);

    printf("Juguemos al ahorcado, introduce una letra\n");

    do
    {
        scanf("%c",&usuario);
        scanf("%c");
        for (int i = 0; i < strlen(palabra); i++)
        {
            if(palabra[i] == usuario){
                contiene = true;
            } 
        }

        if(contiene){
         printf("Contiene la letra %c\nIntroduzca otra:\n",usuario);
        }else{
            printf("No contiene la letra %c\nIntroduce otra letra:\n",usuario);
            intentos--;
            
        }
        contiene = false;
    } while (intentos != 0 );
    



    return 0;
}
