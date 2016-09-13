#include <stdio.h>
#include <math.h>

#define soma(pta,ptb,soma) \
 ({soma.x = pta.x + ptb.x; \
   soma.y = pta.y + ptb.y;})

#define recebeponto(c, ponto)\
({printf ("Digite a coordenada x de %c:",c); \
 scanf ("%f",&ponto.x ); \
 printf ("Digite a coordenada y de %c:",c); \
 scanf ("%f",&ponto.y);})

 #define mostraponto(ponto)\
 ({printf("(%g;%g)\n",ponto.x,ponto.y);})

 #define distancia(pta,ptb,d)\
 ({d=sqrt(pow(pta.x-ptb.x,2.f) + \
          pow (pta.y-ptb.y,2.f));})

struct ponto
{
    float x;
    float y;
};
int main ()
{
    struct ponto a,b,s;
    float distancia;
    recebeponto('a',a);
    recebeponto('b',b);
    soma (a,b,s);
    mostraponto (s);
    distancia (a,b,distancia);
    printf ("A distancia entre eles e: %g",distancia);
    return 0;
}
