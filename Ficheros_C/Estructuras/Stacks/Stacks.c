#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;
    struct nodo *nextNodo;
};
// Push al top
// Pop del top

struct nodo *push(struct nodo *, int);
struct nodo *pop(struct nodo *);
void printStack(struct nodo *);
int main()
{

    struct nodo *topPtr;

  
    
    int usuario = 0;

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
    struct nodo *nuevo = malloc(sizeof(struct nodo));
    if (nuevo != NULL)
    {
        nuevo->data = data;
        nuevo->nextNodo = topPtr;
        topPtr = nuevo;
        return topPtr;
    }
}
struct nodo *pop(struct nodo *topPtr)
{
    if(topPtr != NULL){
    printf("%s%d\n","Valor popeado: ",topPtr->data);
    topPtr = topPtr->nextNodo;
    }else{
        printf("%s","//////////////\nNO EXISTEN VALORES\n//////////////\n");
    }
    return topPtr;
}

void printStack(struct nodo *Stack)
{
    int pos = 1;
    printf("\n");
    while (Stack != NULL)
    {
        printf("%d ---> ", Stack->data);
        Stack = Stack->nextNodo;
    }
    printf("%s", "NULL\n");
}