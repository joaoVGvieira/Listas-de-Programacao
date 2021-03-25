#include "stdio.h"
int main() {
    int N = 10;
    int Matriz[N][N];
    int i, j, c,d,e;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Matriz[%d][%d]=", i, j);
            scanf("%d",&Matriz[i][j]);

        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }
    //Trocando linha 2 por linha 8
    for(j=0;j<N;j++){
        c=Matriz[1][j];
        Matriz[1][j]=Matriz[7][j];
        Matriz[7][j]=c;
    }
    //Trocando coluna 4 por linha 10
    for(i=0;i<N;i++){
        d=Matriz[i][3];
        Matriz[i][3]=Matriz[i][9];
        Matriz[i][9]=d;
    }
    printf("\n\n");
    //trocando as diagonais
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if (i==j) {
                e = Matriz[i][j];
                Matriz[i][j] =Matriz[i][(N - 1) - i];
                Matriz[i][(N - 1) - i] =e;
            }
        }
    }
    printf("\n\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf(" [%d] ", Matriz[i][j]);
        }
        printf("\n");
    }
}
