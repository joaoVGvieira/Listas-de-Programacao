#include <stdio.h>
#include <stdlib.h>
int main(){
    float preço[100],faturamento=0,conta=0,resto=0;
    int quat[100],venda[100],estoque[100];
    int i;
    printf("(Tabela de faturamento)\n");   
    for(i=1;i<=100;i++){
        printf("Preço do produto[%d]:",i);
        scanf("%f",&preço[i]);
        printf("Quantidade do produto[%d]:",i);
        scanf("%d",&quat[i]);
        printf("Quantidade de venda do produto[%d]:",i);
        scanf("%d",&venda[i]);
        if (venda[i]==0){
           faturamento+=0;
        }else{
          conta=preço[i]*venda[i];
          faturamento+=conta;
          conta=0;
        }
    }
    for(i=1;i<=100;i++){
      estoque[i]=quat[i]-venda[i];
      printf("Estoque do produto[%d]:%d\n",i,estoque[i]);
    }
  printf("Faturamento total: %2.2f",faturamento);
}
