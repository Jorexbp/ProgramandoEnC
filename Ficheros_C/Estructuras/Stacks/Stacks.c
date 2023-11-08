#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;
    struct nodo *nextNodo;
};
// Push al top
// Pop del top


struct nodo * push(struct nodo *, int);
int pop(struct nodo *);
void printStack(struct nodo *);
int main()
{

   struct nodo *topPtr;
        
  topPtr = push(topPtr, 10);
   topPtr =  push(topPtr,25);

    printStack(topPtr);

    return 0;
}

struct nodo *  push(struct nodo *topPtr, int data)
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

void printStack(struct nodo *Stack)
{
    int pos = 1;
    printf("\n");
    while (Stack != NULL)
    {
        printf("%d ---> ",Stack->data);
        Stack = Stack->nextNodo;
        
    }
    printf("%s","NULL\n");
}