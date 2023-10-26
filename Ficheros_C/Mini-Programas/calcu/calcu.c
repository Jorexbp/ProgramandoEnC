#include <stdio.h>

int main(){
    
    char operador;
    double n1;
    double n2;
    double resul;

    
    printf("Introduce un operador\n");
    scanf("%c",&operador);

    printf("Introduce un numero\n");
    scanf("%lf",&n1);

    printf("Introduce otro numero\n");
    scanf("%lf",&n2);

    switch (operador)
    {
    case '-':
        resul = n1 - n2;
        printf("Resultado: %.2lf",resul);
        break;
    case '+':
   resul = n1 + n2;
   printf("Resultado: %.2lf",resul);
        break;
    case '/':
    resul = n1 / n2;
    printf("Resultado: %.2lf",resul);
        break;
    case '*':
    resul = n1 * n2;
    printf("Resultado: %.2lf",resul);
        break;
    default:
    printf("Operador %c no soportado",operador);
        break;
    }


    return 0;
}