#include <stdio.h>
#include <ctype.h>
int main ()
{
    int indice=0,contador=0;
    char investigador;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    investigador= frase[indice];
    while (investigador)
    {
        if (isalpha(investigador)!=0)
        {
            contador++;
        }
        indice++;
        investigador= frase[indice];
    }
    printf("O numero de letras da frase e: %d",contador);
    return 0;
}
