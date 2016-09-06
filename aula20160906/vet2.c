#include <stdio.h>
int main ()
{
    int vetor[10],i,j,auxiliar[10];
    for (i=0;i<10;i++)
    {
        printf("Digite um numero para o vetor: ");
        scanf("%d",&vetor[i]);
    }
    j=10;
    for (i=0;i<5;i++)
    {
        j--;
        auxiliar[i]=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=auxiliar[i];

    }
    printf("O vetor invertido eh: ");
    for (i=0;i<10;i++)
        printf("%d ",vetor[i]);
    return 0;
}
