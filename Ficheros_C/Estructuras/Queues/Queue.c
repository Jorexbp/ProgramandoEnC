#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;              // Valor del nodo
    struct nodo *nextNodo; // Ptr al siguiente nodo
};

void add(struct nodo **, int); // Push al bottom
void pop(struct nodo **);      // Pop del top
void printQueue(struct nodo *);
int main()
{
    struct nodo *topPtr = NULL;



    
    int usuario = 0;
         do
        {
            printf("%s", "Introduzca una opcion (Queue):\n1- Push valor\n2- Pop valor\n3- Salir\n");
            printQueue(topPtr);

            scanf("%d", &usuario);
            switch (usuario)
            {
            case 1:
                printf("Introduzca un numero\n");
                int n = 0;
                scanf("%d", &n);
                add(&topPtr, n);
                break;
            case 2:
                pop(&topPtr);
                break;
            case 3:
                break;
            default:
                printf("Valor no valido\n");
            }
        } while (usuario != 3);
        

    return 0;
}

void add(struct nodo **current, int valor)
{
    struct nodo *temp = (struct nodo *)malloc(sizeof(struct nodo)); // Inicializa la variable temporal
    struct nodo *cambio = (struct nodo *)malloc(sizeof(struct nodo)); // Inicializa la variable temporal
    cambio = *current;
    
    temp->data = valor;    // En la temporal asigno el valor
    temp->nextNodo = NULL; // Como va a ser el ultimo nodo de la LinkedList no apunta a nada

    if ((*current) == NULL)
    {
        (*current) = temp;
    }
    else
    {
        while (1)
        {
            if (cambio->nextNodo == NULL)
            {
                cambio->nextNodo = temp;
                break;
            }
            cambio = cambio->nextNodo;
        }
    }
}
void pop(struct nodo **current)
{
    if ((*current) != NULL)
    {
        printf("%s%d\n", "Valor popeado: ", (*current)->data);
        *current = (*current)->nextNodo;
    }
    else
    {
        printf("%s", "//////////////\nNO EXISTEN VALORES\n//////////////\n");
    }
}

void printQueue(struct nodo *Stack)
{
    int pos = 1;
    printf("\n");
    printf("%s", "NULL ");
    while (Stack != NULL) // Mientras que haya nodos
    {
        printf("<--- %d ", Stack->data); // Muestra la info del nodo
        Stack = Stack->nextNodo;         // Para al siguiente nodo mediante el puntero
    }

    printf("\n");
}