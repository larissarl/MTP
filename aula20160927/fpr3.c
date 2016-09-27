#include <stdio.h>

void comum (int vetA[],int vetB[],int tamanhoA,int tamanhoB);

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    comum (A,B,n,m);
    return 0;
}

void comum (int *vetA,int *vetB,int tamanhoA,int tamanhoB)
{
    int i,j,k=0,comum [35];
    for (i=0; i<tamanhoA; i++)
    {
        for(j=0;j<tamanhoB;j++)
        if (vetA[i] == vetB[j])
        {
            comum[k]=vetA[i];
            k++;
        }
    }
    printf("Os numeros comuns sao: ");
    for (i=0;i<k;i++)
   printf ("%d ",comum[i]);
}
