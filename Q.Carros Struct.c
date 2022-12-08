#include <stdio.h>
struct tipos_de_carros{
    char nome[10];
    char marca[15];
    char cor[10];
    int ano;
    float preco;
};
int main()
{
    int i;
    struct tipos_de_carros carro[5];
    
    for(i=0;i<5;i++){
        printf("........Carro %d........\n",i);
        printf("Nome:\n");
        fgets(carro[i].nome,10,stdin);
        
        printf("Marca:\n");
        fgets(carro[i].marca,15,stdin);
        
        printf("Cor:\n");
        fgets(carro[i].cor,10,stdin);
        
        printf("Ano:\n");
        scanf("%d",&carro[i].ano);
        
        printf("Preco\n");
        scanf("%f",&carro[i].preco);
        printf("\n");
    }
     for(i=0;i<5;i++){
        printf("Nome:");
        puts(carro[i].nome);
        
        
        printf("Marca:");
        puts(carro[i].marca);
        
        
         printf("Cor:");
         puts(carro[i].cor);
         
         
         printf("Ano: %d\n",carro[i].ano);
         
         printf("Preco: %f",carro[i].preco);
     }
    return 0;
}
