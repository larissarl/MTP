#include <stdio.h>
#define N 3
int main()
{
    int i=0;
    int op;
    struct cadastro
    {
        char nome[20];
        int idade;
        int telefone;
    }vet[N];
    for (i=0;i<N;i++)
    {
        printf("Cadatre o nome desejado: ");
        fflush(stdin);
        gets(vet[i].nome);
        printf ("\nDigite a idade para o cadastro: ");
        scanf ("%d",&vet[i].idade);
        printf("\nDigite o telefone para o cadastro: ");
        scanf ("%d",&vet[i].telefone);
    }
    printf("Digite 1 para ver os nomes cadstrados\nDigite 2 para ver as idades cadastradas\nDigite 3 para ver os telefones cadastrados");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("\nOs nomes cadastrados sao: ");
        for (i=0;i<N;i++)
            printf("\n%s",vet[i].nome);
        break;
    case 2:
        printf("\nAs idades cadastradas sao: ");
        for(i=0;i<N;i++)
            printf("\n%d",vet[i].idade);
        break;
    case 3:
        printf("\nOs telefones cadastradas sao:");
        for (i=0;i<N;i++)
         printf("\n%d",vet[i].telefone);
        break;
    }

    return 0;
}
