#include <stdio.h>
#include <ctype.h>
int main ()
{
    int indice=0;
    char investigador;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    investigador= frase[indice];
    while (investigador)
    {
     frase[indice]=toupper(investigador);
     indice++;
     investigador=frase[indice];
    }
    printf("A nova frase eh:%s",frase);
    return 0;
}
