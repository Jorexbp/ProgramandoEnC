#include <stdio.h>
#include <stdlib.h>

void foo(int *buf, int count) { // Pasando el ptr lo puedo tratar como un array
    for(int i = 0; i < count; ++i)
        buf[i] = i; // Debido a que esta vacio puedo hacer esto, no sobreescribo
}   

int main()
{
    int arr[10];
    
    foo(arr,10);
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}