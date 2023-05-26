//by Natalia Rissi
int mat[10], novo[10];

mat [0] = 2; 
mat [2] = 5; 
mat [5] = 3; 
mat [7] = 0; 
mat [8] = 10; 
(indice)  (valor)

for(i=o; i<10; i++)
	mat[9-i]= mat[i];

mat
0 0 0 0 0 0 0 0 0 0 - 9 indices
10 posicoes comecando com 0

novo
10 5 7 2 9 0 0 0 0 0

inverter valores

matriz bidimensional 

ex.:
um professor de programcao precisa realizar o registro de 5 trabalhos para 40 alunos
implemente o programa para ele registrar as 5 notas, depois imprima na tela


#include <stdio.h>
#define ALUNOS 4
//registrar notas e imprimir na tela
int main()
{
    int n;
    float t0[ALUNOS], t1[ALUNOS], t2[ALUNOS], t3[ALUNOS], t4[ALUNOS];
    for(n=0; n<ALUNOS; n++)
      {
        printf("\nAluno %d", n+1);
        puts("\nDigite a 1° nota\n");
        scanf("%f", &t0[n]);
        puts("\nDigite a 2° nota\n");
        scanf("%f", &t1[n]);    
        puts("\nDigite a 3° nota\n");
        scanf("%f", &t2[n]);   
        puts("\nDigite a 4° nota\n");
        scanf("%f", &t3[n]);   
        puts("\nDigite a 5° nota\n");
        scanf("%f", &t4[n]);    
      }
      for(n=0; n<ALUNOS; n++)
        {
            printf("%f", t0[n]);
            printf("%f", t1[n]);
            printf("%f", t2[n]);
            printf("%f", t3[n]);
            printf("%f", t4[n]);
        }
      
}

FICA MELHOR ASSIM:

#include <stdio.h>
#define ALUNOS 4
//registrar notas e imprimir na tela
int main()
{
    int n, m;
    float t[5][ALUNOS];
    //DOIS INDICES NA LINHA E DPS NA COLUNA - 5 e o numero de trabalhos
     for(n=0; n<ALUNOS; n++)
      for(m=0; m<5; m++)
      {
        printf("\nAluno %d", n+1);
        printf("\nDigite a %d° nota\n", m+1);
        scanf("%f", &t[5][n]);
      }

}