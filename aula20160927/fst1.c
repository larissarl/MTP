#include <stdio.h>

struct divisaoint {
int quociente;
int resto;
};
struct divisaoint divisao (int dividendo, int divisor);
int main ()
{
    struct divisaoint resposta;
    int dividendo, divisor;
    printf ("Digite o dividendo: ");
    scanf ("%d",&dividendo);
    printf ("Digite o divisor: ");
    scanf ("%d",&divisor);
    resposta = divisao (dividendo,divisor);
    printf ("Quociente: %d Resto: %d",resposta.quociente,resposta.resto);
    return 0;
}

struct divisaoint divisao (int dividendo, int divisor){
struct divisaoint resposta;
resposta.quociente = dividendo /divisor;
resposta.resto = dividendo%divisor;
return resposta;
}
