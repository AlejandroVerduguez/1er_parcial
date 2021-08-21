#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fun.h"
int main(int argc, char *argv[])
{
    //char *frase=argv[1];
    char *fraseOrdenada;
    if (argc>1){
        ordenar(argv[1],fraseOrdenada);
    }
    printf("frase ordenada %s", argv[1]);
    printf("frase ordenada %li", strlen(argv[1]));
    return 0;
}
