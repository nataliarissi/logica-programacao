//by Natalia Rissi
#include <stdio.h>
#include <string.h>
//string(corda) = texto - varias letras uma do lado da outra
//char n[TAM];
//preenchimento da matriz pelo usuario = gets (seria como um scanf)
//	gets(n); //encher a matriz
//	puts(n); //imprime dados - printf
//Implemente um programa para o usuario digitar seu nome. Apresente-o na tela 
//    /o signica ser o ultimo caracter - ate o enter dado 
int main()
{
	char nome[20];
	printf("\nDigite seu nome\n");
	gets(nome); //variavel nome
	printf("\nVoce digitou seu nome\n");
	puts(nome); //so funciona pra texto - strings - variaveis nao funciona
	//ficaria assim

//	puts("\nDigite seu nome\n");
//	gets(nome); //variavel nome
//	puts("\nVoce digitou seu nome\n");
//	puts(nome); 

}

