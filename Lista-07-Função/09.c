#include<stdio.h>
typedef struct
{
    char sexo[2];
    char cor_dos_olhos[9];
    char cor_do_cabelo[9];
    int  idade;
}dados;
void pessoas(dados *pessoa,int quantidade)
{  
    int i;
    for(i=0;i<quantidade;i++){
        printf("Qual o sexo(F or M):");
        scanf(" %[^\n]s",pessoa[i].sexo);
        printf("Qual as cor dos olhos:");
        scanf(" %[^\n]s",pessoa[i].cor_dos_olhos);
        printf("Qual as cor dos cabelos:");
        scanf(" %[^\n]s",pessoa[i].cor_do_cabelo);
        printf("Qual a idade:");
        scanf(" %d",&pessoa[i].idade);
    }
}
int main(){
    int i;
    dados pessoa[50];
    pessoas(pessoa,50);
}
