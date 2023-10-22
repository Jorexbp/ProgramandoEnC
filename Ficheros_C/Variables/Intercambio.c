#include <stdio.h>
#include <string.h>

int main()
{
    /*
       char x = 'X';
       char y = 'Y';

       char temp = x;
       x = y;
       y = temp;

       printf("x = %c",x);
       printf("\ny = %c",y);
    */
    char x[] = "agua";
    char y[] = "nestea";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s", x);
    printf("\ny = %s", y);

    return 0;
}