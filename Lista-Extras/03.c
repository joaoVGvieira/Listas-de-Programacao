#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{   
    char nome[15];
    char estado[4];
    int populacao;
}cidades;
cadastrar(int *cont, cidades *p){
      printf("nome cidade:");
      scanf(" %[^\n]s",p[*cont].nome);
      printf("nome do estado(sigla):");
      scanf(" %[^\n]s",p[*cont].estado);
      printf("Populacao Total:");
      scanf("%d",&p[*cont].populacao);
      (*cont)++;                
}
comparar(cidades *p,int cont){
   char digitado[4];
   int i;
   printf("Digite o estado(sigla):");
   scanf(" %[^\n]s",digitado);
   printf("----Cidades com o estado %s---\n",digitado);
   for(i=0;i<cont;i++){
      if (strcmp (digitado,p[i].estado) == 0){
            printf("Cidade:%s\n",p[i].nome);
      }
   }
   printf("\n");
   int maior=0,contm=0;
   printf("----Cidade com maior populacao----\n");
   for(i=0;i<cont;i++){
    if (strcmp(digitado,p[i].estado)==0){   
       if(p[i].populacao>maior){
           maior=p[i].populacao;
           contm=i;
       }
    }   
   }
   printf("Cidade:%s\n",p[contm].nome);
   printf("estado:%s\n",p[contm].estado);
   printf("populacao:%d\n",p[contm].populacao);
   printf("\n");
}
void imprimir(int cont,cidades *p){
         
}
int main(){
   int i,opc,cont=0;
   cidades p[1000];
      while(1){
       printf("1.Cadastrar Cidade\n2.Mostrar as cidades do estado digitado\n3.Sair\n");
       printf("R=");
       scanf("%d",&opc);
       if(opc==1){
           cadastrar(&cont,p);
       }
       else if(opc==2){
           comparar(p,cont);  
      }
      else if(opc==3){
         break;
      }
   }
    
}
