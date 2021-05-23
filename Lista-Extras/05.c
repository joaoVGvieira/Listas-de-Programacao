#include <stdio.h>
#include <stdlib.h>
#define N 1500
typedef struct{
  int codigo;
  char  horario[6];
  int  quantidade;
  float valor;
  char  origem[15];
  char  destino[15];
}voos;
void cadastro(int *i,voos *p){
    printf("Digite o codigo do voo:");
    scanf("%d",&p[*i].codigo);
    printf("Digite o horario do voo:");
    scanf(" %[^\n]s",p[*i].horario);
    printf("Digite a quantidade de passageiros no voo:");
    scanf(" %d",&p[*i].quantidade);
    printf("Digite o valor do voo:");
    scanf(" %f",&p[*i].valor);
    printf("Digite a origem do voo:");
    scanf(" %[^\n]s",p[*i].origem);
    printf("Digite o destino do voo:");
    scanf(" %[^\n]s",p[*i].destino);
    (*i)++;
}
void salvar(voos p,int i){
    FILE *arquivo;
    arquivo=fopen("voos.txt","ab");
    if(arquivo == NULL){
        printf("Não foi possível abrir para escrita!\n");
        return;
    }
    fprintf(arquivo,"---Voo %d---\n",i);
    fprintf(arquivo,"Codigo:%d\n",p.codigo);
    fprintf(arquivo,"Horario:%s\n", p.horario);
    fprintf(arquivo,"Quantidade:%d\n", p.quantidade);
    fprintf(arquivo,"Valor:%2.f\n", p.valor);
    fprintf(arquivo,"Origem:%s\n", p.origem);
    fprintf(arquivo,"Destino:%s\n", p.destino);
    fclose(arquivo);
}
void imprimir(voos *p,int cont){
       int i=0;
       char digitado[15];
       printf("Digite sua origem:");
       scanf(" %[^\n]s",digitado);
       for(i=0;i<cont;i++){
           if (strcmp(digitado,p[i].origem)==0){
                printf("\n---Voo %d---\n",i);
                printf("Codigo:%d\n",p[i].codigo);
                printf("Horario:%s\n", p[i].horario);
                printf("Quantidade:%d\n", p[i].quantidade);
                printf("Valor:%2.f\n", p[i].valor);
                printf("Origem:%s\n", p[i].origem);
                printf("Destino:%s\n", p[i].destino);
                printf("\n");
           }
       }
}
int main(){
   int opcao;
   int cont=0;
   voos p[N];
   while(1){
       printf("Menu:\n1)Cadastrar\n2)Mostrar dados dos voos que possue a mesma origem digitada.\n3)Sair.\n");
       //printf("R=");
       scanf("%d",&opcao);
       if(opcao==1){
            cadastro(&cont,p);
            salvar(p[cont-1],cont-1);
       }
       else if(opcao==2){
            imprimir(p,cont);
       }
       else if(opcao==3){
           printf("volte sempre!!!\n");
           break;
       }
       else{
           printf("Opcao Invalida!!!!!");
       }
   }
   
}
