#include <stdio.h>

int main(){
     const MAX_MEM = 64 * 1020;
   
    int mem[MAX_MEM];
for (int i = 0; i < MAX_MEM; i++)
{
   mem[i] = 0;
   /*
   if(i % 64 == 0 ){
    printf("\n%d",mem[i]);
   }else{
    printf("%d",mem[i]);
   }
   */
}
    return 0;
}