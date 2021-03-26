#include <stdio.h>
#include <stdlib.h>
int main(){
    float vet[10];
    int i;
    float *p;
    for(i=0;i<10;i++){
        vet[i]= rand() % 30;
    }
    p=&vet;
    for(i=0;i<10;i++){
        printf("vet[%i]=%2.2f\n",i,vet[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("&vet[%d]=%d\n",i,&p[i]);
    }
}