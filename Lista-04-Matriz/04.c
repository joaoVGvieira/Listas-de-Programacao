#include "stdio.h"
#include "stdlib.h"
int main(){
    int N=6,M=3,i,j;
    int mat[N][M];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int maior=mat[0][0],menor=mat[0][0];
    int indiceMaiorI=0,indiceMaiorJ=0,indiceMenorI=0,indiceMenorJ=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if (mat[i][j]>maior){
                maior=mat[i][j];
                indiceMaiorI=i;
                indiceMaiorJ=j;
            }
            if (mat[i][j]<menor){
                menor=mat[i][j];
                indiceMenorI=i;
                indiceMenorJ=j;
            }
        }
    }
    printf("O maior numero digitado e sua posicao: %d[%d][%d]\n",maior,indiceMaiorI,indiceMaiorJ);
    printf("O menor numero digitado e sua posicao: %d[%d][%d]",menor,indiceMenorI,indiceMenorJ);



}
