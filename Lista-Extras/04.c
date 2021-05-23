#include <stdio.h>
#include <string.h>
#define N 1564
typedef struct 
{
  char nome_rua[15];
  char bairro[15];
  int numero;
  char cidade[15];
  char estado[3];
}endereco;

typedef struct
{
    char tipo[13];
    endereco end;
    float valor;
    char situacao[8];
    
}cadastro;
void ler_arquivo(int *cont, cadastro *p){
      FILE *arquivo;
      arquivo=fopen("Imoveis.txt","r");
      if(arquivo==NULL){
        return;
      }
      while (!feof(arquivo))
      { 
        fscanf(arquivo,"----Imovel %d----\n",cont);
        fscanf(arquivo,"Tipo do imovel:%s\n",p[*cont].tipo);
        fscanf(arquivo,"Nome da rua:%s\n",p[*cont].end.nome_rua);
        fscanf(arquivo,"Nome do bairro:%s\n",p[*cont].end.bairro);
        fscanf(arquivo,"Numero do imovel:%d\n",&p[*cont].end.numero);
        fscanf(arquivo,"cidade:%s\n",p[*cont].end.cidade);
        fscanf(arquivo,"estado:%s\n",p[*cont].end.estado);
        fscanf(arquivo,"preco:%f\n",&p[*cont].valor);
        fscanf(arquivo,"Situacao:%s\n",p[*cont].situacao);
        (*cont)++; 
      }
      fclose(arquivo);
}
void cadastrar(int *cont, cadastro *p){
       printf("Digite o tipo de imovel:");
       scanf(" %[^\n]s",p[*cont].tipo);
       printf("Digite o Nome da rua:");
       scanf(" %[^\n]s",p[*cont].end.nome_rua);
       printf("Digite o Nome do bairro:");
       scanf(" %[^\n]s",p[*cont].end.bairro);
       printf("Digite o Numero do imovel:");
       scanf(" %d",&p[*cont].end.numero);
       printf("Digite o Nome da cidade:");
       scanf(" %[^\n]s",p[*cont].end.cidade);
       printf("Digite o Estado(sigla):");
       scanf(" %[^\n]s",p[*cont].end.estado);
       printf("Digite o preco do imovel:");
       scanf(" %f",&p[*cont].valor);
       printf("Digite a situacao:");
       scanf(" %[^\n]s",p[*cont].situacao);
       (*cont)++;
}
void salvar_arquivo(int cont,cadastro *p){
      FILE *arquivo;
      arquivo=fopen("Imoveis.txt","a");
      if(arquivo==NULL){
        printf("Erro pra abri arquivo!!!");
        return;
      }
      fprintf(arquivo,"----Imovel %d----\n",cont);
      fprintf(arquivo,"Tipo do imovel:%s\n",p[cont].tipo);
      fprintf(arquivo,"Nome da rua:%s\n",p[cont].end.nome_rua);
      fprintf(arquivo,"Nome do bairro:%s\n",p[cont].end.bairro);
      fprintf(arquivo,"Numero do imovel:%d\n",p[cont].end.numero);
      fprintf(arquivo,"cidade:%s\n",p[cont].end.cidade);
      fprintf(arquivo,"estado:%s\n",p[cont].end.estado);
      fprintf(arquivo,"preco:%2.f\n",p[cont].valor);
      fprintf(arquivo,"Situacao:%s\n\n",p[cont].situacao);
      fclose(arquivo);
}
void imprimir(int cont, cadastro *p){
      printf("----Imovel %d----\n",cont);
      printf("Tipo do imovel:%s\n",p[cont].tipo);
      printf("Nome da rua:%s\n",p[cont].end.nome_rua);
      printf("Nome do bairro:%s\n",p[cont].end.bairro);
      printf("Numero do imovel:%d\n",p[cont].end.numero);
      printf("cidade:%s\n",p[cont].end.cidade);
      printf("estado:%s\n",p[cont].end.estado);
      printf("preco:%2.f\n",p[cont].valor);
      printf("Situacao:%s\n\n",p[cont].situacao);
}
void pesquisar_tipo(int cont, cadastro *p){
     char digitado[10];
     printf("Digite o tipo para pesquisar:");
     scanf(" %[^\n]s",digitado);
     int i;
     for(i=0;i<cont;i++){
       if(strcmp(digitado,p[i].tipo)==0){
          imprimir(i,p);
       }
     }
}
void pesquisar_situacao(int cont, cadastro *p){
     char digitado[10];
     printf("Digite a situacao para pesquisar:");
     scanf(" %[^\n]s",digitado);
     int i;
     for(i=0;i<cont;i++){
       if(strcmp(digitado,p[i].situacao)==0){
          imprimir(i,p);
       }
     }
}
void pesquisar_preco(int cont, cadastro *p){
     int Num,Num2,i;
     printf("Digite o preco Min:");
     scanf("%d",&Num);
     printf("Digite o preco Max:");
     scanf("%d",&Num2);
    for(i=0;i<cont;i++){
       if( (p[i].valor>=Num) && (p[i].valor<=Num2)){
          imprimir(i,p);
       }
     }
}
int main(){
    cadastro p[N];
    int cont=0,opcao;
    ler_arquivo(&cont,p);
    while(1){
         printf("Menu:\n1)Cadastrar Imovel\n2)Pesquisar por tipo\n3)aluguel\n4)pesquisar por faixa de preco\n5)Sair.\n");
         printf("R=");
         scanf("%d",&opcao);
         if(opcao==1){
           cadastrar(&cont,p);
           salvar_arquivo((cont-1),p);
         }
         if(opcao==2){
            pesquisar_tipo(cont,p);
         }
         if(opcao==3){
            pesquisar_situacao(cont,p);
         }
         if(opcao==4){
            pesquisar_preco(cont,p);
         }
         if(opcao==5){
            printf("Volte sempre!!!!\n");
            break;
         }
         else
         {
           printf("opcao invalida!!!!\n");
         }
         
    }

}
