#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float desvio_padrao(float *dados, int ndados);
float Media (float *dados, int ndados);

int main ()
{
    int ndados,i;
    float *dados;
    printf("Digite a quantidade de numeros desejados: ");
    scanf ("%d",&ndados);
    dados = malloc (ndados*sizeof(float));
    printf("Digite os dados para as operacoes: ");
    for (i=0;i<ndados;i++)
        scanf("%g",&dados[i]);
    printf("A media e: %g\nO desvio padrao e: %g",Media(dados,ndados),desvio_padrao(dados,ndados));
    free(dados);
    return 0;
}
float Media (float *dados, int ndados)
{
    float soma=0;
    int i;
    for (i=0;i<ndados;i++)
        soma= soma+dados[i];
    return soma/ndados;
}
float desvio_padrao(float *dados, int ndados)
{
    float soma=0,m=Media(dados,ndados);
    int i;
    for (i=0;i<ndados;i++)
        soma=soma+pow(m-dados[i],2);
    return sqrt(soma/(ndados-1));
}
