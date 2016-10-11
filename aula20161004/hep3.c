#include <stdio.h>
#include <stdlib.h>
char * recebeTexto (char * texto);
char * InicializaTexto();

int main()
{
    char * texto;
    texto=InicializaTexto();
    printf("Entre com seu texto(Entre com '#'+ENTER para sair)");
    texto=recebeTexto(texto);
    printf("\nO que tem na HEP::\n");
    printf("%s\n",texto);
    free(texto);
    return 0;
}

char *InicializaTexto()
{
    char * texto;
    texto=(char *) malloc (sizeof(char));
    texto[0]='\0';
    return texto;
}

char * recebeTexto (char * texto)
{
    int c,tamanho = 0;
    do{
      c = getchar();
      if (c!='#')
      {
          tamanho++;
          texto =(char *) realloc(texto,(tamanho+1)*sizeof(char));
          texto[tamanho]='\0';
          texto[tamanho-1]=c;

      }
    }while(c!='#');
    return texto;
}
