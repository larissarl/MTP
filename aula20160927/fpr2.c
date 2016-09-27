#include <stdio.h>
#include <ctype.h>
#include <string.h>

void soletras (char *frase, char *nova_frase, int n);

int main ()
{
    char frase[256],nova_frase[256];
    printf ("Digite uma frase: ");
    gets (frase);
    soletras(frase , nova_frase , strlen(frase));// nao precisa colocar & pq o nome ja e um endereço!!
    printf ("%s\n", nova_frase);
    return 0;
}

void soletras (char *frase, char *nova_frase, int n)// colocou o tamanho so pra lembrar que precisa disso pra vet sem ser de caractere
{
    int i,j=0;
    for(i=0 ; i<n ; i++)
        if (isalpha(frase[i]))
        {
            nova_frase[j] = frase[i];
            j++;
        }
    nova_frase[j+1]='\0';

}
