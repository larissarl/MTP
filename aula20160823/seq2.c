#include <stdio.h>
int main(){
    float areatri, basetri,alturatri;
    printf("Digite a base do triangulo: ");
    scanf("%f",&basetri);
    printf("Digite a altura do triangulo: ");
    scanf("%f",&alturatri);
    areatri=basetri*alturatri/2.0;
    printf("A area do triangulo e: %f",areatri);
    return 0;
}

