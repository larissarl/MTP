#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if(numero%2==0)
        printf("O numero e par\n");
    else
        printf("O numero e impar\n");
    if (numero%3==0)
        printf("O numero e multiplo de 3\n");
    else
        printf("O numero nao e multiplo de 3\n");
    if (numero%5==0)
        printf("O numero e multiplo de 5\n");
    else
        printf("O numero nao e multiplo de 5\n");
    if (numero%7==0)
        printf("O numero e multiplo de 7\n");
    else
        printf("O numero nao e multiplo de 7\n");
    return 0;
}
