#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void sorteio (int num);

int main()
{
    srand(time(0));
    int numero;
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d",&numero);
    sorteio(numero);
    return 0;
}

void sorteio (int num)
{
    int i;
    for (i=0;i<10;i++){
    if (num == rand()%10 + 1)
        printf("\nPARABENS!!!!");
    else
        printf ("\nNao foi dessa vez...");
    }
}
