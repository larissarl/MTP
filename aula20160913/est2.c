#include <stdio.h>
#include <math.h>

#define soma(pta,ptb,soma) \
 ({soma.x = pta.x + ptb.x; \
   soma.y = pta.y + ptb.y; \
   soma.z = pta.z + ptb.z;})

#define recebeponto(c, ponto)\
({printf ("Digite a coordenada x de %c:",c); \
 scanf ("%f",&ponto.x ); \
 printf ("Digite a coordenada y de %c:",c); \
 scanf ("%f",&ponto.y); \
 printf ("Digite a coordenada z de %c:",c); \
 scanf ("%f",&ponto.z);})

 #define mostraponto(ponto)\
 ({printf("(%g;%g)\n",ponto.x,ponto.y,ponto.z);})

 #define distancia(pta,ptb,d)\
 ({d=sqrt(pow(pta.x-ptb.x,2.f) + \
          pow (pta.y-ptb.y,2.f)+ \
          pow (pta.z-ptb.z,2.f));})

struct ponto
{
    float x;
    float y;
    float z;
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

