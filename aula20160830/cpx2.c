#include <stdio.h>
#include <complex.h>
int main()
{
    double complex z1,multiplica;
    double R_z1,i_z1;
    printf("Digite a parte real do numero: ");
    scanf("%lf",&R_z1);
    printf("Digite a parte imaginaria do numero: ");
    scanf("%lf",&i_z1);
    z1=R_z1+i_z1*I;
    multiplica=z1*conj(z1);
    printf("A multiplicacao e: %lf+%lfI\n",creal(multiplica),cimag(multiplica));
    return 0;
}
