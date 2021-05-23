#include <stdio.h>
#include <string.h>
#define N 100
typedef struct 
{
    char titulo[31];
    char autor[16];
    int  ano;
}livro;
void listar(livro *livros, int quantidade){
       int i;
       for(i=0;i<quantidade;i++){
           printf("\n----Livro %d----\n\n",(i+1));
           printf("Titulo:%s\nAutor:%s\nAno:%d\n\n", livros[i].titulo, livros[i].autor, livros[i].ano);
           }
}
int compara_inicio(char *s1, char *s2){
    int i, mesmo_inicio = 1, tamanho_menor;
	if (strlen(s1) <= strlen(s2))
	{
		tamanho_menor = strlen(s1);
	}
	else
	{
		tamanho_menor = strlen(s2);
	}
	for (i = 0; i < tamanho_menor; i++)
	{
		if (s1[i] != s2[i])
		{
			mesmo_inicio = 0;
			break;
		}
	}
	return mesmo_inicio;        
}
void pesquisar(livro *livro, int quatidade ){
         int i;
         char palavra[30];
         printf("Digite uma palavra para pesquisar:");
         scanf(" %[^\n]s",palavra);
         for(i=0;i<quatidade;i++){
             if(compara_inicio(palavra,livro[i].titulo)){
                 printf("\n----Livro: %d----\n", i + 1);
			     printf("Titulo: %s\nAutor:%s\nAno: %d\n\n",livro[i].titulo, livro[i].autor, livro[i].ano);
		}
             }

}
void inserir(livro *livro, int *quantidade){
    printf("Digite o titulo do livro: ");
	scanf(" %[^\n]s", livro[*quantidade].titulo);
	printf("Digite o autor do livro: ");
	scanf(" %[^\n]s", livro[*quantidade].autor);
	printf("Digite o ano de publicacao do livro: ");
	scanf("%d", &livro[*quantidade].ano);
	(*quantidade)++;
}
void salva(livro *livro, int quantidade)
{
	FILE *arquivo;
	int i;
	printf("\n Salvar livros\n");
	if ((arquivo = fopen("biblioteca.txt", "a")) == NULL)
	{
		printf("Nao foi possivel criar o arquivo! \n");
	}
	else
	{
		for (i = 0; i < quantidade; i++)
		{
			fprintf(arquivo, "%s\n", livro[i].titulo);
			fprintf(arquivo, "%s\n", livro[i].autor);
			fprintf(arquivo, "%d\n", livro[i].ano);
		}
	}
	fclose(arquivo);
}
int main(){
    int n;
    int quatidade=0;;
    FILE *biblioteca;
    char titulo[31];
    char autor[16];
    int  ano;
    livro livros[N];
    biblioteca=fopen("biblioteca.txt","r");
    if(biblioteca==NULL){
        printf("Erro para abrir o arquivo!!!!");
        return 1;
    }
    while (!feof(biblioteca))
    {
        fscanf(biblioteca," %[^\n]s\n",titulo);
        fscanf(biblioteca," %[^\n]s\n",autor);
        fscanf(biblioteca," %d\n",&ano);
        strcpy(livros[quatidade].titulo,titulo);
        strcpy(livros[quatidade].autor,autor);
        livros[quatidade].ano=ano;
        quatidade++;
    }
    fclose(biblioteca);
   
    while (1)
    {
        printf("-->(1)Inserir um livro:\n-->(2)Pesquisar um livro:\n-->(3)Listas todos os  livros:\n-->(4)Sair\n-->(5)Salvar\nSua opcao:");
        scanf("%d",&n);
        if(n==4){
            break;
        }
        else if(n==3){
           listar(livros,quatidade);
        }
        else if(n==2){
           pesquisar(livros,quatidade);
        }
        else if(n==1){
           inserir(livros,&quatidade);
        }
        else if(n==5){
           salva(livros,quatidade);
        }
    }
}
