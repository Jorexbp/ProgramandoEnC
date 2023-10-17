#include <stdio.h>

// Con esto da error y no compila y te seguras de pasar los args correctos

void cumple(char[],int); // Function prototype

int main(){
    char nombre[] = "Jorge";
    int edad = 18;

    //cumple(nombre,edad);
    return 0;
}

void cumple(char nom[],int edad){
    printf("Feliz cumpleanos\n");
    printf("Feliz cumpleanos\n");
    printf("Feliz cumpleanos a ti %s\n",nom);
    printf("Que no cumple 1 que cumple %d...\n",edad);
    printf("OLEEE\n");
}