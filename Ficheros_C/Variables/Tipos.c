#include <stdio.h>
#include <stdbool.h>

int main(){
   
   char a = 'A'; // %c un char
   char b[] = "String"; // %s muchos chars

    float c = 3.141592; // 32 bits de precisión (6-7 dígitos) - %f
    double d = 3.141592653589793;// 64 bits de precisión (15-16 dígitos) - %lf

    // Se usa %0.nlf/f para decir cuanta preción mostrar (n = numero)
    printf("Float: %0.15f\n",c); // Pierde precisión
    printf("Double: %0.15lf\n",d); // Conserva todo

    bool e = true; // 1 byte %d
    printf("Booleano: %d\n",e);

    char f = 120; // 1 byte ( -128 hasta +127) %d / %c
    printf("Char (d): %d\n",f); // Si uso d usa el valor numérico
    printf("Char (c): %c\n",f); // Si uso c usa el correspondiente ASCII


    unsigned char g = 255;  // 1 byte ( 0 hasta +255) %d / %c elimina negativos
    printf("UnChar (d): %d\n",g); // Si uso d usa el valor numérico
    printf("UnChar (c): %c\n",g); // Si uso c usa el correspondiente ASCII

    short int h = 32768; // 2 bytes (-32767 hasta +32767) %d Si pasas el max reinicia desde el mínimo
    unsigned  int i = 65535; // 2 bytes (0 hasta +65535) %d
    printf("Short int: %d\n",h); 
    printf("UnShort int: %d\n",i);

    int j = 2147483647; // 4 bytes (-2147483647 hasta +2147483647) %d
    unsigned k = 4294967295; // 4 bytes (0 hasta +4294967295) %u
    printf("Int: %d\n",j); 
    printf("UnInt: %u\n",k);

    long long int l = 9223372036854775807; // 8 bytes (-0 quintillones hasta +9 quintillones) %lld
    unsigned long long int m = 18446744073709551614U; // 8 bytes (+18 quintillones) %llu
    printf("Long long Int: %lld\n",l); 
    printf("UnLong long Int: %llu\n",m); // Se pone U porque es muy grande



    return 0;
}