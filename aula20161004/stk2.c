#include <stdio.h>
#include <math.h>
float desvio_padrao (float *vetor,float media);
float Media (float *vetor);

int main ()
{
    float vet[4],media;
    int i;
    printf ("Digite os 5 numeros desejados: ");
    for (i=0;i<5;i++)
    {
        scanf("%f",&vet[i]);
    }
    for (i=0;i<5;i++)
        printf("\n%f",vet[i]);
    media = Media (vet);
    printf ("\nA media dos numeros e: %f",media);
    printf("\nO desvio padrao e: %g",desvio_padrao(vet,media));
    return 0;
}

float Media (float *vetor)
{
    float soma=0,media;
    int i;
    for (i=0;i<5;i++)
        soma=soma+vetor[i];
    media=soma/5;
    return media;
}

float desvio_padrao (float *vetor,float media)
{
    float soma=0;
    int i;
    for (i=0;i<5;i++)
        soma=soma+pow(media-vetor[i],2);
    return sqrt(soma/(5-1));
}

