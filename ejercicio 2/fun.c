#include <math.h>
#include<stdio.h>
void cargar(float *Y,float *X){
    int i;
    for ( i = 0; i < 6; i++)
        {
            printf("x:");
            scanf("%f",&X[i]);
            printf("y:");
            scanf("%f",&Y[i]);
        }
}
float menorDistanciaOrigen(float *Y,float *X){
    int i;
    float menorDistanciaOrigen=0;
    for ( i = 0; i < 6; i++)
    {
        float d =sqrt(Y[i]*Y[i] +X[i]*X[i]);
        if (menorDistanciaOrigen>d)
        {
            menorDistanciaOrigen=d;
        }
    }
    return menorDistanciaOrigen;
}