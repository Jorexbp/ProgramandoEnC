#include <stdio.h>

int main()
{

    int x = 6;      // 00000110
    int y = 12;     // 00001100
    int z = 0;      // 00000000

    z = x & y;
    printf("AND = %d\n",z);

    z = x | y;
    printf("OR = %d\n",z);

    z = x ^ y;
    printf("XOR = %d\n",z);

    z = x << 1;
    printf("BITSHIFT LEFT (x<<1) = %d\n",z);

    z = x >> 1;
    printf("BITSHIFT RIGHT (x>>1) = %d\n",z);
    return 0;
}