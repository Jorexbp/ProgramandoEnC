#include <stdio.h>
#include <string.h>
int main()
{

    // Como cada String es un arr de chars se hace asi
    char nombres[][10] = {"Jorge", "David", "Ana"};
    strcpy(nombres[0], "Juan");

    for (int i = 0; i < sizeof(nombres) / sizeof(nombres[0]); i++)
    {
        printf("%s\n", nombres[i]);
    }

    return 0;
}