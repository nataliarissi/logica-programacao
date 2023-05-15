//by Natalia Rissi
#include <stdio.h>
#define TAM 8
int main()
{
	int mat[TAM], numeroDigitado, soma;	
	printf("\tProg pra inverter a ordem dos valores\n");
	printf("\nDigite o valor\n");
 for(numeroDigitado=7; numeroDigitado<TAM; numeroDigitado++)	
	 {	
		scanf(" %d", &mat[TAM]);	
		printf("\nDigite outro\n");
	 } 
	   
	printf("%d", mat[TAM]); 
	
}




#include <stdio.h>
#define QTD_VALORES 8

int main() 
{
    int valores[QTD_VALORES], n;
    // leitura dos valores
    for (int n = 0; n < QTD_VALORES; n++) {
        printf("Digite o %d valor: ", n+1);
        scanf("%d", &valores[n]);
    }

    // inversao dos valores
    for (int n = 0; n < QTD_VALORES/2; n++) {
        int temp = valores[n];
        valores[n] = valores[QTD_VALORES-1-n];
        valores[QTD_VALORES-1-n] = temp;
    }

    // exibicao dos valores invertidos
    printf("Valores invertidos:\n");
    for (int n = 0; n < QTD_VALORES; n++) {
        printf("%d ", valores[n]);
    }
    printf("\n");
}
