//by Natalia Rissi
#include<stdio.h>
float soma(float x, float y);
void imprime (float w);
float media3(float r, float t, float s);
float media(float k, float m);
void imprime (float w);


main()
{
	float y, a, k, h;
	y=10;
	a=2;
	k=6;
	h=soma(10, 2);
	imprime(h);
}
/////////////////////////////////////////////////////
retorno flutuante
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