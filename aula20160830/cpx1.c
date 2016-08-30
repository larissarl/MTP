#include <stdio.h>
#include <complex.h>
int main()
{
    double complex z1,z2,soma;
    double R_z1,R_z2,i_z1,i_z2;
    printf("Digite a parte real do numero: ");
    scanf("%lf",&R_z1);
    printf("Digite a parte imaginaria do numero: ");
    scanf("%lf",&i_z1);
    printf("Digite a parte real do numero: ");
    scanf("%lf",&R_z2);
    printf("Digite a parte imaginaria do numero: ");
    scanf("%lf",&i_z2);
    z1=R_z1+i_z1*I;
    z2=R_z2+i_z2*I;
    soma=z1+z2;
    printf("A soma e: %lf+%lfI\n",creal(soma),cimag(soma));
    return 0;
}
