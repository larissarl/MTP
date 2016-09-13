#include <stdio.h>
union uniao
{
    int i;
    float f;
};
int main ()
{
    union uniao numero;
    char opcao;
    do{
    printf ("Voce quer entrar com int ou float? ");
    scanf ("%c",&opcao);
    fflush(stdin);
    }while (opcao!='i' && opcao!='I'&& opcao!='f' && opcao!='F');
    if (opcao == 'i'||opcao=='I')
    {
        printf("Entre com o int: ");
        scanf("%d",&numero.i);
        printf("Como float: %e\n",numero.f);
    }
    else
    {
        printf("Entre com o float");
        scanf("%f",&numero.f);
        printf("Como float: %d\n",numero.i);
    }
    return 0;
}
