#include <stdio.h>
char * leTexto (char * nome);
int main()
{
    char * nome[256];
    printf ("Informe o nome do arquivo para ser lido: ");
    fgets (nome,256,stdin);
    leTexto(nome);
    return 0;
}

char * leTexto (char *nome){
    FILE *arquivo;
    char *aux;
    char * texto;
    int c, tamanho = 0;
    arquivo = fopen(nome, "r");
    if(arquivo == NULL)
       fscanf (nome,%f)
    fclose(arquivo);
    return texto;

    }
