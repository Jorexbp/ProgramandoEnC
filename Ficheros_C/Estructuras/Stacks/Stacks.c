#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;
    struct nodo *nextNodo;
};
// Push al top
// Pop del top


void push(struct nodo *, int);
int pop(struct nodo *);
void printStack(struct nodo *);
int main()
{

   struct nodo topPtr;
   
     
   
    push(&topPtr, 10);
  push(&topPtr,25);

    printStack(&topPtr);

    return 0;
}

void push(struct nodo *topPtr, int data)
{
    //  (struct nodo *)
    struct nodo *nuevo = malloc(sizeof(struct nodo));
    if (nuevo != NULL)
    {
        nuevo->data = data;
    //
        nuevo->nextNodo = topPtr;



    //
        *topPtr = *nuevo;
       
    }
}

void printStack(struct nodo *Stack)
{
    while (Stack->nextNodo != NULL)
    {
        printf("%s%d\n", "Valor: ", Stack->data);
        Stack = Stack->nextNodo;
        
    }
}