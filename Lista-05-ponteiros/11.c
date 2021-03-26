#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,vet[10];
    int *n;
    for(i=0;i<10;i++){
        vet[i]=rand() % 100;
        printf("Vet[%d]=%d\n",i,vet[i]);
    }
    printf("Endereco do numeros do vetores:");
    printf("\n");       
    n=&vet;    
    for(i=0;i<10;i++){
        printf("&%d=%d\n",vet[i],&n[i]);
    }
    
}
