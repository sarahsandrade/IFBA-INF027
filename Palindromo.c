#include <stdio.h>
#include <string.h>
#define BRANCO 32
#define MAX_TAM 256
int main()
{
    char original[MAX_TAM];
    char semEspaco[MAX_TAM];
    char inversa[MAX_TAM];
    int ndxOriginal,ndxSemEspaco,ndxInversa,iCont,pali;
    ndxOriginal=0;
    ndxSemEspaco=0;
    puts("digite a string");
    fgets(original,MAX_TAM,stdin);
    
    while(original[ndxOriginal]!='\0'){
        if(original[ndxOriginal]!=BRANCO){
            semEspaco[ndxSemEspaco++]=original[ndxOriginal];
            ndxOriginal++;}
        else if(original[ndxOriginal]==BRANCO){
             while(original[ndxOriginal]==BRANCO)
                ndxOriginal++;}
                
        }
        
        semEspaco[ndxSemEspaco]='\0';
        
        ndxSemEspaco--;
        
        for(ndxInversa=0;ndxSemEspaco>=0;ndxSemEspaco--,ndxInversa++){
            inversa[ndxInversa]=semEspaco[ndxSemEspaco];
        }
        inversa[ndxInversa]='\0';
        for(pali=0,iCont=0;inversa[iCont]!='\0';iCont++){
            if(inversa[iCont]!=semEspaco[iCont]){
                pali++;}
        }
        
       if(pali==0)
            printf("Eh palindromo");
            
        else if(pali>0)
            printf("N eh palindromo");
}
