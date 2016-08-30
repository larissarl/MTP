#include <stdio.h>
#include <math.h>
int main()
{
    int numero,base;
    float logaritmo;
    printf("Digite o numero desejado: ");
    scanf("%d",&numero);
    printf("Digite a base do log: ");
    scanf("%d",&base);
    logaritmo=log10(numero)/log10(base);
    printf("%f",logaritmo);
    return 0;
}
