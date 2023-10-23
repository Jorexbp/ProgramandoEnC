#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int NumAle1 = (rand() % 6) + 1;
    int NumAle2= (rand() % 6) + 1;
    int NumAle3 = (rand() % 6) + 1;

    printf("%d\n",NumAle1);
    printf("%d\n",NumAle2);
    printf("%d",NumAle3);


    return 0;
}
