// by Natalia Rissi 
#include <stdio.h>

    int main() 
{
    float numa, numb, numc, numd, nume, numf, numg, numh, numi, calc1, calc2, calc3, calc4, calc5, calc6, det;
    printf("\n[a b c]\n  \n[d e f]\n  \n[g h i]\n");
    printf("\tPrograma para calcular o determinante de uma matrix 3x3");
    printf("\n Digite um numero para a\n");
    scanf("%f", & numa);
    printf("\n Digite um numero para b\n");
    scanf("%f", & numb);
    printf("\n Digite um numero para c\n");
    scanf("%f", & numc);
    printf("\n Digite um numero para d\n");
    scanf("%f", & numd);
    printf("\n Digite um numero para e\n");
    scanf("%f", & nume);
    printf("\n Digite um numero para f\n");
    scanf("%f", & numf);
    printf("\n Digite um numero para g\n");
    scanf("%f", & numg);
    printf("\n Digite um numero para h\n");
    scanf("%f", & numh);
    printf("\n Digite um numero para i\n");
    scanf("%f", & numi);
    
    calc1=numa*nume*numi;
    calc2=numb*numf*numg;
    calc3=numc*numd*numh;
    calc4=numc*nume*numg;
    calc5=numa*numf*numh;
    calc6=numb*numd*numi;
    det=calc1+calc2+calc3-calc4-calc5-calc6;
    printf("\tSua matriz e de %.2f", det);
    
}
