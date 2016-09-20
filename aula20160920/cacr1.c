#include <stdio.h>

int main ()
{
    int i,numero;
    printf("Entre com um numero: ");
    scanf("%d",&numero);
     for (i=2;i<=numero/2;i++){
         if (primo(i)&& primo(numero-i))
            printf("Soma %d+%d\n",i,numero-i);
     }
    return 0;
}

int primo (int numero)
{
    int i,verifica;
    for (i=2;i<=numero/2;i++){
        if (numero%i ==0)
        verifica=0;
        break;
    }
    return verifica;
}
