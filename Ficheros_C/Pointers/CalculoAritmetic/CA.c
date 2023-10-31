#include <stdio.h>

struct Persona // == 68 bytes
{
    int edad;        // 4 bytes
    char nombre[64]; // 64 bytes
};

int main()
{
    struct Persona persona[100];
    struct Persona *pPersona = &persona;

    for (int i = 0; i < 100; i++)
    {
        pPersona->edad = i;
        pPersona+=1; // C Suma automaticamente la cantidad de bytes correspondientes, en este caso al sumar 1 hace: 1 * 68 = NUEVA_ADDR
        pPersona->nombre[0] = 0;
    
    }


    return 0;
}