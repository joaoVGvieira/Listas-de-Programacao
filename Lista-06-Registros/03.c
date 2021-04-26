#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char titulo[30];
    char autor[15];
    int ano;
}livros;
int main(){
    int N,i;
    printf("Quantos livros?");
    scanf("%d",&N);
    livros p[N];
    for(i=0;i<N;i++){
        printf("Qual o titulo do livro:");
        scanf("  %[^\n]s",p[i].titulo);
        printf("Qual o nome do autor:");
        scanf(" %[^\n]s",p[i].autor);
        printf("Qual ano foi publicado:");
        scanf("%d",&p[i].ano);
    }
    char titulo[30];
    printf("Digite o livro pra consultar?");
    scanf(" %[^\n]s",titulo);
    printf("Resultao da consulta: %s\n",titulo);
    
    for(i=0;i<N;i++){
        if(strstr(p[i].titulo,titulo)!=NULL)
            printf("Resultado(%d)=%s\n",(i+1),p[i].titulo);
    }
}    
