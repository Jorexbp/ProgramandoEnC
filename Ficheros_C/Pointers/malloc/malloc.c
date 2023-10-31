#include <stdio.h>
#include <stdlib.h>

struct Persona // == 68 bytes
{
    int edad;        // 4 bytes
    char nombre[64]; // 64 bytes
};

int main()
{
    struct Persona *pPersona = malloc(sizeof(struct Persona));
    pPersona->edad= 18;
    pPersona->nombre[0] = 'J'; 
    pPersona->nombre[1] = 'O';
    pPersona->nombre[2] = 'R';
    pPersona->nombre[3] = 'G';
    pPersona->nombre[4] = 'E';

    printf("%s%d\n","Tamano del malloc: ",sizeof(pPersona));
    printf("Pointer: %p\tNombre: %s\tEdad: %d",pPersona,pPersona->nombre,pPersona->edad);


    free(pPersona);




    return 0;

}