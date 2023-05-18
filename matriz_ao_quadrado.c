//by Natalia Rissi
#include <stdio.h>
#define TAM 12
//Incialize uma matriz de 12 valores pelo usuario
//Incialize uma 2° matriz contendo o quadrado deses valores
//imprima a 1° e a 2° matriz
int main()
{
	float n[TAM], l[TAM];
	int m;
	printf("\tProg para indicar uma matriz ao quadrado\n");
	
	for (m=0; m<TAM; m++)
	{
		printf("\nDigite o %d° valor\n", m+1);
		scanf("%f", &n[m]);
	}
	
	for (m=0; m<TAM; m++) 
	l[m]=n[m]*n[m];
	
	for(m=0; m<TAM; m++)
	printf("\n%.2f %.2f\n", n[m], l[m]);
}
