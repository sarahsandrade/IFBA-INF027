#include <stdio.h>
#define MAX_TAM 10
int main()
{
    int vetor[MAX_TAM];
    int iCont,maior,menor;
    
    for(iCont=0;iCont<MAX_TAM;iCont++){
        printf("digite o numero da posição %d\n",iCont);
        scanf("%d",&vetor[iCont]);
    }
    maior=menor=vetor[0];
    for(iCont=1;iCont<MAX_TAM;iCont++){
        if(vetor[iCont]>maior)
        maior=vetor[iCont];
        else if(vetor[iCont]<menor)
        menor=vetor[iCont];
    }
    printf("O menor valor é %d\nO maior valor é %d",menor,maior);

    return 0;
}
