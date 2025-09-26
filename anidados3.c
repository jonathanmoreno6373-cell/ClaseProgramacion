#include <stdio.h>

int main()
{
    int op, x;
    printf("Escriba un numero \n");
    scanf("%i", &x);
    printf("Escriba una opcion \n");
    scanf("%i", &op);
    switch(op){
case 1:
    if(x>0)
        printf("Positivo");
    else
        printf("No positivo");
    break;
case 2:
    if(x%2)
        printf("ES par");
    else
        printf("No es par");
    break;
default:
    printf("no se eligio nada");
    break;
    }


    return 0;
}
