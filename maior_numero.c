// by Natalia Rissi

#include <stdio.h>
int main()
{
	char escolha;
    float NumeroDigitadoAtual, maiorNumeroDigitado;
    printf("\tProg para usuario digitar os numeros e imprimir na tela o maior numero digitado\n");

    maiorNumeroDigitado=0;
    do
    {
       printf("\nDigite um numero\n");
       scanf("%f", &NumeroDigitadoAtual);
	   
	   if(maiorNumeroDigitado<NumeroDigitadoAtual)
           maiorNumeroDigitado=NumeroDigitadoAtual;
 
 
 
    printf("\nQuer mais?  \nsSim\n   \nsNao\n");
	fflush(stdin);
	scanf("%c", &escolha);
	}
	
	while(escolha=='s' || escolha=='S');
	printf("\nResultado %f", maiorNumeroDigitado);



}