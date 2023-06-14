//by Natalia Rissi
#include <windows.h>
#include <stdio.h>
#include <conio.h> 
int main()
{
	int n;

	FILE * itachi;
	itachi= fopen ("musica.txt", "r");
	
	for(n=0; n<104; n++)
	{
		int frequencia, duracao;
		fscanf(itachi, "%d", &frequencia);
		fscanf(itachi, "%d", &duracao ); 
		Beep(frequencia, duracao);
	}

	fclose(itachi); 		
}