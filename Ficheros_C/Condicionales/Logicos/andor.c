#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = 250;
    bool sol = true;

    if(temp>=0 && temp < 30){
        printf("La temperatura esta bien\n");
    }else{
        printf("La temperatura NO esta bien\n");
    }

    if(!sol){
        printf("No hay sol hoy :(\n");
    }else{
        printf("Si hay sol hoy :)\n");
    }

    if(temp >= 0 && temp < 30 || sol ){
        printf("Hoy se esta bien y puede que soleado o soleado y muy mal\n");
        
    }

    return 0;
}