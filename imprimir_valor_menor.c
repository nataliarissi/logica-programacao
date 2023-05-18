//by Natalia Rissi
#include <stdio.h>

int main()
{
	int m; //indice sempre sera inteiro
	float n[10], li;
	printf("\tInicialize uma matriz[10] que encontre o menor valor e imprima a matriz\n");
	for (m=0; m<10; m++)
	{
		printf("\nDigite o %d° valor\n", m+1); // o m esta variando, para mudar - m+1 utilizado para nao comecar com 0
		scanf("%f", &n[m]); //armazenar os dados coletados que o usuario inseriu
	}
 	li=n[0];
	for(m=0; m<10; m++)
	  {
	  	if(n[m]<li)
	  	li=n[m];
	  }
	
	for (m=0; m<10; m++) //quando tem que acessar a mesma matriz (toda) de 0 ate 10 - tem dois 'for' iguais
 	 printf("\n%.2f", n[m]);

	printf("\nMenor valor %.2f", li);
}

//1° for usado para inserir dados 
//2° for utilizado para encontrar os dados
//3° for serve para imprimi-los na tela