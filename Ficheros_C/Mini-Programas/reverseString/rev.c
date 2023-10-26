#include <stdio.h>
#include <string.h>
int main(){

    char pal[25];
    printf("Introduzca una palabra\n");
    scanf("%s",&pal);
    
    for (int i = strlen(pal); i > 0; i--)
    {
        printf("%c",pal[i - 1]);
    }
    
    return 0;
}