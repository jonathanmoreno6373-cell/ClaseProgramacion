#include <stdio.h>

int main()


{
    int edad;
    printf("Ingresa la edad\n");
    scanf("%i", & edad);
   if(edad >=18)
    {
       if(edad >=65)
        printf("adulto es mayor");
        else{printf("Es mayor");}
    }
    else
    {
        printf("es menor");
    }



    return 0;
}
