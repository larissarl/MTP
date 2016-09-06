#include <stdio.h>
#include<time.h>
int main()
{
    srand (time(0));
    int numero,i,vetor[1000],maximo,minimo;
    printf("Digite um umero inteiro entre 1 e 1000: ");
    scanf("%d",&numero);
    for (i=0;i<numero;i++)
        vetor[i]=rand()%10;
    maximo=vetor[0];
    minimo=vetor[0];
    for (i=0;i<numero;i++)
    {
        if(vetor[i]>maximo)
            maximo=vetor[i];
        if(vetor[i]<minimo)
            minimo=vetor[i];
    }
    printf("\nO maximo eh: %d\nO minimo eh: %d",maximo,minimo);
    return 0;
}
