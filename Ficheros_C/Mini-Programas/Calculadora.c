#include <stdio.h>
#include <math.h>

int mostrarMenu();
double pedirNumero();
double ejecutarOperacion(int);

int result;

int main()
{
    int opcion;
    double resultado;
    do
    {
        opcion = mostrarMenu();
        if (opcion != 0)
        {
            resultado = ejecutarOperacion(opcion);
            printf("/////////////////////////");
            printf("\nEl resultado es: %.2lf\n", resultado);
            printf("/////////////////////////\n");
        }

    } while (opcion != 0);

    return 0;
}

int mostrarMenu()
{
    int opc;
    printf("Seleccione una de las siguientes opciones:\n");
    printf("Suma(1)\tResta(2)\tMultiplicar(3)\tDividir(4)\tRaiz cuadrada(5)\tLogaritmo(6)\tSalir(0)\n");
    scanf("%d", &opc);
    return opc;
}

double ejecutarOperacion(int oper)
{
    double x, y;
    switch (oper)
    {
    case 1:
        x = pedirNumero();
        y = pedirNumero();
        return x + y;
        break;
    case 2:
        x = pedirNumero();
        y = pedirNumero();
        return x - y;
        break;
    case 3:
        x = pedirNumero();
        y = pedirNumero();
        return x * y;
        break;
    case 4:
        x = pedirNumero();
        y = pedirNumero();
        return x / y;
        break;
    case 5:
        x = pedirNumero();

        return pow(x, 0.5);
        break;
    case 6:
        x = pedirNumero();
        return log10(x);
        break;
    default:
        break;
    }
}

double pedirNumero()
{
    double num;
    printf("Introduzca un numero:\n");
    scanf("%lf", &num);

    return num;
}