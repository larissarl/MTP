#include <stdio.h> //Pilha de int/

typedef struct Pilha{
    int idtopo;
    int * dado;
}Pilha;
void push(Pilha * pilha,int dado);
void pop(Pilha * pilha);
char top(Pilha  pilha);
int empty(Pilha pilha);

int main ()
{
    Pilha pilha;
    int i;
    pilha.idtopo = -1;
    pilha.dado=NULL;
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
void push(Pilha * pilha,int dado){
    if((*pilha).dado==NULL)
        (*pilha).dado=(int*) malloc(sizeof(int));
    else
          (*pilha).dado=(int*) realloc((*pilha).dado,(*pilha).idtopo*sizeof(int));
    (*pilha).dado[(*pilha).idtopo]=dado;
}
void pop(Pilha * pilha){
    if((*pilha).dado==NULL)
        (*pilha).idtopo--;
    if((*pilha).idtopo==-1)
        (*pilha).dado=NULL;
    else
        (*pilha).dado=(int*) realloc((*pilha).dado,(*pilha).idtopo*sizeof(int));
}
char top(Pilha pilha){
    return pilha.dado[pilha.idtopo];
}

int empty(Pilha pilha)
{
    return (pilha.idtopo==-1);
}

