//by Natalia Rissi
printf - fprintf
scanf - fscanf

printf
scanf -
	puts("imprime so texto")
	gets
	getch()


if/else
switch

for
while-
	do/while


//implemente um programa para ler 10 numeros do usuario
///grave esses dados em disco rigido 
//faca outro programa que apresente esses dados
#include <stdio.h>
int main(void)
{
    int num[8];
    int numeroDigitado;

    // Laço for para receber os valores
    for (numeroDigitado = 0; numeroDigitado < 8; numeroDigitado++) {
        printf("Digite o %dº valor: ", numeroDigitado+1);
        scanf("%d", &num[numeroDigitado]);
    }

    printf("Os valores digitados foram: ");
    // Laço for para imprimir os valores
    for (numeroDigitado = 0; numeroDigitado < 8; numeroDigitado++) {
        printf("%d ", num[numeroDigitado]);
    }
    printf("\n");

    return 0;
}


//ler do disco rigido e mostrar na tela
#include <stdio.h>
int main ()
{
	int n, mat[10];
	FILE * x;
	x=fopen("luke.txt", "r"); //pegar as informacoes - read
	for(n=0; n<10; n++)
		fscanf(x, "%d", &mat[n]);
	fclose(x); //pode ser embaixo tambem
	
	for(n=0; n<10; n++)
		printf( "%d", mat[n]);

}

//ler
#include <stdio.h>
int main ()
{
	int n, mat[10];
	for(n=0; n<10; n++)
	scanf( "%d", &mat[n]);
	
	for(n=0; n<10; n++)
	printf( "%d", mat[n]);

}

//gravando no disco ridigo - nao imprime na tela
#include <stdio.h>
int main ()
{
	int n;
	FILE * m;
	//ponteiro *
	m= fopen("usuario.txt", "w"); // w - write
	scanf("%d", &n);
	//criar arquivo e escrever dentro - redigir - colocar informação dentro (dado)
		fprintf(m, "%d ", n);

	fclose(m); 
	//fecha o ponteiro 
}