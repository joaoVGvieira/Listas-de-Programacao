#include <stdio.h>
#include <string.h>
typedef struct Notas notas;
struct Notas{
    char nome[50];
    int   matricula;
    float mediaf;
};
int main(){
    int N=2;
    int i;
    int i2=0,i3=0;
    notas alunos[N], alunos_aprovados[N],alunos_reprovados[N];
    for (i = 0; i < N; i++)
    {
        printf("Qual o nome do aluno:");
        scanf (" %[^\n]s",alunos[i].nome);
        printf("Qual a matricula:");
        scanf("%d",&alunos[i].matricula);
        printf("Qual  a media do aluno:");
        scanf(" %f",&alunos[i].mediaf);     
    }
    int aprovado=0,reprovado=0;
    for(i=0;i<N;i++){
        if(alunos[i].mediaf>=5){
            strcpy(alunos_aprovados[i2].nome,alunos[i].nome);
            alunos_aprovados[i2].matricula=alunos[i].matricula;
            alunos_aprovados[i2].mediaf=alunos[i].mediaf;
            i2++;
            aprovado++;

        }
        else{
            strcpy(alunos_reprovados[i3].nome,alunos[i].nome);
            alunos_reprovados[i3].matricula=alunos[i].matricula;
            alunos_reprovados[i3].mediaf=alunos[i].mediaf;
            i3++;
            reprovado++;

        }
    }
    printf("\n-------------Aprovados------------\n");
    for(i=0;i<aprovado;i++){
        printf("O aluno %s com a matricula %d foi aprovado com a media de %.2f\n",
        alunos_aprovados[i].nome,alunos_aprovados[i].matricula,alunos_aprovados[i].mediaf);
    }
    printf("\n-------------Reprovados------------\n");
    for(i=0;i<reprovado;i++){
        printf("O aluno %s com a matricula %d foi reprovado com a media de %.2f\n",
        alunos_reprovados[i].nome,alunos_reprovados[i].matricula,alunos_reprovados[i].mediaf);
    }
}
