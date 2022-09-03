//tirar espaços excedentes só com fgets e puts
#include <stdio.h>
#include <string.h>
#define BRANCO 32
#define MAX_TAM 256
int main()
{
    char original[MAX_TAM];
    char semEspaco[MAX_TAM];
    int ndxOriginal,ndxSemEspaco;
    ndxOriginal=0;
    ndxSemEspaco=0;
    puts("digite a string");
    fgets(original,MAX_TAM,stdin);
    
    while(original[ndxOriginal]!='\0'){
        if(original[ndxOriginal]!=BRANCO){
            semEspaco[ndxSemEspaco++]=original[ndxOriginal];
            ndxOriginal++;}
        else if(original[ndxOriginal]==BRANCO){
            semEspaco[ndxSemEspaco++]=original[ndxOriginal];
             while(original[ndxOriginal]==BRANCO)
                ndxOriginal++;}
                
        }
        
        semEspaco[ndxSemEspaco]='\0';
        
        puts(semEspaco);
    
}

