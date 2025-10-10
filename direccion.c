#include  <stdio.h>

int main()
{
    //int a=0, b[3];
    /*printf("%d\n",&a);
    printf("%d\n",&b);
    printf("%d\n%d\n%d\n",&b[2],&b[1],&b[0]);*/
    int i,b,j;
    int g[3][3]={0,01,02,10,11,12,20,21,22};
    printf("%d\n",&g);
    printf("%d\n%d\n",&g[0][0],g[1][1]);

    for(i=0;i<=2;i++)
        {printf("\n");
            for(j=0;j<=2;j++)
            printf("  %d\4",g[i][j]);
    }






    return 0;
}
