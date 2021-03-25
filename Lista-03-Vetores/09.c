#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,i;
    printf("Digite o numero n:");
    scanf("%d",&N);
    float A[N];
    float B[N];
    float C[N];
    float D[N];
    for(i=0;i<N;i++){
        printf("A[%d]=",i);
        scanf("%f",&A[i]);
    }
    for(i=0;i<N;i++){
        printf("B[%d]=",i);
        scanf("%f",&B[i]);
    }
     for(i=0;i<N;i++){
        if(A[i]>B[i]){
            C[i]=A[i];
        }else{
            C[i]=B[i];
        }
        printf("C[%d]=%2.2f ",i,C[i]);
    }
    printf("\n");
    for(i=0;i<N;i++){
        D[i]=((A[i]+B[i])/2);
        printf("D[%d]=%2.2f ",i,D[i]);
    }
} 
