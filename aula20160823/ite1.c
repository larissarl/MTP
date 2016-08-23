#include <stdio.h>
int main()
{
    int numero,fatorial=1,i;
    printf("Digite um numero para o calculo do fat: ");
    scanf("%d",&numero);
    for (i=2;i<=numero;i++)
    {
        fatorial=fatorial*i;
    }
    printf("O fatorial de %d e %d\n",numero,fatorial);
    return 0;
}
