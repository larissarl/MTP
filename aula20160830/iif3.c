#include <stdio.h>
#include <stdint.h>
int main()
{
    int numero,i;
    double resultado,soma;
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);
    resultado=(1./numero);
    for (i=0;i<729;i++)
    {
        soma=soma+resultado;
    }
     printf("O resultado e: %f",soma);
     return 0;
}
