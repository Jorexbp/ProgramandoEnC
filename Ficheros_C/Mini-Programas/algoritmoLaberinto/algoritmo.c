#include <stdio.h>

#define ANCHURA 12
#define ALTURA 12

void labTraverse(char[][ANCHURA], int, int);
void mostrarLaberinto(char[][ANCHURA]);

char laberinto[ALTURA][ANCHURA] = {

    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
    {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
    {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', 'E'},
    {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}

};

const char direcciones[] = {'A', 'B', 'D', 'I'}; // ARRIBA, ABAJO, DRCH, IZQ -> PREFERNCIA
int main()
{
    int colStart = 0;
    int rowStart = 2;
    char preferencia = direcciones[2];
    mostrarLaberinto(laberinto);
    labTraverse(laberinto, rowStart, colStart);
    return 0;
}

void labTraverse(char lab[][ANCHURA], int rowIni, int colIni)
{
    int rowPos = rowIni;
    int colPos = colIni;

    lab[rowPos][colPos] = 'X';

    // lab[rowPos][colPos] != 'E'
    char dirr = 'D';
    while (lab[rowPos][colPos] != 'E')
    {
        mostrarLaberinto(lab);
     
          
        
    }
}

void mostrarLaberinto(char lab[][ANCHURA])
{
    for (int i = 0; i < ALTURA; i++)
    {
        for (int j = 0; j < ANCHURA; j++)
        {
            printf("%c ", lab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
