#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int dado,numero,soma;
    dado = rand()%1+1;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("%d",dado);
    soma=numero+dado;
    if(soma%2==0)
        printf("O resultado e par");
    else
        printf ("O resultado e impar");
    return 0;
}
