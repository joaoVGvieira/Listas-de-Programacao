#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,N,mult;
    printf("Digite um numero N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        mult=N*i;
        printf("%d*%d=%d\n",i,N,mult);
    }
}
