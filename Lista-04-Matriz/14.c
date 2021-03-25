#include "stdio.h"
int main() {
    int C, D, i, j;
    printf("Digite o quantas linha de a matriz A:");
    scanf("%d", &C);
    printf("Digite o quantas colunas de a matriz A:");
    scanf("%d", &D);
    int E, F;
    printf("Digite o quantas linha de a matriz B:");
    scanf("%d", &E);
    printf("Digite o quantas colunas de a matriz B:");
    scanf("%d", &F);
    int matrizA[C][D];
    int matrizB[E][F];
    int matrizC[C][F];
    if (D == E) {
        for (i = 0; i < C; i++) {
            for (j = 0; j < D; j++) {
                printf("MatrizA[%d][%d]=",i,j);
                scanf("%d",&matrizA[i][j]);
            }
        }
        for (i = 0; i < C; i++) {
            for (j = 0; j < D; j++) {
                printf("[%d]",matrizA[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < E; i++) {
            for (j = 0; j < F; j++) {
                printf("MatrizB[%d][%d]=", i, j);
                scanf("%d",&matrizB[i][j]);
            }
        }
        for (i = 0; i < C; i++) {
            for (j = 0; j < D; j++) {
                printf("[%d]", matrizB[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        int k,aux=0;
        for (i = 0; i < D; i++) {
             for (j = 0; j < E; j++) {
                   matrizC[i][j]=0;
                   for(k=0;k<E;k++){
                       aux+=matrizA[i][k]*matrizB[k][j];
                }
             matrizC[i][j]=aux;
             aux=0;
            }

        }
        for (i = 0; i < C; i++) {
            for (j = 0; j < D; j++) {
                printf("[%d]", matrizC[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Nao eh posivel multiplicar");
    }
}
