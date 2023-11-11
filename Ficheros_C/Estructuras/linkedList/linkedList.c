#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int datos;
    struct nodo *link;
};
struct nodo *insertarAlInicio(struct nodo *, int);
void insertarAlFinal(struct nodo *, int);

int main()
{
    struct nodo *cabeza = NULL;  // En este puntero guardo el primer nodo
    struct nodo *current = NULL; // En este guardare el que este señalando en el momento correspondiente

    cabeza = (struct nodo *)malloc(sizeof(struct nodo));

    cabeza->datos = 42;
    cabeza->link = NULL;

    current = (struct nodo *)malloc(sizeof(struct nodo)); // Aqui creo el N elemento del LinkedList igual que la cabeza

    current->datos = 66;
    current->link = NULL;

    cabeza->link = current; // Al enlace de la cabeza, le paso el siguiente nodo

    cabeza = insertarAlInicio(cabeza, 100); // Pongo que la cabeza sea otro nodo que he creado para que se posicione antes

    insertarAlFinal(cabeza, 20); // Inserto en al final en cuestión de la cabeza un nodo

    insertarAlFinal(cabeza, 79);
    insertarAlFinal(cabeza, 125);

    while (cabeza != NULL) // Mientras que el link no sea NULL itera
    {
        printf("%s%d\n", "El valor es ", cabeza->datos);
        cabeza = cabeza->link; // Paso del primer nodo al siguiente mediante el enlace
    }

    return 0;
}

struct nodo *insertarAlInicio(struct nodo *cabeza, int valor)
{
    struct nodo *nuevoPtr = (struct nodo *)malloc(sizeof(struct nodo)); // En este guardare el que este señalando en el momento correspondiente

    nuevoPtr->datos = valor; // Valor que haya pasado
    nuevoPtr->link = NULL;

    nuevoPtr->link = cabeza; // El enlace del nuevo nodo llevará a la cabeza que era antes
    cabeza = nuevoPtr;       // La cabeza es ahora el nuevo nodo
    return cabeza;
}

void insertarAlFinal(struct nodo *current, int valor)
{
    struct nodo  *temp;
    temp = (struct nodo *)malloc(sizeof(struct nodo)); // Inicializa la variable temporal

    temp->datos = valor; // En la temporal asigno el valor
    temp->link = NULL;   // Como va a ser el ultimo nodo de la LinkedList no apunta a nada

    while (current->link != NULL) // Recorro todo el LinkedList hasta encontrar un enlace que sea NULL
    {
        current = current->link; // Una vez encontrado, asigna el nodo al nodo que tiene el link NULL
    }
    current->link = temp; // A ese nodo con el link NULL, le cambio el enlace por la direccion de la variable temporal que ya tiene los datos
}