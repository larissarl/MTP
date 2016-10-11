#include <stdio.h>
#include <stdlib.h>
float *recebeNumero (float *vetor,int *tamanho);
float media( float *vetor,int *tamanho );
float Maior(float *vetor,int *tamanho);
float Menor(float*vetor,int *tamanho);

int main ()
{
    int n;
    float * vetor;
    int tamanho=0;
    vetor=(float *)malloc(sizeof(float));
    do{
    printf("\nCaso deseje sair digite 0,para entrar no programa digite qualquer outro numero: ");
    scanf("%d",&n);
    if(n!=0)
    {
    vetor=recebeNumero(vetor,&tamanho);
    printf("\nA media dos numeros eh: %f",media(vetor,&tamanho));
    printf("\nO maior dos numeros eh: %f",Maior(vetor,&tamanho));
    printf("\nO menor dos numeros eh: %f",Menor(vetor,&tamanho));
    }
    }while(n!=0);
    free(vetor);
    return 0;
}

float *recebeNumero (float *vetor,int *tamanho)
{
    float numero;
    printf("Digite um numero: ");
    scanf("%f",&numero);
    (*tamanho)++;
    vetor =(float*) realloc(vetor,(*tamanho+1)*sizeof(float));
    vetor[*tamanho-1]=numero;
    return vetor;
}

float media( float *vetor,int *tamanho )
{
    int i;
    float soma=0;
    for (i=0;i<*tamanho;i++)
    {
        soma=soma+vetor[i];
    }
    return soma/ *tamanho;
}

float Maior(float *vetor,int *tamanho)
{
    int i;
    float maior=vetor[0];
    for (i=0;i<*tamanho;i++)
       if (maior<vetor[i])
        maior=vetor[i];
   return maior;
}

float Menor(float*vetor,int *tamanho)
{
    int i;
    float menor=vetor[0];
    for (i=0;i<*tamanho;i++)
       if (menor>vetor[i])
        menor=vetor[i];
    return menor;
}

