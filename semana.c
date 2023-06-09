// by Natalia Rissi 
#include <stdio.h>
#define ATUAL 2023
// coloquei o define para futuramente poder alterar o ano atual
int main()
{
    int mes, dia, ano, semana, signo, a, b, x, y, k;
    printf("\tProg para calcular a semana em que o usuario nasceu\n");
    printf("\nDigite o ano\n");
    scanf("%d", &ano);
// utilizei esse if para nao acontecer de ter anos a mais ou negativos
 if(ano>1500 && ano<=ATUAL)
 {   
    printf ("\nDigite o mes que voce nasceu\n");
	scanf ("%d", &mes);
// utilizei esse if para nao acontecer de ter meses a mais ou negativos
    if(mes<=12 && mes>=1)
    {
    printf ("\nDigite o dia que voce nasceu\n");
	scanf ("%d", &dia);
// utilizei esse if para nao acontecer de ter dias a mais ou negativos tambem
        if(
			// Se o mes for impar (e nao for fevereiro) aceitar dia ate 31 
			(mes % 2 != 0 && mes != 2 && (dia >= 1 && dia <= 31))
			// Se o mes for par (e nao for fevereiro) aceitar dia ate 30 
		||	(mes % 2 == 0 && mes != 2 && (dia >=1 && dia <= 30))
			// Se for fevereiro e for ano bissexto aceitar ate o dia 29
		||	(mes == 2 && ano % 4 == 0 && (dia >= 1 && dia <= 29))
			// Se for fevereiro e nao for ano bissexto aceitar ate o dia 28
		||	(mes == 2 && ano % 4 != 0 && (dia >= 1 && dia <= 28))
		)
// utilizei esse switch para marcar as opcoes dos meses por extenso
        {
            switch (mes)
                {
            	  case 1:   printf ("\nMes em que voce nasceu foi Janeiro\n");
            	                  break;
            	  case 2:   printf ("\nMes em que voce nasceu foi Fevereiro\n");
            	                  break;
            	  case 3:   printf ("\nMes em que voce nasceu foi Marco\n");
            	                  break;
            	  case 4:   printf ("\nMes em que voce nasceu foi Abril\n");
            	                  break;
            	  case 5:   printf ("\nMes em que voce nasceu foi Maio\n");
            	                  break;
            	  case 6:   printf ("\nMes em que voce nasceu foi Junho\n");
            	                  break;
            	  case 7:   printf ("\nMes em que voce nasceu foi Julho\n");
            	                  break;
            	  case 8:   printf ("\nMes em que voce nasceu foi Agosto\n");
            	                  break;
            	  case 9:   printf ("\nMes em que voce nasceu foi Setembro\n");
            	                  break;
            	  case 10:  printf ("\nMes em que voce nasceu foi Outubro\n");
            	                  break;
            	  case 11:  printf ("\nMes em que voce nasceu foi Novembro\n");
            	                  break;
            	  case 12:  printf ("\nMes em que voce nasceu foi Dezembro\n");
            	                  break;
            	            
            	}
            
// utilizei esse if para marcar as opcoes dos signos por extenso, alem de mostrar os dias correspondentes a cada um
            if (((mes==3) && (dia>=21)) || ((mes==4) && (dia<=20)))
            	{
            	   printf("Seu signo e aries\n");
            	}
            	   if (((mes==4) && (dia>=21 && dia<=30)) || ((mes==5) && (dia<=20)))
            	        {
            	           printf("Seu signo e touro\n");
            	        }
            	   if (((mes==5) && (dia>=21)) || ((mes==6) && (dia<=20)))
            	        {
            	           printf("Seu signo e gemeos\n");
            	        }
            	   if (((mes==6) && (dia>=21 && dia<=30)) || ((mes==7) && (dia<=21)))
            	        {
            	           printf("Seu signo e cancer\n");
            	        }
            	   if (((mes==7) && (dia>=22)) || ((mes==8) && (dia<=22)))
            	        {
            	           printf("Seu signo e leao\n");
            	        }
            	   if (((mes==8) && (dia>=23)) || ((mes==9) && (dia<=22)))
            	        {
            	           printf("Seu signo e virgem\n");
            	        }
            	   if (((mes==9) && (dia>=23 && dia<=30)) || ((mes==10) && (dia<=22)))
            	        {
            	           printf("Seu signo e libra\n");
            	        }
            	   if (((mes==10) && (dia>=23)) || ((mes==11) && (dia<=21)))
            	        {
            	           printf("Seu signo e escorpiao\n");
            	        }
            	   if (((mes==11) && (dia>=22 && dia<=30)) || ((mes==12) && (dia<=21)))
            	        {
            	           printf("Seu signo e sargitario\n");
            	        }
            	   if (((mes==12) && (dia>=22)) || ((mes==1) && (dia<=20)))
            	        {
            	           printf("Seu signo e capricornio\n");
            	        }
            	   if (((mes==1) && (dia>=21)) || ((mes==2) && (dia<=19)))
            	        {
            	           printf("Seu signo e aquario\n");
            	        }
            	   if (((mes==2) && (dia>=20 && dia<=29)) || ((mes==3) && (dia<=20)))
            	        {
            	           printf("Seu signo e peixes\n");
            	        }
            	
// utilizei o calculo para indicar o dia da semana de uma data qualquer
            x = 3*(mes - 1)-1;
            y = x + ano + dia;
            if (mes < 3) 
            k = ano - 1;
            else
            {
                k = ano;
            	x=0.4*mes+2.3;
            	y= y-x;
            }
            
            a=k/4;
            b=(k/100+1)*0.75;
            x=y+a-b;
            semana=x%7;
            semana=semana+1;

// utilizei esse switch para marcar as opcoes das semanas por extenso
            switch (semana)
                {
            	   case 1:   printf ("Dia da semana que voce nasceu foi Domingo\n");
            	             break;
            	   case 2:   printf ("Dia da semana que voce nasceu foi Segunda-Feira\n");
            	             break;
            	   case 3:   printf ("Dia da semana que voce nasceu foi Terca-Feira\n");
            	             break;
            	   case 4:   printf ("Dia da semana que voce nasceu foi Quarta-Feira\n");
            	             break;
            	   case 5:   printf ("Dia da semana que voce nasceu foi Quinta-Feira\n");
            	             break;
            	   case 6:   printf ("Dia da semana que voce nasceu foi Sexta-Feira\n");
            	             break;
            	   case 7:   printf ("Dia da semana que voce nasceu foi Sabado\n");
            	             break;
                }

        }  
        else
        {
// utilizei esse printf para nao continuar o programa, se o usario digitar um numero nao correspondente
            printf("invalido");
            return -1;
        }
    }
    else
    {
        printf("invalido");
        return -1;
    }
 }
 else
 {
 printf("invalido");
 return -1;
 }
    printf("%d, %d, %d", dia, mes, ano);
// utilizei esse printf para marcar em ordem o dia, mes e ano no final, correspondente ao que o usuario indicou no inicio
}