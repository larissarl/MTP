#include <stdio.h>

void inverter (char *frase, int n);

int main()
{
    char frase[256];
    printf("Digite uma frase: ");
    gets (frase);
    inverter (frase,strlen(frase));
    printf("\n");
    return 0;
}

void inverter (char *frase, int n)
{
    printf("%c",frase[n-1]);
    if (n>0)
        inverter(frase,n-1);

}
