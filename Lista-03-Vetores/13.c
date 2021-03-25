#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10];
    int N,i;
    for(i=0;i<10;i++){
        printf("Vet[%d]:",i);
        scanf("%d",&vet[i]);
    }
    printf("Digite um valor:");
    scanf("%d",&N);
    for(i=0;i<10;i++){
      if(i==0){
        printf("Valores menores que %d:\n",N);
      }
      if(vet[i]<N){
        printf("%d ",vet[i]);
      }
    }
}
