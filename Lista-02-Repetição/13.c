#include <stdlib.h>
#include <stdio.h>
int main(){
    float E;
    int N,i;
    printf("Digite um numero N:");
    scanf("%d",&N);
    E=0;
    printf("E = ");
    for (i=1;i<=N;i++){
        E+=1/(float)i;
        printf("1/%d +",i);
    }
    printf("= %2.2f",E);
}

