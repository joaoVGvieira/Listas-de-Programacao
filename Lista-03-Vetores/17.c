#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int vet[10];
    int i;   
    for(i=0;i<10;i++){
        printf("Vet[%d]:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++){
        vet[i]=pow(vet[i],2);
        printf("%d ",vet[i]);
    }  
}
