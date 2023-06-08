//by Natalia Rissi
#include<stdio.h>
#define PI 3.14
float areaQ(float num1, float num2);
float areaC(float num1);
float areaT(float num1, float num2);
void imprime (float n);
void eu(int x);

int main()
{
	float num1, num2, m, k, l, x;
	num1=7,
	num2=1;
	m=areaC(7);
	k=areaQ(7, 1);
	l=areaT(7, 1);
	imprime(m);
  imprime(k);
  imprime(l);
  eu(x);
}

////////////////////////////////////////////////

//area do quadrado
float areaQ(float num1, float num2)
{
	float calculo;
  calculo = num1*num2;
	return calculo;
}

//area do circulo
float areaC(float num1)
{
	float calculo;
  calculo = PI*(num1*num1);
	return calculo;
}

//area do trianglo
float areaT(float num1, float num2)
{
	float calculo;
  calculo = (num1*num2)/2;
	return calculo;
}

void imprime(float n)
{
	printf("\nresultado %.2f", n);
}

//assinatura
void eu(int x)
{
  printf("\n");
    for(x=10; x<82; x+=2)
      printf("*");
      for(x=0; x<10; x++)
      {
        printf("*\t\t\t\t\t\t\t\t\t*");
        printf("\n");
      }
  printf("*\t\tFeito_por_Natalia_Rissi\t\t\t\t\t*");
  printf("\n");
  for(x=0; x<10; x++)
      {
        printf("*\n\t\t\t\t\t\t\t\t\t*");
        printf("\n");
      }
  for(x=10; x<82; x+=2)
   printf("*");
}
