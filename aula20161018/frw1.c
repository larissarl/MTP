#include <stdio.h>

#define NCHAR 256

void recuperarDados();
void receberDados();

int main (){
    FILE * arquivo;
    char nome[256];
    int idade;
    float altura_m;
    int opc;
    do {
        printf("\n1 - Receber dados\n");
        printf("2 - Recuperar dados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao: ");
        fscanf (stdin, "%d", &opc);
        getchar();
        if(opc==1)
            receberDados();
        if(opc==2)
            recuperarDados();
    } while (opc);
    return 0;
}
void receberDados(){
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura_m;
    printf("Entre com seu nome: ");
    fgets(nome, NCHAR, stdin);
    printf("Entre com sua idade: ");
    fscanf(stdin, "%d", &idade);
    printf("Entre com sua altura: ");
    fscanf(stdin, "%f", &altura_m);
    arquivo = fopen ("info.txt", "w");
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura_m);
    fclose(arquivo);

}
void recuperarDados(){
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura_m;
    arquivo = fopen ("info.txt", "r");
    fscanf(arquivo, "%s\n%d\n%f\n", nome, &idade, &altura_m);
    fclose(arquivo);
    fprintf(stdout, "Nome: %s\n", nome);
    fprintf(stdout, "Idade: %d\n", idade);
    fprintf(stdout, "Altura: %f\n", altura_m);


}
