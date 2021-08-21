#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int cargar(int *alturas){
    printf("ingrese las alturas:\n");
    int i=0;
    do{
        scanf("%i",&alturas[i]);
        i+=1;
    } while (alturas[i-1]!=0);
    return i;
}
int ObtenerMayor(int *alturas, int largo){
    int mayor;
    int i=0;
    for ( i = 0; i < largo; i++)
    {
        if(mayor<alturas[i]){
            mayor=alturas[i];
        }
    }
    return mayor;
}
void Estadistica(int *alturas, int largo, float *promedio, float *desvio){
    int i,totalAlturas;

    for ( i = 0; i < largo; i++)
    {
        totalAlturas+=alturas[i];
    }
    *promedio=(totalAlturas/largo);

}
