#include <stdio.h>

int main(){
  int x = 5;
  int y = 2;
 int z = 5 * 2;

    printf("%d\n",z);
    
    z = x/y;
    printf("%d\n",z); // No puede haber decimales asi que los quita
    
    float f  = x / (float) y; // Si siguen siendo ints no permite decimales
    printf("%.2f\n",f); 
   
    z = x % y;
    printf("%d\n",z); 

    x++;
    y--;
    printf("%d\n",x);
    printf("%d\n",y);

    x += 2;
    y -= 3;
    printf("%d\n",x);
    printf("%d\n",y);
    
    return 0;
}