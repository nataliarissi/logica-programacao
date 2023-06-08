//by Natalia Rissi
usando a matriz bi, faca um programa para calcular o determinante de uma matriz 2x2
#include <stdio.h>

int main()
{
    float mat[2][2], dp, ds, d;;
    int n, m;
    //dp - diagonal principal   ds - diagonal secundaria  d - determinante
    //n = linha     m=coluna
    for(n=0; n<2; n++)
     for(m=0; m<2; m++)
     {
         printf("\nDigite a posicao %d, %d", n, m);
         scanf("%f", &mat[n][m]);
     }
    dp = mat[0][0]*mat[1][1];                 // 1(00)   2(01)
    ds = mat[0][1]*mat[1][0];                 // 3(10)   4(11)
    d = dp-ds;
    
    for(n=0; n<2; n++)
     {for(m=0; m<2; m++)
        printf(" %f", mat[n][m]);
    printf("\n");
     }
     printf("Determinante: %f", d);
}
