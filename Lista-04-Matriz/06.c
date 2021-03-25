#include "stdio.h"
int main(){
    int N=5;
    int matriz[N][N];
    int i,j,soma=0;
    float media;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("matriz[%d][%d]=",i,j);
            scanf("%d",&matriz[i][j]);
            if(i==j){
                soma+=matriz[i][j];
            }
        }
    }
    media=((float)soma/(float)N);
    printf("A media da diagonal principal eh %2.2f",media);
