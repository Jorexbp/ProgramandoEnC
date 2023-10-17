#include <stdio.h>
#include <math.h>

int main(){

double A;
double B;
double C;

printf("\nIntroduce el lado A\n");
scanf("%lf",&A);

printf("\nIntroduce el lado B\n");
scanf("%lf",&B);

C = sqrt(A*A+B*B);

printf("\nEl lado C es: %lf\n",C);



    return 0;
}