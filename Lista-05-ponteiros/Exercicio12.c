#include <stdlib.h>
#include <stdio.h>
int main(){
    int N=100;
    int i,j,*p=NULL;
    int mat[N][N];
    for(i=0;i<N;i++){  
        for(j=0;j<N;j++){
            p=&mat[i][j];
            *p=0;
        }
    }
    int cont=1;
    for(i=0;i<N;i++){  
        for(j=0;j<N;j++){
            p=&mat[i][j];
            *p=cont;
             cont++;
        }
    }
    for(i=0;i<N;i++){  
        for(j=0;j<N;j++){
            printf("%d\n",mat[i][j]); 
        }
    }

}