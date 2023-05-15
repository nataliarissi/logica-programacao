//by Natalia Rissi
//SOMAR OQ TEM DENTRO DE UMA MATRIZ
#include <stdio.h>
int main()
{

	int mat[0], numeroDigitado, soma;	
	printf("\tProg pra inverter a ordem dos valores\n");
	printf("\nDigite o valor\n");
	soma=0;
 for(numeroDigitado=7; numeroDigitado>=0; numeroDigitado--)
   {
	scanf(" %d", &mat[numeroDigitado]);
	soma = soma + mat[numeroDigitado]; // soma += mat[n] acumulador
   }
 	printf("%d", soma);
}





#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA], n, m, soma;
	soma = 0;
    // le os numeros digitados pelo usuario e preenche a matriz
    for (n = 0; n < LINHA; n++)
    {
        for (m = 0; m < COLUNA; m++)
        {
            printf("Digite o valor da matriz[%d][%d]: ", n, m);
            scanf("%d", &matriz[LINHA][COLUNA]);
        }
    }

    // soma os numeros da matriz utilizando laco for
    for (n = 0; n < LINHA; n++)
    {
        for (m = 0; m < COLUNA; m++)
        {
            soma += matriz[n][m];
        }
    }

    // exibe o resultado da soma na tela
    printf("A soma dos elementos da matriz: %d\n", soma);

}