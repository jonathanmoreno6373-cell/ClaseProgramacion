#include <stdio.h>

int main()
{
   float prom;
   int op, y=7,m;
   int t,b=0,i,d[6]={1,2,0,0,3,2};
   do{
   printf("Que quieres?\n");
   printf("1.ver todos los resultados \n2.Ver resultado de un partido en especifico \n3.Modificar todos los resultados \n4.Modificar un resultado en especifico \n5.promedio \n6.salir\n");
   scanf("%d",&op);
   switch(op)
{
case 1:
    printf("Los resultados son los siguientes");
     for(i=0; i<6;i++)
    {
        printf("el marcador del juego es.. %d %d \n",i+1,d[i]);
        b+= d[i];
    }
    break;
case 2:
    printf("Ingresa el numero de partido\n ");
    scanf("%d",&t);
    printf("El resultado de este partido es.. %d \n",d[t-1]);

    break;
case 3:
     for(i=0; i<6;i++)
    {
        printf("Escriba cantidad de goles %d =",i+1);
        scanf("%d",&d[i]);
    }
    break;
case 4:
    printf("Que resultado de partido quieres cambiar");
    scanf("%d",&m);
    printf("Cual es el valor que quieres asignar");
    scanf("%d",&d[m-1]);
    printf("El nuevo valor de %d=%d",m,d[m-1]);
    break;
case 5:
   for(i=0; i<6;i++)
    {
        b+= d[i];
    }
    prom=b/6;
    printf("El promedio de los partidoes es= %.2f ",prom);
    break;
case 6:
    y=0;
    printf("saliendo del sistema");
    break;

}








   }while(y!=0);
    return 0;
}
