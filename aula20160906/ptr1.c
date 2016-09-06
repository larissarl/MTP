#include <stdio.h>
int main ()
{
    unsigned int numero=0xFACA8421;
    unsigned char * ponteiro=NULL;// significa que nao aponta pra ugar nenhum
    printf("%p : %u\n", &numero, numero);
    ponteiro =(unsigned char *) &numero;
    for(;ponteiro<&numero+1;ponteiro++)
        printf("%p : %X\n",ponteiro,*ponteiro );
    return 0;
}
