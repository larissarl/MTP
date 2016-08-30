#include <stdio.h>
#include <stdint.h>
int main()
{
    int numero,i;
    double fatorial=1;
    printf("Digite um numero para o calculo do fat: ");
    scanf("%d",&numero);
    for (i=2;i<=numero;i++)
    {
        fatorial=fatorial*i;
    }
    printf("O fatorial de %d e %lf\n",numero,fatorial);
    return 0;
}
