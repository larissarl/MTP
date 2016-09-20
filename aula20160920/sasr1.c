#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void fala();

int main()
{
    srand(time(0));
    char msg[256];
    printf("** Oi, quer conversar?\n");
    do {
        fgets(msg,sizeof(msg),stdin);
        fala();
    }while (strncmp(msg, "tchau", 5)!=0);
    printf("** Que pena eu estava gostando de voce");
    return 0;
}

void fala()
{
    int qualfala=rand()%7;
    switch (qualfala)
    {
    case 0:
        printf ("** Tudo bem?");
        break;
    case 1:
        printf ("** OK");
        break;
    case 2:
        printf ("** LOL!");
        break;
    case 3:
        printf ("** Que legal!");
        break;
    case 4:
        printf ("**Que chato!");
        break;
    case 5:
        printf ("** Fale mais sobre isso");
        break;
    case 6:
        printf ("** Sobre o que quer falar?");
        break;
    }

}
