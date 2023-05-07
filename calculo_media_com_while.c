// by Natalia Rissi 
#include <stdio.h>

int main ()
{
    int n;
    float m, a, b;
    printf("\tProg para calcular media dos alunos\n");
    do
     {
        printf("\nDigite a primeira nota\n");
        scanf("%f", &a);
        printf("\nDigite a segunda nota\n");
        scanf("%f", &b);       
        m = (a+b)/2;
        printf("\nA media deu %f", m);
        printf("\nDeseja continuar 1sim 2nao?\n");
        scanf("%d", &n);
     }    
    while(n==1);
       { m = (a+b)/2;
        printf("\nA media deu %f", m);
        
        
       }

}