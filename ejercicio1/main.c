#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fun.h"
int main(int argc, char const *argv[])
{
    /*me tira un error que no se como solucionarlo"main.c fun.c -Wall
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: en la función `_start':
(.text+0x24): referencia a `main' sin definir
collect2: error: ld returned 1 exit status*/

    int *alturas,*i,largo;
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
