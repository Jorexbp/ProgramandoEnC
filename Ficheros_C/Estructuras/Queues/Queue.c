#include <stdio.h>
#include <stdlib.h>


struct nodo
{
    int data;              // Valor del nodo
    struct nodo *nextNodo; // Ptr al siguiente nodo
};

struct nodo *push(struct nodo *, int); // Push al bottom
struct nodo *pop(struct nodo *);       // Pop del top
void printStack(struct nodo *);
int main()
{
 struct nodo *topPtr; // Primero nodo NULL
    topPtr = push(topPtr,10);
  
  
    topPtr = push(topPtr,25);
    topPtr = push(topPtr,97);
  

    printStack(topPtr);
    
    
    return 0;
}


struct nodo *push(struct nodo *topPtr, int data)
{
    //  (struct nodo *)
    struct nodo *nuevo = malloc(sizeof(struct nodo)); // Espacio en memoria para el nodo
    if (nuevo != NULL)                                // Si se ha podido alocar en memoria
    {
        nuevo->data = data;     
        nuevo->nextNodo = NULL; 
       
        if(topPtr == NULL)
        {
            topPtr = nuevo;
        }else{
            while(topPtr->nextNodo != NULL){
                topPtr = topPtr->nextNodo;
            }
            topPtr->nextNodo = nuevo;
        }
       
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