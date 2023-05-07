// by Natalia Rissi 
#include <stdio.h>

int main()
{
    float G1, G2, media;
    printf("\tPrograma para calcular a nota final do aluno\n");
    printf("\nDigite a nota da tua G1\n");
    scanf("%f", &G1);
    printf("\nDigite a nota da tua G2\n");
    scanf("%f", &G2);
    media=(G1+G2)/2;
    
    if(media<=3)
    {
        printf("\nREPROVADO : PESSIMO");
    }
    else if(media>3 && media<=6)
    {
        printf("\nREPROVADO : RUIM");

    }
    else if(media>6 && media<=9)
    {
        printf("\nAPROVADO : SATISFATORIO");

    }
    else if(media>=9 && media<11)
    {
        printf("\nAPROVADO : OTIMO");
    }
}