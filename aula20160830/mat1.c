#include <stdio.h>
#include <math.h>
int main()
{
    int coordenadaX,coordenadaY;
    float distancia;
    printf ("Digite as coordenadas x: ");
    scanf("%d",&coordenadaX);
    printf ("Digite as coordenadas y: ");
    scanf("%d",&coordenadaY);
    distancia=sqrt((pow(coordenadaX,2)+pow(coordenadaY,2)));
    printf("A distancia entre os ppontos e: %f",distancia);
    return 0;
}
