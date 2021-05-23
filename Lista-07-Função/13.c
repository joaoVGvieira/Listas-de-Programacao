#include <stdio.h>
#include <string.h>
typedef struct{
  char rua[20];
  int numero;
  char complemento[20];
  char bairro[20],cep[12];
  char cidade[20],estado[20];
  char pais[10];
}endereco;
typedef struct 
{
    int dia;
    int mes;
    int ano;
}aniver;
//a
typedef struct{
   char nome[20];
   char email[10];
   endereco end;
   char telefone[15];
   aniver data;
   char observacao[20];
}cadastro;
void inserir_pessoa(cadastro *agenda, int *quantidade){
     printf("Digite o nome da pessoa:");
    scanf(" %[^\n]s",agenda[*quantidade].nome);
    printf("Digite o imail:");
    scanf(" %[^\n]s",agenda[*quantidade].email);
    printf("Endereco:\n");
    printf("Digite o nome da rua:");
    scanf(" %[^\n]s",agenda[*quantidade].end.rua);
    printf("Digite o numero:");
    scanf("%d",&agenda[*quantidade].end.numero);
    printf("Digite o complemento:");
    scanf(" %[^\n]s",agenda[*quantidade].end.complemento);
    printf("Digite o bairro:");
    scanf(" %[^\n]s",agenda[*quantidade].end.bairro);
    printf("Digite o cep:");
    scanf(" %[^\n]s",agenda[*quantidade].end.cep);
    printf("Digite a cidade:");
    scanf(" %[^\n]s",agenda[*quantidade].end.cidade);
    printf("Digite o estado:");
    scanf(" %[^\n]s",agenda[*quantidade].end.estado);
    printf("Digite o pais:");
    scanf(" %[^\n]s",agenda[*quantidade].end.pais);
    printf("Digite o telefone:");
    scanf(" %[^\n]s",agenda[*quantidade].telefone);
    printf("Data de aniversario:\n");
    printf("Dia:");
    scanf("%d",&agenda[*quantidade].data.dia);
    printf("Mes:");
    scanf("%d",&agenda[*quantidade].data.mes);
    printf("Ano:");
    scanf("%d",&agenda[*quantidade].data.ano);
    printf("Observacao:");
    scanf(" %[^\n]s",agenda[*quantidade].observacao);
   (*quantidade)++;
}
int comeco(char *s1, char *s2){
    int i,mesmo_começo=1,tamanho_menor;
    if(strlen(s1)<=strlen(s2))
        tamanho_menor=strlen(s1);
    else
        tamanho_menor=strlen(s2);
    
    for(i=0;i<tamanho_menor;i++){
        if(s1[i]!=s2[i]){
            mesmo_começo=0;
            break;
        }
    }    
}
void imprime_pessoa(cadastro *agenda, int cont){
    printf("O nome %s\n",agenda[cont].nome);
    printf("email:%s\n",agenda[cont].email);
    printf("rua:%s\n",agenda[cont].end.rua);
    printf("numero:%d\n",agenda[cont].end.numero);
    printf("complemento:%s\n",agenda[cont].end.complemento);
    printf("bairro:%s\n",agenda[cont].end.bairro);
    printf("cep:%s\n",agenda[cont].end.cep);
    printf("Cidade:%s",agenda[cont].end.cidade);
    printf("Estado:%s\n",agenda[cont].end.estado);
    printf("pais:%s\n",agenda[cont].end.pais);
    printf("telefone:%s\n",agenda[cont].telefone);
    printf("Data de nascimento:%d/%d/%d\n",agenda[cont].data.dia,agenda[cont].data.mes,agenda[cont].data.ano);
    printf("Observacao:%s\n",agenda[cont].observacao);
    printf("\n\n");
}
void imprimir(cadastro *agenda, int cont){
       int i;
       for(i=0;i<cont;i++){
            printf("O nome %s\n",agenda[cont].nome);
            printf("email:%s\n",agenda[cont].email);
            printf("rua:%s\n",agenda[cont].end.rua);
            printf("numero:%d\n",agenda[cont].end.numero);
            printf("complemento:%s\n",agenda[cont].end.complemento);
            printf("bairro:%s\n",agenda[cont].end.bairro);
            printf("cep:%s\n",agenda[cont].end.cep);
            printf("Cidade:%s",agenda[cont].end.cidade);
            printf("Estado:%s\n",agenda[cont].end.estado);
            printf("pais:%s\n",agenda[cont].end.pais);
            printf("telefone:%s\n",agenda[cont].telefone);
            printf("Data de nascimento:%d/%d/%d\n",agenda[cont].data.dia,agenda[cont].data.mes,agenda[cont].data.ano);
            printf("Observacao:%s\n",agenda[cont].observacao);
            printf("\n\n");
        }
}
void pesquisa_pessoa(cadastro *agenda, int quantidade){
    int i;
    char nome;
    printf("digite um nome:");
    scanf(" %[^\n]s",nome);
    for(i=0;i<quantidade;i++){
        if(comeco(nome,agenda[i].nome))
           imprime_pessoa(agenda,i);    
            
    }        
}
void pesquisa_data(cadastro *agenda, int quantidade,int mes){
    int i;
    for(i=0;i<quantidade;i++){
        if(mes==agenda[i].data.mes)
           imprime_pessoa(agenda,i);    
            
    }        
}
int main(){
    int opcao,quantidade=0;
    cadastro agenda[100]={0};
    while (1)
    {
        printf("1) Inserir uma pessoa na agenda\n");
        printf("2)Pesquisar por um nome\n");
        printf("3)buscar por mes de aniversario\n");
        printf("4)Imprimir a agenda\n");
        printf("5)Sair\n");
        printf("Digite qual opcao que deseja:");
        scanf("%d",&opcao);
         if (opcao==5)
        {
            printf("Agenda fechada\n");
            break;
        }
        else if(opcao==1){
            inserir_pessoa(agenda,&quantidade);
        }
        else if(opcao==2){
            pesquisa_pessoa(agenda,quantidade);
            
        }
        else if(opcao==3){
            int mes;
            printf("digite um mes:");
            scanf(" %d",&mes);
            pesquisa_data(agenda,quantidade,mes);
            
        }
        else if(opcao==4){
            imprime(agenda,quantidade);
        }
        else
        {
            printf("Opcao invalida!!\n\n");
        }
    }    
        
}
