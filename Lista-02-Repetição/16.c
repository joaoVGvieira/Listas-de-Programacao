#include <stdio.h>
#include <stdlib.h>
int main(){
    int mult,N,i;
    printf("Digite um numero N:");
    scanf("%d",&N);
    i=0;
    while (N!=i){
        i+=1;
        mult=N*i;
        printf("%d*%d = %d\n",N,i,mult);
    }
}
