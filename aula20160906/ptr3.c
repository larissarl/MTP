#include <stdio.h>
int main()
{
    int contagem=0,tamanho;
    int vetor[]={0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    unsigned char * ponteiro=NULL;
    tamanho=sizeof(vetor)/sizeof(int);
    ponteiro = (unsigned char *) vetor;//vetor e o endereço do primeiro cara vetor[0]
    for (;ponteiro<(unsigned char *)(vetor+tamanho);ponteiro++)
    {
        printf("%p : %X\n",ponteiro, *ponteiro);
        if(*ponteiro==0xFF)
            contagem++;
    }
    printf("Os bytes de memoria com apenas 1 sao: %d\n",contagem);
    return 0;
}
