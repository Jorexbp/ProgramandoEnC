#include <stdio.h>

#define ANCHURA 12
#define ALTURA 12

void mazeTraverse(char[][ANCHURA], int, int);
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
    mazeTraverse(laberinto, rowStart, colStart);
    return 0;
}

void mazeTraverse(char lab[][ANCHURA], int rowIni, int colIni)
{
    int rowPos = rowIni;
    int colPos = colIni;

    lab[rowPos][colPos] = 'X';

    int i = 5;
    // lab[rowPos][colPos] != 'E'
    while (lab[rowPos][colPos] != 'E')
    {
        mostrarLaberinto(lab);

        // Comprobacion de salida adyacente
        if (lab[rowPos][colPos - 1] == 'E')
        {
            colPos--;
        }
        else if (lab[rowPos - 1][colPos] == 'E')
        {
            rowPos--;
        }
        else if (lab[rowPos + 1][colPos] == 'E')
        {
            rowPos++;
        }
        else if (lab[rowPos][colPos + 1] == 'E')
        {
            colPos++;
        }

        // Movimientos
        else if (lab[rowPos + 1][colPos] != '#' && lab[rowPos + 1][colPos] != 'X')
        {
            rowPos++;
            lab[rowPos][colPos] = 'X';
        }
        else if (lab[rowPos][colPos + 1] != '#' && lab[rowPos][colPos + 1] != 'X')
        {
            colPos++;
            lab[rowPos][colPos] = 'X';
        }
        else if (lab[rowPos - 1][colPos] != '#' && lab[rowPos - 1][colPos] != 'X')
        {
            rowPos--;
            lab[rowPos][colPos] = 'X';
        }
        else if (lab[rowPos][colPos - 1] != '#' && lab[rowPos][colPos - 1] != 'X')
        {
            colPos--;
            lab[rowPos][colPos] = 'X';
        }
      
       

        i--;
    }

    printf("I: %d", i);
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
