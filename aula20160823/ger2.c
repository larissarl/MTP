#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int comparar,numero,contador=0;
    comparar = rand()%99+1;
    printf("%d\n",comparar);
    do
    {

    printf("Digite um numero de 0 a 99: ");
    scanf("%d",&numero);
    if (comparar>numero)
        printf("Baixo\n");
    else
        printf("Alto\n");
    contador++;
    }while(comparar!=numero);
    if (comparar==numero)
        printf("Voce acertou!!!\n");
    printf("Voce precisou de %d tentativas para acertar:",contador);
    return 0;
}
