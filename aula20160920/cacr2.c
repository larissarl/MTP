#include <stdio.h>
#include <math.h>

float delta (float a, float b, float c);
float raizes (float a,float b,float c,float delta);

int main()
{
    float a,b,c,Delta,raiz;
    printf("Digite a da funcao: ");
    scanf("%f",&a);
    printf("Digite b da funcao: ");
    scanf("%f",&b);
    printf("Digite c da funcao: ");
    scanf("%f",&c);
    Delta=delta (a,b,c);
    raiz=raizes (a,b,c,Delta);
    printf ("\nO delta e: %f",Delta);
    printf("\nAs raizes sao: %f",raiz);
    return 0;
}

float delta (float a, float b, float c)
{
    float delta;
    delta=pow(b,2)-(4*a*c);
    return delta;
}

float raizes (float a,float b,float c,float delta)
{
    float vetor [2];
    if (delta>0){
        vetor[0]=(-b + sqrt(delta))/(2*a);
        vetor[1]= (-b - sqrt(delta))/(2*a);
    }
    if (delta=0)
        vetor [0] = -b/(2*a);
    else
        printf("Nao tem raiz");
    return vetor[2];
}
