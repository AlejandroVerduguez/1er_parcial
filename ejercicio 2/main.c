#include <stdlib.h>
#include <stdio.h>
#include "fun.h"
int main(int argc, char const *argv[])
{
    
    float Y[5],X[5];
    float *y=Y,*x=X;

    printf("ingrese 6 pares de x e y");
    cargar(x,y);
    
    printf("la menor distancia al origen es %f",menorDistanciaOrigen(x,y));
}