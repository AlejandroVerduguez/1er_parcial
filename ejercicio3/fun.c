#include <string.h>
void ordenar(char *frase,char *fraseOrdenada){
    int vueltas=0;
    while (vueltas<strlen(frase))
    {
        int i=0;
        for ( i = 0; frase[i+1]!='\0'; i++)
    {
        if (frase[i]<frase[i+1])
        {
            char aux=frase[i];
            frase[i]=frase[i+1];
            frase[i+1]=aux;;
        }
    }
    vueltas +=1;
    }
    
    
    
}