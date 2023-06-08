//by Natalia Rissi
//usando a matriz bi para fazer um programa e calcular o determinante de uma matriz 3x3
#include <stdio.h>
int main()
{
    float mat[3][3], calc1, calc2, calc3, calc4, calc5, calc6, det;
    int n, m;
    printf("\n[00 01 02]\n  \n[10 11 11]\n  \n[20 21 22]\n");
    for(n=0; n<3; n++)
     for(m=0; m<3; m++)
     {
        printf("\nDigite a posicao %d, %d\n", n, m);
        scanf("%f", &mat[n][m]);
     }
    calc1=mat[0][0]*mat[1][1]*mat[2][2];
    calc2=mat[0][1]*mat[1][2]*mat[2][0];
    calc3=mat[0][2]*mat[1][0]*mat[2][1];
    calc4=mat[0][2]*mat[1][1]*mat[2][0];
    calc5=mat[0][0]*mat[1][2]*mat[2][1];
    calc6=mat[0][1]*mat[1][0]*mat[2][2];
    det=calc1+calc2+calc3-calc4-calc5-calc6;
    
    for(n=0; n<3; n++)
     {for(m=0; m<3; m++)
        printf(" %f", mat[n][m]);
    printf("\n");
     }
    printf("Determinante: %f", det);
    
}
