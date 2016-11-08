#include <stdio.h> // Pilha de char/
#define TAMPILHA 10
typedef struct Pilha{
    int idtopo;
    int dado[TAMPILHA];
}Pilha;
void push(Pilha * pilha,int dado);
void pop(Pilha * pilha);
char top(Pilha  pilha);
int empty(Pilha pilha);

int main ()
{
    Pilha pilha;
    int n;
    pilha.idtopo = -1;
    do{
        printf("Digite o numero positivo (caso queira sair digite um negativo): ");
        scanf("%d",&n);
        push(&pilha,n);
    }while(n>0);
    printf("\n");
    pop(&pilha);
    while(!empty(pilha)){
        printf("%d ",top(pilha));
        pop(&pilha);
    }
    return 0;
}

void push(Pilha * pilha,int dado){
    if((*pilha).idtopo+1<TAMPILHA){
        (*pilha).idtopo++;
        (*pilha).dado[(*pilha).idtopo]=dado;
    }else fprintf(stderr,"Estouro de pilha!!\n");
}

void pop(Pilha * pilha){
    if((*pilha).idtopo-1 >= -1)
        (*pilha).idtopo--;
}

char top(Pilha pilha){
    return pilha.dado[pilha.idtopo];
}

int empty(Pilha pilha)
{
    return (pilha.idtopo==-1);
}
