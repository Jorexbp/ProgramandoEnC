#include <stdio.h>

#define ANCHURA 12
#define ALTURA 12

void mazeTraverse(char [][ANCHURA], int, int);
void mostrarLaberinto(char[][ANCHURA]);

 char laberinto[ALTURA][ANCHURA] = {

    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
    {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
    {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
    {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}

};

int main()
{
    int colStart = 0;
    int rowStart = 2;
    mostrarLaberinto(laberinto);
     mazeTraverse(laberinto,rowStart,colStart);
    return 0;
}

void mazeTraverse(char lab[][ANCHURA], int rowIni, int colIni)
{
      lab[rowIni][colIni] = 'X';
        mostrarLaberinto(lab);
    
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
}