#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main(){
    int N=5;
    float mat[N][N];
    float mat2[N][N];
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
          printf("Posicao[%d][%d]=",i,j);
          scanf("%f",&mat[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++) {
            mat2[i][j] = pow(mat[i][j], 3);
            printf("Matriz2 [%d][%d]= %2.2f\n", i, j, mat2[i][j]);
        }
    }
}
