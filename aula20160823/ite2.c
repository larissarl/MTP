#include <stdio.h>
int main()
{
    int base, potencia,resultado,i;
    printf("Digite a base da potencia: ");
    scanf("%d",&base);
    printf("Digite potencia: ");
    scanf("%d",&potencia);
    resultado=base;
    for(i=1;i<potencia;i++)
    {
        resultado=resultado*base;
    }
     printf("A potencia e:%d",resultado);
    return 0;
}
