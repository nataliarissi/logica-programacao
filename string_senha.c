//by Natalia Rissi
//comprarar uma srting com outra
//o usuario digita uma senha e deve (verificar) ficar preso ate acertar
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char senha[20];
//pede duas strings e as compara - uma funcao - strcmp
//n=strcmp("natalia", "matriz")
	do
 {
	puts("\tDigite a senha\n"); //ou printf
	gets(senha);
	n=strcmp(senha, "luke@lind0");
 }
	while (n != 0); //para ficar preso la dentro
	
}
