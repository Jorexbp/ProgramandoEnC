#include <stdio.h>
#include <stdlib.h>

struct nodoHash
{
    int value;   // 4
    int key;     // 4
};               // 8
int TAMANO = 10; // El tamaño deberia ser primo para asegurar que los numeros se distribuyan de manera uniforme

int funcionHash(int);
void reiniciarHashTable(struct nodoHash *);
void mostrarHashTable(struct nodoHash *);
void insertarValor(struct nodoHash *, int, int);
int esPrimo(int);
struct nodoHash *iniciarHashTable();
void eliminarElemento(struct nodoHash *, int);
int pedirLlave();
int pedirValor();
int instrucciones();
int cambiarPrimo(int capacidad);
int main()
{
    struct nodoHash *HashTable = iniciarHashTable();
    int operacion = 0;
    do
    {
        operacion = instrucciones();
        switch (operacion)
        {
        case 1:
            insertarValor(HashTable, pedirLlave(), pedirValor());
            break;
        case 2:
            mostrarHashTable(HashTable);
            break;
        case 3:
            eliminarElemento(HashTable, pedirLlave());
            break;
        case 4:
            reiniciarHashTable(HashTable);
            break;
        default:

            break;
        }
    } while (operacion != 0);
    return 0;
}

struct nodoHash *iniciarHashTable()
{
    struct nodoHash *HashTable = (struct nodoHash *)malloc(TAMANO * sizeof(struct nodoHash));

    reiniciarHashTable(HashTable);
    return (HashTable);
}
void insertarValor(struct nodoHash *HashTable, int llave, int valor)
{
    int b = 1;
    llave = funcionHash(llave);
    for (int i = 0; i < llave; i++)
    {

        HashTable++;
    }
    if ((*HashTable).value != 0)
    {
        b = 0;
    }
    if (b == 1)
    {
        (*HashTable).value = valor;
    }
    else
    {
        printf("%s\n", "Colision!!");
    }
}

void eliminarElemento(struct nodoHash *HashTable, int llave)
{
    llave = funcionHash(llave);
    for (int i = 0; i < llave; i++)
    {

        HashTable++;
    }
    if((*HashTable).value = 0)
    {
        printf("%s","Valor inexistente\n");
    }else{
        (*HashTable).value = 0;
    }
}

void reiniciarHashTable(struct nodoHash *HashTable)
{
    TAMANO =cambiarPrimo(TAMANO);
    for (int i = 0; i < TAMANO; i++)
    {
        (*HashTable).key = funcionHash(i);
        (*HashTable).value = 0;
        HashTable++;
    }
}

void mostrarHashTable(struct nodoHash *HashTable)
{
    for (int i = 0; i < TAMANO; i++)
    {
        printf("%s%d%s%d\n", "Llave: ", (HashTable)->key, " Valor: ", (HashTable)->value);
        HashTable++;
    }
}

int funcionHash(int llave)
{
    return (llave % TAMANO);
}

int esPrimo(int n) // 0 = no , 1 = si
{
    for (int i = 2; i <= n / 2; ++i)
    {

        if (n % i == 0)
            return 0;
    }
    return 1;
}

int pedirLlave()
{
    printf("%s", "Introduzca la llave:\n");
    int llave;
    scanf("%d", &llave);
    return llave;
}
int pedirValor()
{
    printf("%s", "Introduzca el valor:\n");
    int valor;
    scanf("%d", &valor);
    return valor;
}
int instrucciones()
{
    printf("%s","\nIntroduzca que operacion quiere hacer:\n0.Salir\n1.Insertar\n2.Mostrar\n3.Eliminar\n4.Reiniciar\n");
    int oper = 0;
    scanf("%d", &oper);
    return oper;
}

int cambiarPrimo(int capacidad)
{
    if (capacidad % 2 == 0)
    {
        capacidad++;
    }
    while (esPrimo(capacidad) != 1)
    {
        capacidad += 2;
    }
    return capacidad;
}