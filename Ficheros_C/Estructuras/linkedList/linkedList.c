#include <stdio.h>
#include <stdlib.h>

struct nodo
{                      // La estructura de los nodos para el linkedList
    int datos;         // Los datos guardados en el, pueden ser varios y del tipo de dato que sea
    struct nodo *link; // El puntero a una estructura del mismo tipo de nodo, en las linkedList singulares solo hay uno, en las múltiples varios
};

int main()
{
    struct nodo *cabeza = NULL; // El primer enlace al primer elemento del linkedList es nulo porque es una nueva creacion

    cabeza =(struct nodo *) malloc(sizeof(struct nodo));
    
    printf("Introduzca un numero para almacenar\n");
    int usur;
    scanf("%d",&usur);

    cabeza -> datos = usur;

     cabeza -> link = (struct nodo *) malloc(sizeof(struct nodo));
   
    printf("Primer valor introducido: %d\tPuntero: %p\n",cabeza->datos,cabeza->link);
   
    printf("Introduzca otro numero para almacenar\n");
    scanf("%d",&usur);

    cabeza -> datos = usur;

    cabeza -> link = (struct nodo *) malloc(sizeof(struct nodo));
   
   

    printf("Segundo valor introducido: %d\tPuntero: %p",cabeza->datos,cabeza->link);
    cabeza -> link = NULL;
 
   free(cabeza->link);

    // El tamaño del puntero es dos veces el del valor porque el puntero tambien es del mismo tipo 
   printf("%s%lu","\nTamaño del nodo: ",sizeof(struct nodo));

    return 0;
}