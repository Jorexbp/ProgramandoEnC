#include <stdio.h>

int main(){

    FILE *pF = fopen("C:\\Users\\Alumno\\Desktop\\textoEnC.txt","w"); // w = sobreescribe, a = concatena
    fprintf(pF,"Estoy escribiendo desde C");

    fclose(pF); 

    /*
    if(remove("test.txt") == 0){
        printf("Fichero eliminado correctamente");
    }else{
        printf("Fichero NO eliminado");
    }
    */

    return 0;
}
