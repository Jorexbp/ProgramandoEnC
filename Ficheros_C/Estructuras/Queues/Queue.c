#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;              // Valor del nodo
    struct nodo *nextNodo; // Ptr al siguiente nodo
};

void add(struct nodo *, int); // Push al bottom
void pop(struct nodo *);      // Pop del top
void printStack(struct nodo *);
int main()
{
    struct nodo *topPtr = (struct nodo *)malloc(sizeof(struct nodo));

    topPtr->data = 42;
    topPtr->nextNodo = NULL;

    add(topPtr, 10);

    add(topPtr, 25);
    add(topPtr, 97);

    printStack(topPtr);
    pop(topPtr);
    printStack(topPtr);

    return 0;
}

void add(struct nodo *current, int valor)
{
    struct nodo *temp;
    temp = (struct nodo *)malloc(sizeof(struct nodo)); // Inicializa la variable temporal

    temp->data = valor;    // En la temporal asigno el valor
    temp->nextNodo = NULL; // Como va a ser el ultimo nodo de la LinkedList no apunta a nada

    while (current->nextNodo != NULL) // Recorro todo el LinkedList hasta encontrar un enlace que sea NULL
    {
        current = current->nextNodo; // Una vez encontrado, asigna el nodo al nodo que tiene el link NULL
    }
    current->nextNodo = temp; // A ese nodo con el link NULL, le cambio el enlace por la direccion de la variable temporal que ya tiene los datos
}
void pop(struct nodo *current)
{
    if (current != NULL)
    {
        struct nodo *temp = (struct nodo *)malloc(sizeof(struct nodo));
        temp = current;
        while (current->nextNodo != NULL) // Recorro todo el LinkedList hasta encontrar un enlace que sea NULL
        {
            // Una vez encontrado, asigna el nodo al nodo que tiene el link NULL
            if (temp->nextNodo->nextNodo == NULL)
            {
                printf("%s%d", "\nValor popeado: ", temp->nextNodo->data);
                temp->nextNodo = NULL;
                current = temp;
                break;
            }
            else
            {
                temp = current->nextNodo;
                current = temp;
            }
        }
    }
    else
    {
        printf("%s", "//////////////\nNO EXISTEN VALORES\n//////////////\n");
    }
}

void printStack(struct nodo *Stack)
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