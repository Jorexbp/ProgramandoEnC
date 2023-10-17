#include <stdio.h>
#include <math.h>

int main(){
const  double PI = 3.14159;
double radio;
double circum;
double area;

printf("\nIntroduce el radio\n");
scanf("%lf",&radio);

circum = 2 * PI * radio;
area = PI * radio * radio;

printf("\nLa circumferencia es: %lf\n",circum);
printf("El area es: %lf\n",area);


    return 0;
}