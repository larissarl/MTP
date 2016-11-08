#include <stdio.h> // Pilha de char/
#define TAMPILHA 10
typedef struct Pilha{
    int idtopo;
    char dado[TAMPILHA];
}Pilha;
void push(Pilha * pilha,char dado);
void pop(Pilha * pilha);
char top(Pilha  pilha);
int empty(Pilha pilha);

int main ()
{
    Pilha pilha;
    int i;
    pilha.idtopo = -1;
    for (i=0; i<5; i++){
        printf("%c",'A'+i);
        push(&pilha,'A'+i);
    }
    printf("\n");
    while(!empty(pilha)){
        printf("%c",top(pilha));
        pop(&pilha);
    }
    return 0;
}

void push(Pilha * pilha,char dado){
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
