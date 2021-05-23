#include <stdio.h>
void superior(int N,int m[][N]){
        int i,j,soma=0;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
             if(i>j){
                 soma+=m[i][j];
             }
        }
            }
        if (soma==0)
        {  
            printf("eh superior!\n");
            return 1;
        }
        else{
            printf("Nao eh superio!\n");
            return 0;
        }
            
}
int main(){
    int N;
    printf("Qual o tamanho de N(para matriz NxN):");
    scanf("%d",&N);
    int i,j;
    int matriz[N][N];
    for(i=0;i<N;i++){
       for(j=0;j<N;j++){
         printf("Matrz[%d][%d]:",i,j);  
         scanf("%d",&matriz[i][j]);
       }
    }
    superior(N,*matriz);
}
