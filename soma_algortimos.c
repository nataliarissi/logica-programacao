/ by Natalia Rissi
#include <stdio.h>
int main()
{
    float numero, soma;
    soma=0;
    printf("\tProg para calcular a soma de alguns numeros digitados pelo usuario\n");
    //quando um numero negativo for digitado encerra o codigo
    do
    {
        printf("\nDigite um numero\n");
        scanf("%f", &numero);
     if(numero>0)
        soma=soma+numero;

    }
        
    while(numero>=0);
    printf("\nResultado %f", soma);

}
