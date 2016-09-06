#include <stdio.h>
int main ()
{
    int vetor[10],i,soma=0,produto=1;
    for (i=0;i<10;i++)
    {
        printf("Digite um numero para o vetor: ");
        scanf("%d",&vetor[i]);
    }
    for (i=0;i<10;i++)
    {
        soma=soma+vetor[i];
        produto=produto*vetor[i];
    }
    printf("A soma dos numero do vetor eh: %d\nO produto dos numeros do vetor eh: %d",soma,produto);
    return 0;
}
