#include <stdio.h>

int main()
{
    int vetor [10] = {10,5,20,2,7,90,14,19,13,8};
    int iCont,jCont,aux;
    for(iCont=0;iCont<10;iCont++){
        for(jCont=iCont+1;jCont<10;jCont++){
            if(vetor[iCont]>vetor[jCont]){
                aux=vetor[jCont];
                vetor[jCont]=vetor[iCont];
                vetor[iCont]=aux;
            }
            
        }
    }
    
    for(iCont=0;iCont<10;iCont++)
        printf("%d ",vetor[iCont]);
}
