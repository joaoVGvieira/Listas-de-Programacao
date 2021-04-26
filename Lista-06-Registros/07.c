#include <stdio.h>
#include <string.h>
//a
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

typedef struct{
   char nome[20];
   char email[10];
   endereco end;
   char telefone[15];
   aniver data;
   char observacao[20];
}cadastro;
int main(){
    //b
    int opcao,i;
    int cont=0;
    cadastro agenda[100]={0};
    char nome_digitado[15];
    int mes_digitado;
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
        }else if(opcao==1){
            cont++;
            for(i=0;i<1;i++){
                printf("Digite o nome da pessoa:");
                scanf(" %[^\n]s",agenda[i].nome);
                printf("Digite o imail:");
                scanf(" %[^\n]s",agenda[i].email);
                printf("Endereco:\n");
                printf("Digite o nome da rua:");
                scanf(" %[^\n]s",agenda[i].end.rua);
                printf("Digite o numero:");
                scanf("%d",&agenda[i].end.numero);
                printf("Digite o complemento:");
                scanf(" %[^\n]s",agenda[i].end.complemento);
                printf("Digite o bairro:");
                scanf(" %[^\n]s",agenda[i].end.bairro);
                printf("Digite o cep:");
                scanf(" %[^\n]s",agenda[i].end.cep);
                printf("Digite a cidade:");
                scanf(" %[^\n]s",agenda[i].end.cidade);
                printf("Digite o estado:");
                scanf(" %[^\n]s",agenda[i].end.estado);
                printf("Digite o pais:");
                scanf(" %[^\n]s",agenda[i].end.pais);
                printf("Digite o telefone:");
                scanf(" %[^\n]s",agenda[i].telefone);
                printf("Data de aniversario:\n");
                printf("Dia:");
                scanf("%d",&agenda[i].data.dia);
                printf("Mes:");
                scanf("%d",&agenda[i].data.mes);
                printf("Ano:");
                scanf("%d",&agenda[i].data.ano);
                printf("Observacao:");
                scanf(" %[^\n]s",agenda[i].observacao);
            }
        }    
        else if(opcao==2){
           printf("Digite um nome pra procurar na agenda:");
           scanf(" %[^\n]s",nome_digitado);
           for(i=0;i<cont;i++){
                if(strcmp(agenda[i].nome,nome_digitado)==0){
                    printf("O nome %s\n",agenda[i].nome);
                    printf("email:%s\n",agenda[i].email);
                    printf("rua:%s\n",agenda[i].end.rua);
                    printf("numero:%d\n",agenda[i].end.numero);
                    printf("complemento:%s\n",agenda[i].end.complemento);
                    printf("bairro:%s\n",agenda[i].end.bairro);
                    printf("cep:%s\n",agenda[i].end.cep);
                    printf("Cidade:%s",agenda[i].end.cidade);
                    printf("Estado:%s\n",agenda[i].end.estado);
                    printf("pais:%s\n",agenda[i].end.pais);
                    printf("telefone:%s\n",agenda[i].telefone);
                    printf("Data de nascimento:%d/%d/%d\n",agenda[i].data.dia,agenda[i].data.mes,agenda[i].data.ano);
                    printf("Observacao:%s\n",agenda[i].observacao);
                    printf("\n\n");
                }
           }
        }
        else  if(opcao==3){
            printf("Digite um mes para pesquisar na agenda:");
            scanf("%d",&mes_digitado);
            for(i=0;i<cont;i++){
                if(agenda[i].data.mes==mes_digitado){
                    printf("O nome %s\n",agenda[i].nome);
                    printf("email:%s\n",agenda[i].email);
                    printf("rua:%s\n",agenda[i].end.rua);
                    printf("numero:%d\n",agenda[i].end.numero);
                    printf("complemento:%s\n",agenda[i].end.complemento);
                    printf("bairro:%s\n",agenda[i].end.bairro);
                    printf("cep:%s\n",agenda[i].end.cep);
                    printf("Cidade:%s",agenda[i].end.cidade);
                    printf("Estado:%s\n",agenda[i].end.estado);
                    printf("pais:%s\n",agenda[i].end.pais);
                    printf("telefone:%s\n",agenda[i].telefone);
                    printf("Data de nascimento:%d/%d/%d\n",agenda[i].data.dia,agenda[i].data.mes,agenda[i].data.ano);
                    printf("Observacao:%s\n",agenda[i].observacao);
                    printf("\n\n"); 
                }
            }    
        }else if(opcao==4){
            for (i = 0; i <cont; i++)
            {
                printf("O nome %s\n",agenda[i].nome);
                printf("email:%s\n",agenda[i].email);
                printf("rua:%s\n",agenda[i].end.rua);
                printf("numero:%d\n",agenda[i].end.numero);
                printf("complemento:%s\n",agenda[i].end.complemento);
                printf("bairro:%s\n",agenda[i].end.bairro);
                printf("cep:%s\n",agenda[i].end.cep);
                printf("Cidade:%s",agenda[i].end.cidade);
                printf("Estado:%s\n",agenda[i].end.estado);
                printf("pais:%s\n",agenda[i].end.pais);
                printf("telefone:%s\n",agenda[i].telefone);
                printf("Data de nascimento:%d/%d/%d\n",agenda[i].data.dia,agenda[i].data.mes,agenda[i].data.ano);
                printf("Observacao:%s\n",agenda[i].observacao);
                printf("\n\n"); 
                
            }
            
        }
        else{
            printf("----opcao invalida!!----\n");
        }    

    }
    
}
