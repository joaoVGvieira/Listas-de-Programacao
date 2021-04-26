#include <stdio.h>
typedef struct pessoa p;
struct pessoa{
    char  nome[50],endereco[50];
    long long int   telefone;
};
int main(){
    int N=2;
    p p[N];
    int i;
    for(i=0;i<N;i++){
        fflush(stdin);
        printf("Qual o nome da pessoa:\n");
        gets( p[i].nome);
        fflush(stdin);
        printf("Qual a rua do seu endereço:\n");
        gets( p[i].endereco);
        fflush(stdin);
        printf("Qual o seu numero de telefone:\n");
        scanf("%lld",&p[i].telefone);
    }
    for(i=0;i<N;i++){
       printf("A pessoa com o nome %s e seu numero de telefone eh %lld\n",p[i].nome,p[i].telefone);
    }
}
