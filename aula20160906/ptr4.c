#include <stdio.h>
int main ()
{
    float numero1,numero2,soma;
    unsigned char * ponteiro=NULL;
    printf("Digite um numero: ");
    scanf("%f",&numero1);
    printf("Digite um numero: ");
    scanf("%f",&numero2);
    soma=numero1+numero2;
    printf("Dados do primeiro numero:%p : %f\n", &numero1, numero1);
    printf("Dados do segundo numero:%p : %f\n", &numero2, numero2);
    printf("Dados da soma:%p : %f\n", &soma, soma);
    return 0;
}
