#include <stdio.h>
#include<time.h>
#define N 10000
int main()
{
    srand (time(0));
    unsigned int numero;
    int vetor[N],i;
    float soma=0.0f;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d",&numero);
    for(i=0;i<N;i++)
        vetor[i]=rand()%numero+1;
    for (i=0;i<N;i++)
        soma=soma+vetor[i];
    printf("A media dos numeros eh: %g\n", soma/N);
    return 0;
}
