// by Natalia Rissi 
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define SENHA 6071
int main()
{
    int senha;
    float escolha, calc1, calc2, num1, num2, num3, num4, num5, calc3;
    printf("\tPrograma\n");
    printf("\nPara prosseguir o programa, indique sua senha\n");
    scanf("%d", &senha);
    
    
 if(SENHA==senha)
 {
    printf("\nBem vindo Usuario\n\n");
    
    system("PAUSE");
 
    
    printf("\tPrograma para calcular area de um triangulo e um circulo\n");
    printf("Digite \n1triangulo \n2circulo \n3quadrado\n");
    scanf("%f", &escolha);

    if(escolha==1)
    {
    printf("\nDigite um numero para ser a base do triangulo\n");
    scanf("%f", &num1);
    printf("\nDigite um número para ser a altura do triangulo\n");
    scanf("%f", &num2);


        calc1 = (num1*num2)/2;
        printf("Resultado da area do triangulo é %f", calc1);
    }
    else
    { 

        if(escolha==2)
        {
           printf("\nDigite um numero para ser o raio do circulo\n");
           scanf("%f", &num3);
           calc2 = PI*(num3*num3);
           printf("Resultado da area do circulo é %f", calc2);
        }   
        else 
           if(escolha==3)
           {
              printf("\nDigite um numero para ser a base do quadrado\n");
              scanf("%f", &num4);
              printf("\nDigite um numero para ser altura do quadrado\n");
              scanf("%f", &num5);
              calc3  = num4*num5;
              printf("Resultado da area do quadrado %f", calc3);
     
           }
           else
           {
               printf("\nNumero inserido invalido");
           }    
    }
 }
 else
 {
        printf("Usuario não cadastrado");
 }
    
    
}