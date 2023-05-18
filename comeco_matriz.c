//by Natalia Rissi
#include <stdio.h>
//explorando matriz - mais simples - tipo vetor so tem uma dimensao comprimento
//inicialize significa que toda matriz deve ser 0
int main()
{
	int n[10], m;
	printf("\t Prog de uma matriz[10] com o valor zero e imprima na tela\n");
	for (m=0; m<10; m++)
	{
		n[m]=0;
		
	}
	for(m=0; m<10; m++)	//precisa variar
	printf("\n%d", n[m]);
	//para acessar toda matriz usar laco
	//se nao, utilizar indices um por vez
	
	
}