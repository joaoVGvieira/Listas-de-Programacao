#include <stdio.h>
#include <stdlib.h>
typedef struct{
  int numero_cont;
  int  numero_clien;
  float saldo;
}contas;
void ler_arquivo(int *cont, contas *p){
      FILE *arquivo;
      arquivo=fopen("Contas.txt","r");
      if(arquivo==NULL){
          return 1;
      }
      while (!feof(arquivo))
      {
          fscanf(arquivo,"---Conta bancaria %d---\n",&(*cont));
          fscanf(arquivo,"Numero da conta=%d\n",&p[*cont].numero_cont);
          fscanf(arquivo,"Numero do cliente=%d\n",&p[*cont].numero_clien);
          fscanf(arquivo,"Saldo da conta=%f\n\n",&p[*cont].saldo);
          (*cont)++;
      }
       
}
void salvar_cont(int *cont,contas *p){
        printf("Digite o numero da conta:");
        scanf("%d",&p[*cont].numero_cont);
        printf("Digite o numero do cliente:");
        scanf("%d",&p[*cont].numero_clien);
        printf("Digite o valor que tem na conta:");
        scanf("%f",&p[*cont].saldo); 
        (*cont)++;
        return; 
}
void salvar_arquivo(int cont, contas *p){
    FILE *arquivo;
    arquivo=fopen("Contas.txt","a");
    if(arquivo==NULL){
        printf("Impossivel abrir um arquivo!!");
        return 1;
    }
    fprintf(arquivo,"---Conta bancaria %d---\n",cont);
    fprintf(arquivo,"Numero da conta=%d\n",p[cont].numero_cont);
    fprintf(arquivo,"Numero do cliente=%d\n",p[cont].numero_clien);
    fprintf(arquivo,"Saldo da conta=%2.f\n\n",p[cont].saldo);
    fclose(arquivo);
}
void sacar(int cont,contas *p){
    int i,conta,num_cliente;
    int contador=0;
    float valor,novo_saldo;
    printf("Digite uma conta para sacar:");
    scanf("%d",&conta);
    printf("Digite o numero do cliente:");
    scanf("%d",&num_cliente);
    printf("Digite o valor do saque:");
    scanf("%f",&valor);
    for(i=0;i<cont;i++){
           if(conta==p[i].numero_cont){
                 contador++;
                 novo_saldo=(p[i].saldo-valor);
                 if(novo_saldo<0){
                     printf("Saldo Insuficiente!!!!\n");
                 }
                 else{
                     printf("Saque Realizado!!!\nSeu novo saldo eh %2.f!!!\n",novo_saldo);
                     p[i].saldo=novo_saldo;
                     salvar_novo_saldo(p,cont);
                     
                }
           }
    }       
    if(contador==0){
        printf("Conta nao encontrada!!!\n");
    }
       
}
void salvar_novo_saldo(contas *p, int cont){
    FILE *arquivo;
    int i;
    arquivo=fopen("Contas.txt","w");
    if(arquivo==NULL){
        printf("Impossivel abrir um arquivo!!");
        return 1;
    }
    for(i=0;i<cont;i++){
        fprintf(arquivo,"---Conta bancaria %d---\n",i);
        fprintf(arquivo,"Numero da conta=%d\n",p[i].numero_cont);
        fprintf(arquivo,"Numero do cliente=%d\n",p[i].numero_clien);
        fprintf(arquivo,"Saldo da conta=%2.f\n\n",p[i].saldo);
    }
   
    fclose(arquivo);
    
}
int main(){
    int N,opcao,digitado,cont=0;
    printf("Digite o numero de contas que vao ser cadastradas:");
    scanf("%d",&N);
    contas p[N];
    ler_arquivo(&cont,p);
    while (1)
    {
        printf("Menu:\n1)Salvar cliente\n2)realizar saque\n3)Digite -1 para sair\n");
        printf("R=");
        scanf("%d",&opcao);
        if(opcao==1){
              salvar_cont(&cont,p);
              salvar_arquivo(cont-1,p);
        }
        else if(opcao==2){
              sacar(cont,p);
        }
        else if(opcao==-1){
            printf("Volte sempre!!!!\n");
            break;
        }
        else{
            printf("Opcao invalida!!!!\n\n");
        }
    }  
}
