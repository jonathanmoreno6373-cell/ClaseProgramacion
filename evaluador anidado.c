#include <stdio.h>

int main()
{
    int edad, calificacion;
    printf("Ingresa la edad\n");
    scanf("%i", & edad);
    printf("Ingresa la calificacion del 0 al 100\n");
    scanf("%i", &calificacion);
   if(edad >=18)
    {
       if(edad >=65)
        printf("adulto es mayor\n");
        else{printf("Es mayor\n");}
    }
    else
    {
        printf("es menor\n");
    }
   if(calificacion >=60)
   {  if(calificacion<=100)
   printf("Aprobado");
   else
   printf("no es valido el numero");}
else
    printf("No aprobado");
    return 0;
}
