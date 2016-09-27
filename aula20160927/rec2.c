#include <stdio.h>

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf ("A soma dos numeros do vetor e: %d", soma (A,N));
    return 0;
}

int soma (int *vet,int tamanho)
{
    return (tamanho == 1 )? 1 : vet[tamanho-1] + soma (*vet,tamanho-2);
}
