#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tablero[3][3];
const char USUARIO = 'X';
const char ORDENADOR = 'O';

void reiniciarTablero();
void mostrarTablero();
void movJugador();
void movOrdenador();
char comprobarGanador();
int comprobarEspacios();
void mostrarResultado(char);

int main()
{
    int opc;

    do
    {
        char ganador = ' ';
        reiniciarTablero();
        mostrarTablero();
        while (ganador == ' ' || comprobarEspacios() != 0)
        {
            ganador = comprobarGanador();
            if (ganador != ' ' || comprobarEspacios() == 0)
            {
                break;
            }
            movJugador();
            movOrdenador();
        }
        mostrarResultado(ganador);
        printf("\nQuiere volver a jugar?(Y - 1/N - 0)\n");
        scanf("%d", &opc);
    } while (opc != 0);
    return 0;

    
}

void mostrarTablero()
{
    for (int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c\n", tablero[i][0], tablero[i][1], tablero[i][2]);

        if (i != 2)
        {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

void reiniciarTablero()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tablero[i][j] = ' ';
        }
    }
}

void movJugador()
{
    int row;
    int col;

    do
    {

        printf("Introduce el # de fila (1-3):\n");
        scanf("%d", &row);
        row--;
        printf("Introduce el # de columna (1-3):\n");
        scanf("%d", &col);
        col--;

        if (tablero[row][col] != ' ')
        {
            printf("Movimiento invalido!\n");
            mostrarTablero();
        }else if(comprobarEspacios() == 0)
        {
            break;
        }
        else
        {
            tablero[row][col] = USUARIO;
            break;
        }
    } while (tablero[row][col] != ' ');
    mostrarTablero();
}

void movOrdenador()
{
    int row;
    int col;
    srand(time(0));

    do
    {
        row = rand() % 3;
        col = rand() % 3;

        if (tablero[row][col] == ' ')
        {
            tablero[row][col] = ORDENADOR;
            break;
        }
        else if (comprobarEspacios() == 0)
        {
            break;
        }

    } while (tablero[row][col] != ' ');
    mostrarTablero();
}

int comprobarEspacios()
{
    int espacios = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tablero[i][j] != ' ')
            {
                espacios--;
            }
        }
    }
    return espacios;
}

char comprobarGanador()
{
    for (int i = 0; i < 3; i++)
    {

        if (tablero[i][0] == tablero[i][1] && tablero[i][0] == tablero[i][2])
        {
            return tablero[i][0];
        }
        else if (tablero[0][i] == tablero[1][i] && tablero[0][i] == tablero[2][i])
        {
            return tablero[0][i];
        }
        else if (tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2])
        {
            return tablero[0][0];
        }
        else if (tablero[2][0] == tablero[1][1] && tablero[2][0] == tablero[0][2])
        {
            return tablero[2][0];
        }
    }
    return ' ';
}

void mostrarResultado(char ganador)
{
    switch (ganador)
    {
    case 'X':
        printf("HAS GANADO!\n");
        break;
    case 'O':
        printf("HAS PERDIDO!\n");
        break;
    case ' ':
        printf("EMPATE\n");
        break;
    default:
       
        break;
    }
}