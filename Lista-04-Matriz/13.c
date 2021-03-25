#include "stdio.h"
int main(){
    int N,i,j,c,l,aux;
    printf("Digite o numero N:");
    scanf("%d",&N);
    int Matriz[N][N];
    int matriz2[N][N];
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            printf("Matriz[%d][%d]=",i,j);
            scanf("%d",&Matriz[i][j]);
        }
    }
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            if(i!=j){
                matriz2[i][j]=Matriz[j][i];
            }else{
                matriz2[i][j]=Matriz[i][j];
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf(" [%d] ", matriz2[i][j]);
        }
        printf("\n");
    }
    int cont=1;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            if (matriz2[i][j]!=Matriz[i][j]){
                cont=0;
            }
        }
    }
    if(cont==1){
        printf("Eh simetrica");
    }else{
        printf("Nao eh simetrica");
    }
}
