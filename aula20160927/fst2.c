#include <stdio.h>

struct racional {
int numerador;
int denominador;
};
struct racional soma (int numerador1, int denominador1, int numerador2,int denominador2);
int main ()
{
    struct racional resposta;
    int num,deno,num1,deno1;
    printf ("Digite o numerador e denominador do numero: ");
    scanf("%d/%d",&num,&deno);
    printf ("Digite o numerador e denominador do numero: ");
    scanf("%d/%d",&num1,&deno1);
    resposta = soma (num,deno,num1,deno1);
    printf ("A soma das fracoes e: %d/%d",resposta.numerador,resposta.denominador);
    return 0;
}

struct racional soma (int numerador1, int denominador1, int numerador2,int denominador2){
struct racional resposta;
resposta.numerador = (numerador1*denominador2) + (numerador2*denominador1);
resposta.denominador = denominador1 * denominador2;
return resposta;
}
