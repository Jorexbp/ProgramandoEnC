#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;              // Valor del nodo
    struct nodo *nextNodo; // Ptr al siguiente nodo
};

struct nodo *push(struct nodo *, int); // Push al top
struct nodo *pop(struct nodo *);       // Pop del top
void printStack(struct nodo *);
int main()
{

    struct nodo *topPtr; // Primero nodo NULL

    int usuario = 0;

    // Esto es un Stack por lo que solo se puede acceder por el ultimo nodo (FIFO),
    // Añades un nuevo nodo e irá al inicio e igual si popeas un nodo, será el primero

    do
    {
        printf("%s", "Introduzca una opcion:\n1- Push valor\n2- Pop valor\n3- Salir\n");
        printStack(topPtr);

        scanf("%d", &usuario);
        switch (usuario)
        {
        case 1:
            printf("Introduzca un numero\n");
            int n = 0;
            scanf("%d", &n);
            topPtr = push(topPtr, n);
            break;
        case 2:
            topPtr = pop(topPtr);
            break;
        case 3:
            break;
        default:
            printf("Valor no valido\n");
        }
    } while (usuario != 3);
    return 0;
}

struct nodo *push(struct nodo *topPtr, int data)
{
    //  (struct nodo *)
    struct nodo *nuevo = malloc(sizeof(struct nodo)); // Espacio en memoria para el nodo
    if (nuevo != NULL)                                // Si se ha podido alocar en memoria
    {
        nuevo->data = data;       // Al nuevo nodo le pongo los datos
        nuevo->nextNodo = topPtr; // El nuevo nodo apunta al anterior top del Stack
        topPtr = nuevo;           // El nuevo nodo se convierte en el top del Stack
        return topPtr;
    }
}
struct nodo *pop(struct nodo *topPtr)
{
    if (topPtr != NULL)
    {                                                      // Si el nodo no es NULL
        printf("%s%d\n", "Valor popeado: ", topPtr->data); // Antes de popear muestro la info quitada
        topPtr = topPtr->nextNodo;                         // Para quitar un nodo, muevo el top del Stack al puntero del siguiente nodo del top
    }
    else
    {
        printf("%s", "//////////////\nNO EXISTEN VALORES\n//////////////\n");
    }
    return topPtr;
}

void printStack(struct nodo *Stack)
{
    int pos = 1;
    printf("\n");
    while (Stack != NULL) // Mientras que haya nodos
    {
        printf("%d ---> ", Stack->data); // Muestra la info del nodo
        Stack = Stack->nextNodo; // Para al siguiente nodo mediante el puntero
    }
    printf("%s", "NULL\n");
}