#include <stdio.h>
#include <string.h>
typedef struct{
    int codigo;
    char nome[15];
    float preco;
    int quatidade;    
}produtos;
int main(){
  int N=5;  
  produtos p[N];
  int i;
  for(i=0;i<N;i++){
      printf("Digite o codigo do produto %d:",(i+1));
      scanf("%d",&p[i].codigo);
      printf("Digite o nome do produto %d:",(i+1));
      scanf(" %[^\n]s",p[i].nome);
      printf("Digite a quantidade de produtos:");
      scanf("%d",&p[i].quatidade);
      printf("O preco do produto %d:",(i+1));
      scanf("%f",&p[i].preco);
  }
  int conta=0;
  int pedido,quantidade;
  while (1)
  {
    printf("Digite o codigo do pedido:");
    scanf("%d",&pedido);
    if(pedido==0){
        break;
    }
    for(i=0;i<N;i++){
        conta=0;
        if(pedido==p[i].codigo){
             printf("A quantidade:");
             scanf("%d",&quantidade);
            conta=(p[i].quatidade-quantidade);
            if(conta>=0){
                printf("Compra realizada com sucesso\n");
                p[i].quatidade=conta;
            }
            else{
                 printf("Nao ha produto disponivel\n");
            }
        }
        else{
            printf("nao existe esse produto na loja\n");
        }
    }
  }  
}
