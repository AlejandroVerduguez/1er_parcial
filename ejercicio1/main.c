#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fun.h"
int main(int argc, char const *argv[])
{
    int *alturas,*i,largo;//valores de las alturas en cm
    float promedio,desvio;
    i=alturas;
    largo=cargar(i);
    int mayor= ObtenerMayor(i, largo);
    Estadistica(i,largo,&promedio,&desvio);
    
    printf("largo:%i ", largo);
    printf("alturas:%i ", alturas[0]);
    printf("alturas:%i mayor %i promedio %f", alturas[1],mayor,promedio);
    
    return 0;
}
