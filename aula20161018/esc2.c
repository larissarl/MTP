#include <stdio.h>
#include <string.h>
#define NCHAR 256

int main()
{
    int ndados,i;
    char * nome[NCHAR];
    float vet[NCHAR];
    FILE * arquivo;
    printf("Digite quantos dados desaja salvar: ");
    scanf("%d",&ndados);
    printf("Informe o nome do arquivo em que os dados serao salvos: ");
    scanf("%s",nome);
    printf("\nInforme os dados para salv-los: ");
    for(i=0;i<ndados;i++)
    {
        printf("\n%d-",i+1);
        scanf("%f",&vet[i]);
    }
    arquivo= fopen(nome,"w");
    for (i=0;i<ndados;i++)
        fprintf(arquivo,"%f",vet[i]);
    fclose(arquivo);
    return 0;
}
