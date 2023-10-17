#include <stdio.h>

int main(){
    
    int edad;

    printf("Introduce tu edad\n");
    scanf("%d",&edad);
    if(edad >= 18){
        printf("Eres mayor de edad");
    }else if(edad<0){
printf("Aun no has nacido");
    }
    else{
        printf("No eres mayor de edad");
    }

    
    return 0;
}