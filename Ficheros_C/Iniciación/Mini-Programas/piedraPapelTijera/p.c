#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main(){

    srand(time(0));
    int numeroAdivinar = (rand() % 3) + 1;
   
    char opciones[][10] = {"Piedra","Papel","Tijera"};
    char usuario[25];
    char res[25] ;
    strcpy(res,opciones[numeroAdivinar]);
    //printf("%d",numeroAdivinar);
    
    printf("Introduzca su accion: Piedra / Papel / Tijera\n");
    scanf("\n%s",&usuario);
    printf("\n");
    if(strcmp(res,"Piedra") && strcmp(usuario,"Piedra")){
        printf("Empate");
    } else if (strcmp(res,"Piedra") && strcmp(usuario,"Papel")){
        printf("Has ganado");
    }else if (strcmp(res,"Piedra") && strcmp(usuario,"Tijera")){
        printf("Has perdido");
    }else if (strcmp(res,"Papel") && strcmp(usuario,"Tijera")){
        printf("Has ganado");
    }else if (strcmp(res,"Papel") && strcmp(usuario,"Piedra")){
        printf("Has perdido");
    }else if (strcmp(res,"Papel") &&  strcmp(usuario,"Papel")){
        printf("Empate");
    }else if (strcmp(res,"Tijera") && strcmp(usuario,"Tijera")){
        printf("Empate");
    }else if (strcmp(res,"Tijera") &&  strcmp(usuario,"Papel")){
        printf("Has perdido");
    }else if (strcmp(res,"Tijera") &&  strcmp(usuario,"Piedra")){
        printf("Has ganado");
    }
    return 0;
}