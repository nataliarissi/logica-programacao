//by Natalia Rissi
implemente um programa para ler 10 numeros do usuario
grave esses dados em disco rigido - imprimir na tela
faca outro programa que apresente esses dados
#include <stdio.h>
int main ()
{
	FILE * nat;
	int N[10], n;
	
	for(n=0; n<10; n++)
	{
	printf("Digite um n°"):
	scanf("%d", &N[n]);
	}
	nat=fopen("usuario.txt", "w");
	for(n=0; n<10; n++)
	fprintf(nat, "%d ", N[n]); //aqui esta escrevendo em disco

	fclose(nat);
}



int main
{
	FILE * extrato;
	float m;
	printf("saldo atual %f", saldo);
	extrato=fopen("extrato.txt", "w");
	fprintf(extrato, "%f", m);
	fclose(extrato);
}

//apresenta os dados na tela
#include<stdio.h>
main()
{
	FILE * nat;
	int m, n;
	nat=fopen("usuario.txt", "r");	
	for(n=0; n<10; n++)
 {
	fscanf(nat, "%d ", &m);
	printf("%d ", m);
 }
	fclose(nat);
}