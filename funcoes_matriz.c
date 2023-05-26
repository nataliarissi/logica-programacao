//by Natalia Rissi

FUNCOES DO PROGRAMADOR
executa uma tabela especifica 

//argumentos - modularidade 
tipo_saida nome (tipo_entrada)
{
	

}


#include<stdio.h>

int main()
{
    limpa();
//    x=soma (7, 1); - retornar valor agr- vai se retornar
    x=8; //return
//    y=dob(8);
    //retornar assumir a funcao, retornar valor 
    y=16
    
}


#include<stdio.h>
float serie(float x, float y);
float paralelo(float n, float m);
//implemente um programa para calcular circuitos serie e paralelo usando funcoes

int main()
{   
    int t;
    float r1, r2, E; //E=equivalente
    printf("Digite 1Serie 2Paralelo");
    scanf("%d", &t);
    printf("Digite R1:");
    scanf("%f", &r1);
    printf("Digite R2:");
    scanf("%f", &r2);    
//  limpa();
    if(t==1)
        E= serie(r1, r2);
    else
        E= paralelo(r1, r2);
        
    printf("O resultado %f", E);
}
//---------------------------------------    
float serie(float x, float y)
    {
        float r;
        r=x+y;
        return r;
    }
    
float paralelo(float n, float m)
    {
        float l;
        l=n*m/(n+m);
        return l;
    }

