#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
typedef struct
{
    char rua[32];
    int numero;
    char complemento[16];
    char bairro[32];
    char cep[10];
    char cidade[64];
    char estado[3];
    char pais[32];

} endereco;

typedef struct
{
    char ddd[5];
    char numero[11];
} telefone;

typedef struct
{
    int dia;
    int mes;
    int ano;

} data;
typedef struct
{
    char nome[32];
    char email[32];
    endereco end;
    telefone tel;
    data nascimento;
    char observacoes[64];
} contato;
void mes_aniversario(contato *agenda, int quant_contatos_agenda)
{
    int i, mes_pesquisa;
    printf("\nDigite o mes de pesquisa: ");
    scanf("%d",&mes_pesquisa);
    for (i = 0; i < quant_contatos_agenda; i++)
    {
        if (mes_pesquisa == agenda[i].nascimento.mes)
        {
            imprime(agenda, i);
        }
    }
}
int main(){
   contato agenda[N];
   int n,quatidade=0;
   while (1)
    {
        printf("-->(1)Inserir um contato\n-->(2)Pesquisar um contato por data\n-->(3)pesquisar um contato por nome\n-->(4)Imprimir Agenda\n-->(5)Sair\n-->(6)Salvar\nSua opcao:");
        scanf("%d",&n);
         if(n==5){
            break;
        }
        else if(n==4){
          imprime_tudo(agenda,quatidade);
           
        }
        else if(n==3){
           comeco(agenda,quatidade);
        }
        else if(n==2){
          mes_aniversario(agenda,quatidade);
        }
        else if(n==1){
           inserir(agenda,&quatidade);
        }
        else if(n==6){
           salva_agenda(agenda,quatidade);
        }
    }    
}
