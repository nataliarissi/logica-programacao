// by Natalia Rissi 
#include<stdio.h>
#include<stdlib.h>
    int main()
{
    int num;
    float num1, num2, calc1, calc2, calc3, calc4;
    printf("\tProg p/ calculadora\n");
    system("PAUSE");
    printf("\nDigite um numero para escolher o tipo de calculo:\n \n1Adicao\n  \n2Subtracao\n \n3Divisao\n \n4Multiplicacao\n");
    scanf("%d", &num);

switch( num )
    { 
      case 1: printf("Adicao");
        printf("\nDigite seu primeiro numero\n");
        scanf("%f", &num1);
        printf("\nDigite seu segundo numero\n");
        scanf("%f", &num2);
        calc1=num1+num2;
        printf("\nResultado: %f", calc1);
                    break;    
      case 2: printf("Subtracao");
        printf("\nDigite seu primeiro numero\n");
        scanf("%f", &num1);
        printf("\nDigite seu segundo numero\n");
        scanf("%f", &num2);
        calc2=num1-num2;
        printf("\nResultado: %f", calc2);
                    break;    
      case 3: printf("Diviso");
        printf("\nDigite seu primeiro numero\n");
        scanf("%f", &num1);
        printf("\nDigite seu segundo numero\n");
        scanf("%f", &num2);
        calc3=num1/num2;
        printf("\nResultado: %f", calc3);
                    break;    
      case 4: printf("Multiplicacao");
        printf("\nDigite seu primeiro numero\n");
        scanf("%f", &num1);
        printf("\nDigite seu segundo numero\n");
        scanf("%f", &num2);
        calc4=num1*num2;
        printf("\nResultado: %f", calc4);
                    break;    
      default: printf("invalido...");
    
    }
}