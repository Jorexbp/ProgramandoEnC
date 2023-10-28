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

    // Luego debo inicializar el LinkedList con una area de memoria que sea del tamaño del nodo que hayamos definido antes
    // Para ello, calculo el tamaño de un nodo (sizeof()), luego asigno un espacio en memoria de ese tamaño con malloc(), 
    // este método devuelve un void *ptr, es decir un puntero void que puede ser de cualquier tipo de dato, uso un cast
    // de struct nodo * indicando que es un puntero a un nodo, esto no es necesario pero deberia serlo por una mejor lectura
    // y por ultimo asigno a la cabeza del LinkedList ese puntero al primer valor del LinkedList
    cabeza =(struct nodo *) malloc(sizeof(struct nodo));
    

    // Con el operador -> accedo a los valores del nodo al que este referenciando el puntero y les asigno valores
    cabeza -> datos = 66;

    // Como no tengo otro elemento, lo dejo como NULL
    cabeza -> link = NULL;


    // Luego muestro de esta manera los valores para que sea seguro uso el %s de esta manera
    printf("%s%d","El valor del nodo es ",cabeza->datos);
    
    

    return 0;
}