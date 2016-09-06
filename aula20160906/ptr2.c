#include <stdio.h>
int main()
{
    int contagem=0,tamanho;
    int vetor[]={0,1,2,4,8};
    unsigned char * ponteiro=NULL;
    tamanho=sizeof(vetor)/sizeof(int);
    ponteiro = (unsigned char *) vetor;//vetor e o endereço do primeiro cara vetor[0]
    for (;ponteiro<vetor+tamanho;ponteiro++)
    {
        printf("%p : %X\n",ponteiro, *ponteiro);
        if(*ponteiro==0x0)
        contagem++;
    }
    printf("Os bytes de memoria com apenas 0 sao: %d\n",contagem);
    return 0;
}
