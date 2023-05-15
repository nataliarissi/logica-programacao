//by Natalia Rissi
//IMPLEMETE UM PROGRAMA PARA O USUARIO DIGITAR 8 VALORES. APRESENTE-OS A TELA
#include <stdio.h>
int main ()
{
	int mat[8], numeroDigitado;		//dimensao
	printf("\tProg pra repetir valores e imprimir na tela\n");
	printf("\nDigite o valor\n");
 for (numeroDigitado=0; numeroDigitado<8; numeroDigitado++)	
 {	
	scanf("%d", &mat[0]);	//guardou dentro da posicao 0 - 0 1 2 3 4 5 6 7(comeca no 0, tem 8 numeros)
	printf("\nDigite outro\n");
 } 
   
   printf("%d", mat[0]); // mat[0] dentro n
	
	
}




#include <stdio.h>

int main()
{
    int valores[8], n;

    // Laco for para receber os valores
    for (n = 0; n < 8; n++) {
        printf("Digite o %dº valor: ", n+1);
        scanf("%d", &valores[n]);
    }

    printf("Os valores digitados foram: ");
    // Laço for para imprimir os valores
    for (n = 0; n < 8; n++) {
        printf("%d ", valores[n]);
    }
    printf("\n");
}