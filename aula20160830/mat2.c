#include <stdio.h>
#include <math.h>
int main()
{
    const int pi=3.1415;
    int lado1,lado2;
    float angulo,lado3,cosseno;
    printf("Digite o umalado do triangulo: ");
    scanf("%d",&lado1);
    printf("Digite o umalado do triangulo: ");
    scanf("%d",&lado2);
    printf("Digite o angulo entre esses lados: ");
    scanf("%f",&angulo);
    angulo=(2*pi*angulo)/360;
    cosseno=cos(angulo);
    lado3=sqrt(pow(lado1,2)+pow(lado2,2)-2*lado1*lado2*cosseno);
    printf("O terceiro lado e: %f",lado3);
    return 0;
}
