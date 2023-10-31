#include <stdio.h>
#include <stdbool.h>

#define ANCHURA 12
#define ALTURA 12
void mostrarTodoLaberinto(char[][ANCHURA]);
void mostrarLaberinto(char[][ANCHURA], int, int);
bool movimientoValido(char[][ANCHURA], int, int, int);

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

int main()
{
    int rowInicial = 2;
    int colInicial = 0;

    laberinto[rowInicial][colInicial] = 'X';

    int rowNueva = rowInicial;
    int colNueva = colInicial;
    int usuario;

    do
    {
        mostrarLaberinto(laberinto, rowNueva, colNueva);
        printf("%s", "Introduzca 1-> Derecha\t2-> Izquierda\t3-> Arriba\t4-> Abajo\t5-> Ver Mapa\n");
        scanf("%d", &usuario);
        printf("\n\n");
        if(usuario == 5){
            mostrarTodoLaberinto(laberinto);
        }else
        if (movimientoValido(laberinto, usuario, rowNueva, colNueva))
        {
            switch (usuario)
            {
            case 1:
                laberinto[rowNueva][colNueva] = '.';
                colNueva++;
                laberinto[rowNueva][colNueva] = 'X';
                break;
            case 2:
                laberinto[rowNueva][colNueva] = '.';
                colNueva--;
                laberinto[rowNueva][colNueva] = 'X';
                break;
            case 3:
                laberinto[rowNueva][colNueva] = '.';
                rowNueva--;
                laberinto[rowNueva][colNueva] = 'X';
                break;
            case 4:
                laberinto[rowNueva][colNueva] = '.';
                rowNueva++;
                laberinto[rowNueva][colNueva] = 'X';
                break;
            default:
                break;
            }
        }
        else
        {
            printf("%s", "Movimiento no valido\n");
        }

        if(rowNueva == 4 && colNueva == 11)
        {
            printf("%s\n","HAS GANADO");
            break;
        }

    } while (laberinto[rowNueva][colNueva] != 'E');

    return 0;
}

bool movimientoValido(char laberinto[][ANCHURA], int opcion, int rowAct, int colAct)
{
    switch (opcion)
    {
    case 1:
        if (laberinto[rowAct][colAct + 1] != '#')
        {
            return true;
        }
        else
        {
            return false;
        }
        break;
    case 2:
        if (laberinto[rowAct][colAct - 1] != '#')
        {
            return true;
        }
        else
        {
            return false;
        }

        break;
    case 3:
        if (laberinto[rowAct - 1][colAct] != '#')
        {
            return true;
        }
        else
        {
            return false;
        }
        break;
    case 4:
        if (laberinto[rowAct + 1][colAct] != '#')
        {
            return true;
        }
        else
        {
            return false;
        }
        break;
    default:

        break;
    }
}

void mostrarLaberinto(char laberinto[][ANCHURA], int rowPos, int colPos)
{

    printf("%c %c %c \n", laberinto[rowPos - 1][colPos - 1], laberinto[rowPos - 1][colPos], laberinto[rowPos - 1][colPos + 1]);

    printf("%c %c %c \n", laberinto[rowPos][colPos - 1], laberinto[rowPos][colPos], laberinto[rowPos][colPos + 1]);

    printf("%c %c %c \n", laberinto[rowPos + 1][colPos - 1], laberinto[rowPos + 1][colPos], laberinto[rowPos + 1][colPos + 1]);
     printf("\n");
      printf("\n");
}

void mostrarTodoLaberinto(char laberinto[][ANCHURA])
{
printf("%s\n","\tMAPA GLOBAL");
    for (int i = 0; i < ALTURA; i++)
    {
        for (int j = 0; j < ANCHURA; j++)
        {
            printf("%c ", laberinto[i][j]);
        }
        printf("\n");
    }

    printf("\n");printf("\n");
}