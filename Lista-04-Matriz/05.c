include "stdlib.h"
#include "stdio.h"
int main(){
    int N=3,M=5;
    int matA[N][M];
    int matB[N][M];
    int matS[N][M];
    int matD[N][M];
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("Matriz A[%d][%d]:",i,j);
            scanf("%d",&matA[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("Matriz B[%d][%d]:",i,j);
            scanf("%d",&matB[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("Matriz S[%d][%d]:",i,j);
            matS[i][j]=(matA[i][j]+matB[i][j]);
            printf("%d\n",matS[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("Matriz D[%d][%d]:",i,j);
            matD[i][j]=(matA[i][j]-matB[i][j]);
            printf("%d\n",matD[i][j]);
        }
    }
}
