// by Natalia Rissi 
#include <stdio.h>
#define DOLAR 5
int main()
{   
    int destino;
    float dimen, seguro, frete, valor, total, num;
    printf("\tProg para calcular o transporte logistico de caixas\n");
    printf("\nInfome a maior dimensao do pacote em cm\n");
    scanf("%f", &dimen);
    
    if (dimen<=50)
    {
        printf("\n O peso corresponde ao requisito socilitado\n");
    
    
        printf("\n \n1RS\n \n2SC\n  \n3PR\n \n4SP\n \n5AM\n \n6MT\n \n7MS\n \n8AC\n \n9GO\n \n10RJ\n");
        scanf("%d", &destino);
    
        switch( destino )
        {
            case 1: printf("\nSeguroRS\n");
                    frete=5*DOLAR;
                    break;
                    
            case 2: printf("\nSeguroSC\n");
                    frete=6*DOLAR;
                    break;
                    
            case 3: printf("\nSeguroPR\n");
                    frete=8*DOLAR;
                    break;
                    
            case 4: printf("\nSeguroSP\n");
                    frete=12*DOLAR;
                    break;
                    
            case 5: printf("\nSeguroAM\n");
                    frete=32*DOLAR;
                    break;
                    
            case 6: printf("\nSeguroMT\n");
                    frete=21*DOLAR;
                    break;
                    
            case 7: printf("\nSeguroMS\n");
                    frete=18*DOLAR;
                    break;
                    
            case 8: printf("\nSeguroAC\n");
                    frete=35*DOLAR;
                    break;
                    
            case 9: printf("\nSeguroGO\n");
                    frete=21*DOLAR;
                    break;
                    
            case 10: printf("\nSeguroRJ\n");
                    frete=12*DOLAR;
                    break;
            
            default: printf("INEXISTENTE");
        }
        
        
        printf("\tDigite o valor venal do produto:\n");
        scanf("%f", &num);
        if (num>0&&num<=800 )
        {
                        
                seguro= 0*num;
                total =seguro + frete;
                printf("\nResultado %f", total);
        }
        else if (num>=800   &&   num<1900)
        {
                seguro=num* (8/100);
                total =seguro + frete;
                printf("\nResultado %f", total);    
        }
        else if (num>=1900 && num<=3000)
        {
                seguro=num* (15/100);
                total =seguro + frete;
                printf("\nResultado %f", total);
                
        }
        else
        {
                printf("\nNao permitido\n");

        }
        
        
    }
    else
    {
        printf("\nRecusado, execesso de peso");
    }

    
}