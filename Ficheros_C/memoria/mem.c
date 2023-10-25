#include <stdio.h>

int main(){

    char a = 'X'; // 1 byte
    short b = 'Y'; // 2 bytes
    int c = 'Z'; // 4 bytes
    double d = 'Z'; // 9 bytes

    printf("%d bytes\n",sizeof(a));
    printf("%d bytes\n",sizeof(b));
    printf("%d bytes\n",sizeof(c));

    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);

    return 0;
}