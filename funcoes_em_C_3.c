//by Natalia Rissi
Beep (1000, 1000)
	freq  t=ms

void barulho(void)
 {
	int n;
	for(n=1; n<1000; n++)
	Beep(n*100, 100);
//	Beep(n*10, 7);
 }

#include<stdio.h>
float soma(float x, float y);
void imprime (float w);
float media3(float r, float t, float s);
float media(float k, float m);
void imprime (float w);
void barulho(void);

main()
{
	float y, a, k, h;
	y=10;
	a=2;
	k=6;
	barulho(n, 7);
	h=soma(10, 2);
	imprime(h);
}
/////////////////////////////////////////////////////
//retorno flutuante
float soma(float x, float y)
//dois argumentos de entrada-parametros
{
	float n;
	n=x+y;
	return n;
}

//utilizando uma funcao dentro de outra
float media(float k, float m)
{
	float l;
	l=soma(k, m)/2;
	return l;
}

float media3(float r, float t, float s)
{
	float z;
	z=soma(r, t);
	z=soma(z, s)/3;
	return z;
}

//nao devolve nada - vazio / so imprime na tela
//quando um dos termos e nada - declaracao
void imprime (float w)
{
	printf("resultado %f", w);
}

//Beep (1000, 1000)
//	freq  t=ms

void barulho(void)
 {
	int n;
	for(n=1; n<10; n++)
	Beep(n*100, 100);
 }

////////////////////////
como criar uma biblioteca
pegar todas as funcoes com nome do arquivo.h
#include<natalia.h>
////////////////////////

criar a funcao potencia
laco for 2(3)= 2*2*2 = 8

float elevado(float n-base, int m-indice)
//	flutuante - inteiro
{	
	float p;
	p=1;
	for(n=0; n<m; n++)
	p-potencia=p*n;
	return p;
}
acumulador, guarda o ultimo valor
o resultado e ele mesmo
funcao pow e isso ai de cima - e um laco

funcao que imprima 100 uma letra, uma do lado da outra
encha a tela com a letra
saber qual e a letra - laco
laco de 100000

void letra(char x)
{
	for(n=0; n<10000; n++)
//	inicio    fim    um em um
	printf("%c", x);
}

void barulho(void);
void letra(char x);
main()
{
	letra('n');
	barulho();
}