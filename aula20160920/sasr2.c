#include<stdio.h>
void par ();
void impar();

int main()
{
    int op;
    printf ("Se deseja ver os numeros pares digite 0, se deseja ver o s impares digite 1: ");
    scanf("%d",&op);
    switch (op){
        case 0:
            par();
            break;
        case 1:
            impar ();
            break;
    }

    return 0;
}

void par ()
{
    int i;
            printf ("Os numeros pares de 1 a 10 sao: ");
    for (i=1;i<11;i++){
        if(i%2 == 0)
        printf (" %d ",i);
    }

}
void impar()
{
   int i;
   printf("Os numero impares de 1 a 10 sao: ");
    for (i=1;i<11;i++)
        if(i%2 != 0)
            printf("Os numero impares de 1 a 10 sao: %d",i);
}
