#include <stdio.h>

int main()
{
    // textoEnC.txt
    const char addr[] = "C:\\Users\\Alumno\\Desktop\\textoEnC.txt";
    FILE *pF = fopen(addr, "r"); // r = leer
    char buffer[255];

    if (pF == NULL)
    {
        printf("No se pudo abrir el archivo: \"%s\"", addr);
    }

    while (fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pF);

    return 0;
}
