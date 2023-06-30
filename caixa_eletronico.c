//by Natalia Rissi
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//para realizar o comando utilizei varias bibliotecas(especificas) para construi-lo
void imprimirSaldo(float saldo);
void validar_senha(char nome_usuario[], char senha_usuario[]);
void assinatura();
void musica();
void letra(char x);
void help();
int main()
{
    int opcoes, usuario, sair, numero_conta;
    char senha1[] = "218807", senha2[] = "142842";
    float saque, valor, saldo;
    saldo = 7000;

    printf("\tSimulador de caixa eletronico\n");
        printf("\nConta em conjunto\n");
        printf("\nDigite o usuario 1 ou 2:\n ");
        scanf("%d", &usuario);
        if(usuario==1)
        validar_senha("\nusuario1\n", senha1);
        else if(usuario==2)
        validar_senha("\nusuario2\n", senha2);
        else
        {    
        printf("\nUsuario nao cadastrado\n");
        exit(0);
        }
    do
    {
        printf("\nDigite \n1Saque\n \n2ConsultarSaldo\n \n3Transferencia\n \n4Deposito\n \n5Pagamento\n \n6Help\n \n7Creditos\n \n8Sair\n");
        scanf("%d", &opcoes);
//usei um switch para melhor organizacao e coerencia em meu programa
        switch (opcoes)
        {
        case 1:
            printf("\nSaque\n");
            printf("\nDigite o valor: \n");
            scanf("%f", &saque);
            if (saque > 1500 || saque < 0 || saque>saldo)
                printf("\nAcesso negado, o valor inserido excede o limite\n");
            else
            {
                saldo = saldo - saque;
                imprimirSaldo(saldo);
            }
            break;
        case 2:
            printf("\nConsultar saldo\n");
            printf("\nSaldo atual: %f\n", saldo);
            break;
        case 3:
            printf("\nTransferencia\n");
            printf("\nDigite a conta que voce vai realizar a transferencia:\n ");
            scanf("%d", &numero_conta);
            printf("Digite o valor que deseja transferir: ");
            scanf("%f", &valor);
            if (valor > saldo || valor < 0)
                printf("\nAcesso negado, o valor inserido excede o limite\n");
            else
            {   
                saldo=saldo-valor;
                printf("\nFoi transferido %f para a conta %d \n", valor, numero_conta);
                imprimirSaldo(saldo);
            }
            break;
        case 4:
            printf("\nDeposito\n");
            if (valor < 1500 || valor < 0)
            {
                printf("\nDigite um valor para depositar em sua conta:\n ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                imprimirSaldo(saldo);
            }
            break;
        case 5:
            printf("\nPagamento\n");
            if (valor < 1500 || valor < 0 || valor > saldo)
            {
                printf("\nDigite o valor de sua fatura pendente:\n ");
                scanf("%f", &valor);
                saldo = saldo - valor;
                imprimirSaldo(saldo);
            }
            break;
        case 6:
            printf("\nHelp\n");
            help();
            break;
        case 7:
            printf("\nCreditos\n");
            assinatura();
            break;
        case 8:
            printf("\nSair\n");
            printf("\nDigite qualquer tecla para sair:\n ");
            scanf("%d", &sair);
            exit(0);
            break;
        case 9:
            printf("\nEaster egg\n");
            letra('M');
            musica();
            break;
        }
    } while (opcoes!=8);

}

//alem de limpar a tela, a funcao cria um aquivo com o saldo final do usuario
void imprimirSaldo(float saldo)
{
    system("clear");
    printf("\nSaldo atual: %f\n", saldo);
    FILE *extrato;
    extrato = fopen("extrato.txt", "w");
    fprintf(extrato, "%f", saldo);
    fclose(extrato);
}

void assinatura()
{
    printf("\n");
    for (int x = 10; x < 145; x += 2)
        printf("/");
    for (int x = 0; x < 10; x++)
    {
        printf("/\t\t\t\t\t\t\t\t\t/");
        printf("\n");
    }
    printf("/\t\tFeito_por_Natalia_Rissi\t\t\t\t\t/");
    printf("\n");
    for (int x = 0; x < 10; x++)
    {
        printf("/\n\t\t\t\t\t\t\t\t\t/");
        printf("\n");
    }
    for (int x = 10; x < 145; x += 2)
        printf("/");
}

//no easter egg adicionei o Beep para dar uma trilha sonora de surpresa
void musica()
{
    FILE * itachi;
    itachi = fopen("som.txt", "r");

    int frequencia, duracao;
    while (fscanf(itachi, "%d %d", &frequencia, &duracao) != 0)
    {
        Beep(frequencia, duracao);
    }
    fclose(itachi);
}

//com essa funcao valida tanto qual usuario vai utilizar a conta no momento, quanto a sua senha com suas tentativas limitadas
void validar_senha(char nome_usuario[], char senha_usuario[])
{
    int numero_tentativas=1;
    char tentativa[6];
    printf("\nBem vindo %s", nome_usuario);
    do
    {   
    printf("\tPara prosseguir, digite sua senha para acessar sua conta:\n ");
    scanf("%s", tentativa);
    if (strcmp(tentativa, senha_usuario) == 0)
        {
        printf("\nSenha correta\n");
        return;
        }
    else
    {
        printf("\nTente novamente\n");
        numero_tentativas++;
    }
 }while(numero_tentativas<3);
    printf("\nNumero de tentativas excedido\n");
    exit(0);        
}

//aqui teve uma tentativa criativa de implantar um pikachu para melhorar a interface do meu codigo
//void pikachu ()
//{
    // printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    // printf("\n░░░░█░▀▄░░░░░░░░░░▄▄███▀░░\n");
    // printf("\n░░░░█░░░▀▄░▄▄▄▄▄░▄▀░░░█▀░░\n");
    // printf("\n░░░░░▀▄░░░▀░░░░░▀░░░▄▀░░░░\n");    
    // printf("\n░░░░░░░▌░▄▄░░░▄▄░▐▀▀░░░░░░\n");
    // printf("\n░░░░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█\n");
    // printf("\n░░░░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█\n");
    // printf("\n░░░▄▀▀▐▀▀░░░░░░░▀▀▌▄▄▄░░░█\n");
    // printf("\n░░░█░░░▀▄░░░░░░░▄▀░░░░█▀▀▀\n");
    // printf("\n░░░░▀▄░░▀░░▀▀▀░░▀░░░▄█░░░░\n");
    // printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");                 
//}

void letra(char x)
{
    int n;
	for(n=0; n>=0; n++)
	printf("%c", x);
}
//descrever bem as informacoes do 'ajuda', para facilitar o manuseio do usuario
void help()
{
    printf("\nPara prosseguir, leia as intrucoes abaixo\n");
    printf("\n1. Saque. Funciona para realizar saques da quantuia desejada\n");
    printf("\n2. ConsultarSaldo. Serve para fazer consultas perante seu saldo atual\n");
    printf("\n3. Transacoes. Realiza transacoes conforme o solicitado pelo usuario\n");
    printf("\n4. Deposito. Deposita a quantida selecionada a sua conta\n");
    printf("\n5. Pagamento. Realiza o pagamento de suas contas\n");
    printf("\n6. Help. Ajuda no que for preciso. Alias, voce esta no momento, aqui no help :)\n");
    printf("\n7. Creditos. Representa os creditos do criador desse programa\n");
    printf("\n8. Sair.Voce fecha as abas do terminal e finaliza suas transicoes com um extrato\n");
    printf("\nCaso necessario, entre contato com algum operador para saber mais sobre sua conta\n");
    printf("\nSobre os possiveis problemas, entre contato com sua agencia\n");
}