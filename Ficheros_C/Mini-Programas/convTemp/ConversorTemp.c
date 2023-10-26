#include <stdio.h>
#include <ctype.h>
int main(){

    char unidad;
    int temp;
    printf("Introduce la conversion (C / F)\n");
    scanf("%c",&unidad);
unidad = toupper(unidad);
    if(unidad == 'C'){
        printf("Introduce la temperatura en Fahrenheit\n");
        scanf("%d",&temp);
        temp = (temp - 32) / 1.8;
    }else if(unidad == 'F'){
         printf("Introduce la temperatura en Celsius\n");
        scanf("%d",&temp);
         temp = temp * 1.8 + 32;
         
    }else{
        printf("Introduce una conversion valida");
    }
    printf("La temperatura equivale a %d",temp);
    return 0;
}