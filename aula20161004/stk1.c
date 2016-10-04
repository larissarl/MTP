#include <stdio.h>
#define N 2
#define M 4
void recebedados (float matriz[N][M]);
void imprime (float matriz[N][M]);
void imprimetransposta (float matriz[M][N]);
void transpor (float matriz[N][M],float tranposta [M][N]);

int main()
{
    float matriz[N][M],transposta[M][N];
    recebedados(matriz);
    imprime (matriz);
    transpor(matriz,transposta);
    printf("A transposta e:\n");
    imprimetransposta (transposta);
    return 0;
}

void recebedados (float matriz[N][M])//referencia
{
    int i,j;
    for (i=0;i<N;i++)
        for(j=0;j<M;j++){
            printf ("Entre com o elmento (%d,%d): ",i,j);
            scanf("%f",&matriz[i][j]);

}}

void imprime (float matriz[N][M])
{
    int i,j;
    printf ("Matriz %d%d:\n",N,M);
    for (i=0;i<N;i++)
        for(j=0;j<M;j++)
            printf("%g%c",matriz[i][j],(j != M-1)? '\t' : '\n');
}
void imprimetransposta (float matriz[M][N])
{
    int i,j;
    printf ("Matriz %d%d:\n",M,N);
    for (i=0;i<M;i++)
        for(j=0;j<N;j++)
            printf("%g%c",matriz[i][j],(j != N-1)? '\t' : '\n');
}

void transpor (float matriz[N][M],float transposta [M][N])
{
    int i,j;
    for (i=0;i<N;i++)
        for(j=0;j<M;j++)
            transposta[j][i]=matriz[i][j];
printf("ok\n");

}
