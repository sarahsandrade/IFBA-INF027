//inverter string
#include <stdio.h>
#define MAX_TAM 256
int main()
{
    char original[MAX_TAM];
    char inversa[MAX_TAM];
    int ndxOriginal, ndxInversa,iCont;
    
    puts("digite a string");
    fgets(original,MAX_TAM,stdin);
    
    for(ndxOriginal=0,iCont=0;original[iCont+1]!='\0';iCont++)
    ndxOriginal++;
    
    
    for(ndxInversa=0;original[ndxOriginal]>=0;ndxInversa++,ndxOriginal--)
        inversa[ndxInversa]=original[ndxOriginal];
        
        inversa[ndxInversa]='\0';
        
    puts(inversa);
}
