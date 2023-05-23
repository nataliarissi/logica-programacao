//by Natalia Rissi
#include <stdio.h>
#define TAM 20
int main()
{
    int escolha, m;
    float n[TAM], l[TAM], k[TAM];
	printf("\tProg para inicializar o valor da soma e subtração das primeiras\n");
    printf("\nDigite um numero para escolher \n1Adicao\n e \n2Subtracao\n");
    scanf("%d", &escolha);

	for (m=0; m<TAM; m++)
	{
		printf("\nDigite o %d° valor da primeira matriz\n", m+1);
		scanf("%f", &n[m]);
	}
	printf("\n");        
	for (m=0; m<TAM; m++)
	{
		printf("\nDigite o %d° valor da segunda matriz\n", m+1);
		scanf("%f", &l[m]);
	}

    if(escolha==1)
	  {
		for (m=0; m<TAM; m++) 
		k[m]=n[m]+l[m];

		for(m=0; m<TAM; m++)
		printf("\n%.2f", k[m]);
	  
	  }
    else
    {    	
        for (m=0; m<TAM; m++) 
        k[m]=n[m]-l[m];

        for(m=0; m<TAM; m++)
        printf("\n%.2f", k[m]);
    }
}
