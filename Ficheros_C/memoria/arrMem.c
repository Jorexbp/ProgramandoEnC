#include <stdio.h>

int main(){

    char a;
    char arr[3]; // 3 bytes

    printf("%d bytes\n",sizeof(a));
    printf("%d bytes\n",sizeof(arr));

    printf("%p\n",&a);
    printf("%p\n",&arr);

    return 0;
}