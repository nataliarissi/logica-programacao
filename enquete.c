// by Natalia Rissi 
#include <stdio.h>

//enquete de 5 questões e no final dar a resposta (pontuacao)
int main()
{
	int escolha, quantidadeRespostasAcertadas = 0;

	printf("Programa de uma enquete da Nati\n");
	printf("\tQuestao 1 sobre anime Naruto, qual e o melhor personagem?\n");
	printf("1)Sasuke \n2)Sakura \n3)Itachi \n4)Naruto \n5)Izumi\n\n");
	scanf("%d", &escolha);
	fflush(stdout);
	
	printf("1)Sasuke \n2)Sakura \n3)Itachi \n4)Naruto \n5)Izumi\n\n");
	
	if (escolha == 3)
	{
		printf("3)Itachi\n");
		//Aumenta o numero de respostas que o usuario acertou, comeca em 0
		quantidadeRespostasAcertadas = quantidadeRespostasAcertadas +1;
	}
	
	printf("\tQuestao 2 sobre anime Naruto, qual e o nome do principal justu do Itachi?\n");
	printf("1)Izanami \n2)Kotoamatsukami \n3)Tsukiyomi \n4)Susano'o \n5)Amaterasu\n\n");
	scanf("%d", &escolha);
    fflush(stdout);
	
	printf("1)Izanami \n2)Kotoamatsukami \n3)Tsukiyomi \n4)Susano'o \n5)Amaterasu\n\n");
	
	if (escolha == 5)
	{
		printf("5)Amaterasu\n");
		quantidadeRespostasAcertadas = quantidadeRespostasAcertadas +1;
	}
	printf("\tQuestao 3, qual o nome do personagem do quarteto do som que o Choji luta no resgate ao sasuke?\n");
	printf("1)Tayuya \n2)Kidomaru \n3)Kimimaru \n4)Jirobou \n5)Sakon\n\n");
	scanf("%d", &escolha);
	fflush(stdout);
	
	printf("1)Tayuya \n2)Kidomaru \n3)Kimimaru \n4)Jirobou \n5)Sakon\n\n");
	
	if (escolha == 4)
	{
		printf("4)Jirobou\n");
		quantidadeRespostasAcertadas = quantidadeRespostasAcertadas +1;
	}
	
	printf("\tQuestao 4 sobre o anime steins gate, idade do okabe?\n");
	printf("1)19 anos \n2)20 anos \n3)21 anos \n4)18 anos \n5)22 anos\n\n");
	scanf("%d", &escolha);
	fflush(stdout);
	
	printf("1)19 anos \n2)20 anos \n3)21 anos \n4)18 anos \n5)22 anos\n\n");
	
	if (escolha == 1)
	{
		printf("1)19 anos\n");
		quantidadeRespostasAcertadas = quantidadeRespostasAcertadas +1;
	}
	printf("\tQuestao 5 sobre anime steins gate, com quem ele se relaciona?\n");
	printf("1)Mayuri Shiina \n2)Kurisu Makise \n3)Itaru Hashida \n4)Suzuha Amane \n5)Kiryu Moeka\n\n");
	scanf("%d", &escolha);
	fflush(stdout);
	
	printf("1)Mayuri Shiina \n2)Kurisu Makise \n3)Itaru Hashida \n4)Suzuha Amane \n5)Kiryu Moeka\n\n");
	
	if (escolha == 2)
	{
		printf("2)Kurisu Makise\n");
		quantidadeRespostasAcertadas = quantidadeRespostasAcertadas +1;
	}
	
	printf("\nQuantidade de perguntas acertadas: %d", quantidadeRespostasAcertadas);
	
	
}