#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct 
{
    char nombre[25];
    char pass[12];
    int id;
}User;

int main()
{
    User usu01 = {"Luis", "contra123", 123456789};
    User usu02 = {"Carlos", "123contra", 987654321};

   // user usu1 = "Jorge";

   printf("%s\n",usu01.nombre);
   printf("%s\n",usu01.pass);
   printf("%d\n",usu01.id);

   printf("%s\n",usu02.nombre);
   printf("%d\n",usu02.pass);
   printf("%s\n",usu02.id);

    return 0;
}