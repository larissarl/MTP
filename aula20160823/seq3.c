#include <stdio.h>
int main(){
    float notaA, notaB,notaC,media;
    printf("Digite a nota A: ");
    scanf("%f",&notaA);
    printf("Digite a nota B: ");
    scanf("%f",&notaB);
    printf("Digite a nota C: ");
    scanf("%f",&notaC);
    media=(2*notaA+3*notaB+5*notaC)/10.0;
    printf("A media das notas e: %f",media);
    return 0;
}
