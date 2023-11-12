#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct nodo
{
    struct nodo *nodoIzq;
    struct nodo *nodoDch;
    int data;
};

void insertarNodo(struct nodo **, int value); // Se insertan izq menor que el padre y dch mayor 
void inOrder(struct nodo *); // Recorre los hijos de menor a mayor y los padres respectivamente
void reverseOrder(struct nodo *); 
void preOrder(struct nodo *); // Primero padre luego hijo
void postOrder(struct nodo *); // Primero hijo luego padre
void printArbol(struct nodo *);

int main()
{

    struct nodo *arbol = NULL;

    srand(time(NULL));
    printf("%s","Los numeros a introducir en el arbol son:\n");

int user = 0;
    do
    {
        printf("%s","Introduzca un numero para introducirlo en el arbol, -1 para salir:\n");
        scanf("%d",&user);
        if(user == -1 )
        {
            break;
        }
        insertarNodo(&arbol,user);
    } while (1);
    
    printf("%s","Arbol inOrder\n");  
    inOrder(arbol);

    printf("%s","\nArbol reverseOrder\n");  
    reverseOrder(arbol);
   
    printf("%s","\nArbol preOrder\n");
    preOrder(arbol);

    printf("%s","\nArbol postOrder\n");
    postOrder(arbol);

    return 0;
}


void insertarNodo(struct nodo **Arbol, int valor)
{
    struct nodo *nuevoNodo = (struct nodo *) malloc(sizeof(struct nodo));
    nuevoNodo->data = valor;
    nuevoNodo->nodoDch = NULL; 
    nuevoNodo->nodoIzq = NULL;
    if(*Arbol == NULL) // Si no existe el arbol
    {
        *Arbol = (struct nodo *) malloc(sizeof(struct nodo));
        *Arbol = nuevoNodo;
    }
    else
    {
        if(valor < (*Arbol)->data)
        {
            insertarNodo(&((*Arbol)->nodoIzq), valor);
        }else if(valor > (*Arbol)->data)
        {
            insertarNodo(&((*Arbol)->nodoDch), valor);
        }else
        {
            printf("%s%d\n","\nValor duplicado: ",valor);
        }
    }


}

void inOrder(struct nodo *Arbol)
{
    if(Arbol != NULL)
    {
        inOrder(Arbol->nodoIzq);
        printf("%3d ",Arbol->data);
        inOrder(Arbol->nodoDch);
    }
}
void reverseOrder(struct nodo *Arbol)
{
    if(Arbol != NULL)
    {
        reverseOrder(Arbol->nodoDch);
        printf("%3d ",Arbol->data);
        reverseOrder(Arbol->nodoIzq);
    }
}

void preOrder(struct nodo *Arbol)
{
    if(Arbol != NULL)
    {
        printf("%3d ",Arbol->data);
        preOrder(Arbol->nodoIzq);
        preOrder(Arbol->nodoDch);
    }
}

void postOrder(struct nodo *Arbol)
{
    if(Arbol != NULL)
    {
        postOrder(Arbol->nodoIzq);
        postOrder(Arbol->nodoDch);
         printf("%3d ",Arbol->data);

    }
}

