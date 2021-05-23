#include <stdio.h>
typedef struct
{
    int codigo;
    char descricao[100];
    int estoque_min;
    int estoque_atual;
    float preco;
}cadastro;

void menor_estoque(int numero, cadastro *p){
    int i;
    for(i=0;i<numero;i++){
         if (p[i].estoque_atual<p[i].estoque_min)
       {
          imprimir(i,p);
       }
    }

}
void imprimir(int num, cadastro *p){
    
    printf("-----Produto %d abaixo do estoque minimo!!!-----\n",(num+1));
    printf("Codigo=%d\n",p[num].codigo);
    printf("Descricao=%s\n",p[num].descricao);
    printf("Estoque minimo=%d\n",p[num].estoque_min);
    printf("Estoque atual=%d\n",p[num].estoque_atual);
    printf("preco=%2.f\n",p[num].preco);
    printf("\n");
    
}
int main(){
   int N;
   printf("Quantos produtos serao cadastrados:");
   scanf("%d",&N);
   cadastrar(N);
}
