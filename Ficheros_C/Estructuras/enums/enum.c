#include <stdio.h>

enum Dia
{
    Lunes = 1,
    Martes = 2,
    Miercoles = 3,
    Jueves = 4,
    Viernes = 5,
    Sabado = 6,
    Domingo = 7
};

int main()
{
    enum Dia hoy = Lunes;


    printf("%d\n",hoy);

    if(hoy == Sabado || hoy == Domingo){
        printf("Estamos en finde");
    }else {
        printf("Estamos entre semana");
    }


    return 0;
}
