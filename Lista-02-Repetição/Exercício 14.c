#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,i;
    float E;
    printf("Digite um numero N:");
    scanf("%d",&N);
    i=0;
    E=0;
    printf("E = ");
    while(i!=N){
        i+=1;
        E+=1/(float)i;
        printf("1/%d + ",i);
    }
    printf("= %2.2f",E);
}

