#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 256
int main()
{
    int i=0;
    char frase[N];
    printf("Digite uma frase; ");
    gets(frase);
    for (i=0;frase[i]!= '\0';i++)
    {
        frase [i]=toupper(frase[i]);
    }
    printf("Tamanho = %u\n",strlen(frase));
    if (strcmp(frase,"BOM DIA",7)==0)
        printf("Bom dia pra vc tbm fufinhuuun!");
    else
        printf("Voce quer dizer: %s?\n",frase);
    return 0;
}
