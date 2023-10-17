#include <stdio.h>

int main(){
    
    char nota;

    printf("Introduce tu nota\n");
    scanf("%c",&nota);
    switch (nota)
    {
    case 'A':
        printf("Sobresaliente");
        break;
      case 'B':
        printf("Notable");
        break;
    case 'C':
        printf("Suficiente");
        break;
          case 'D':
        printf("Insuficiente");
        break;
          case 'E':
        printf("Terrible");
        break;
    default:
    printf("Nota no válida");
        break;
    }
    
    return 0;
}