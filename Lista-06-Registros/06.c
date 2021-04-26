#include <stdio.h>
#include <string.h>
#define N 5
typedef struct{
  char rua[20],bairro[20],cidade[20],estado[20];
  char cep[12];
}endereco;
typedef struct{
   char nome[20];
   endereco end;
   float salario;
   char  indentidade[15];
   char cpf[15];
   char civil[15];
   char telefone[15];
   int idade;
   char sexo[1];
}cadastro;
int main(){
    int maiorid=0;
    int maiorco=0;
    //a
    cadastro p[N];
    //b
    int i;
    for(i=0;i<N;i++){
        printf("Casdastro %d:\n",(i+1));
        printf("Qual o nome:");
        scanf(" %[^\n]s",p[i].nome);
        printf("Endereco:\n");
        printf("Qual o nome do bairro:");
        scanf(" %[^\n]s",p[i].end.bairro);
        printf("Qual o nome da rua:");
        scanf(" %[^\n]s",p[i].end.rua);  
        printf("Qual o nome da cidade:");
        scanf(" %[^\n]s",p[i].end.cidade);
        printf("Qual o nome do estado:");
        scanf(" %[^\n]s",p[i].end.estado);
        printf("Qual o cep da cidade:");
        scanf(" %[^\n]s",p[i].end.cep);
        printf("Qual o salario:");
        scanf("%f",&p[i].salario);
        printf("Qual a sua identidade:");
        scanf(" %[^\n]s",p[i].indentidade);
        printf("Qual o seu CPF:");
        scanf(" %[^\n]s",p[i].cpf);
        printf("Qual o seu estado civil:");
        scanf(" %[^\n]s",p[i].civil);
        printf("Qual o seu telefone:");
        scanf(" %[^\n]s",p[i].telefone);
        printf("Qual a sua idade:");
        scanf("%d",&p[i].idade);
        printf("Qual o seu sexo(F ou M):");
        scanf(" %[^\n]s",p[i].sexo);    
    }
    maiorid=p[0].idade;
    //c
    for(i=0;i<N;i++){ 
        if(maiorid<p[i].idade){
            maiorid=p[i].idade;
            maiorco=i;;
        }
    }
    printf("A pessoa com a maior idade eh:\n");
    printf("%s com a identidade %s e sua idade %d\n",p[maiorco].nome,p[maiorco].indentidade,maiorid);
    //d
    for(i=0;i<N;i++){
        if(p[i].sexo[0]=='M'){
            printf("%s\n",p[i].nome);
        }
    }
    //e
    printf("pessoas com salario acima de 1000:\n");
     for(i=0;i<N;i++){
        if(p[i].salario>1000){
            printf("%s\n",p[i].nome);
        }
    }
    //f
    char indem_digitada[30];
    printf("Qual a identidade da pessoa que voce que encontrar:");
    scanf(" %[^\n]s",indem_digitada);
     for(i=0;i<N;i++){
        if(strcmp(p[i].indentidade,indem_digitada)==0){
            printf("O nome %s\n",p[i].nome);
            printf("rua:%s\n",p[i].end.rua);
            printf("Cidade:%s\n",p[i].end.cidade);
            printf("Estado:%s\n",p[i].end.estado);
            printf("cep:%s\n",p[i].end.cep);
            printf("Salario:%f\n",p[i].salario);
            printf("identidade:%s\n",p[i].indentidade);
            printf("CPF:%s\n",p[i].cpf);
            printf("estado civil:%s\n",p[i].civil);
            printf("telefone:%s\n",p[i].telefone);
            printf("idade:%d\n",p[i].idade);
            printf("sexo(F ou M):\n",p[0].sexo);
            printf("\n");
        }else{
            printf("Nao ah essa indentidade no sistema\n");
        }
    }    
    //g
    char cidade_digitada[30];
    printf("Qual a cidade da pessoa que voce que encontrar:");
    scanf(" %[^\n]s",cidade_digitada);
     for(i=0;i<N;i++){
        if(strcmp(p[i].end.cidade,cidade_digitada)==0){
            printf("O nome %s\n",p[i].nome);
            printf("rua:%s\n",p[i].end.rua);
            printf("Cidade:%s\n",p[i].end.cidade);
            printf("Estado:%s\n",p[i].end.estado);
            printf("cep:%s\n",p[i].end.cep);
            printf("Salario:%2.f\n",p[i].salario);
            printf("identidade:%s\n",p[i].indentidade);
            printf("CPF:%s",p[i].cpf);
            printf("estado civil:%s\n",p[i].civil);
            printf("telefone:%s\n",p[i].telefone);
            printf("idade:%d\n",p[i].idade);
            printf("sexo(F ou M):%s\n",p[0].sexo);
            printf("\n\n");
        }
    }
}    
