#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int dado1,soma,contador=3,i;
    do{
            for (i=0;i<5;i++)
            dado1=dado();
            soma= soma+dado1;
    if (soma>=21)
        printf ("\nVoce GANHOOOOU!!");
    else{
            contador--;
            printf ("\nVoce perdeu tem mais %d tentativas",contador);
    }
    }while(contador>0 && soma!=21 && soma<21);
    return 0;
}

int dado()
{
    int num_dado;
    num_dado=(rand()%6)+1;
    return num_dado;
}
