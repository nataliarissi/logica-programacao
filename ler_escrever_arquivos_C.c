//by Natalia Rissi
funcao que calcula o volume de um paralelepipedo

volumep (int l, int p, int h)
{
	int v;
	v=l*p*h;
	return v;
}

//imprimir na tela
#include <stdio.h>
int main ()
{
	int n;
	for(n=1; n<10; n++)
	printf( "%d", n);

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
	m= fopen("luke.txt", "w"); // w - write
	//criar arquivo e escrever dentro - redigir - colocar informação dentro (dado)
	for(n=1; n<10; n++)
		fprintf(m, "%d ", n);

	fclose(m); 
	//fecha o ponteiro 
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

manipulacao de arquivos

#include <stdio.h>
int main ()
{
	char nat;
	FILE * itachi;
	//pegar do arquivo e jogar na tela
	itachi= fopen ("texto.txt", "r");
	
	fscanf(itachi, "%c", &nat); //nat - variavel
	 printf("%c", nat);

	fscanf(itachi, "%c", &nat);
	 printf("%c", nat);
	 
	fscanf(itachi, "%c", &nat);
	 printf("%c", nat);
	 
	fclose(itachi); 	 
}


#include <stdio.h>
#include <conio.h> //console
int main ()
{
	char nat;
	FILE * itachi;
	//pegar do arquivo e jogar na tela
	itachi= fopen ("texto.txt", "r");
	
	fscanf(itachi, "%c", &nat); //nat - variavel
	 printf("%c", nat);

	getch();

	fscanf(itachi, "%c", &nat);
	 printf("%c", nat);

	getch();
		 
	fscanf(itachi, "%c", &nat);
	 printf("%c", nat);
	
	getch();	 
	
	fclose(itachi); 	 
}


#include <stdio.h>
#include <conio.h> //console
int main ()
{
	char nat;
	int n;
	FILE * itachi;
	//pegar do arquivo e jogar na tela
	itachi= fopen ("texto.txt", "r");
	
	for(n=0; n<100; n++)
	{
		fscanf(itachi, "%c", &nat); //nat - variavel
		getch();
		printf("%c", nat);
	}
		 
	
	fclose(itachi); 	 
}
