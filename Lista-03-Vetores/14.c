#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10],vet2[10];
    int i,n;
    for(i=0;i<10;i++){
        printf("Vet[%d]:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    for(n=9;n>=0;n--){
      i=0;
      vet2[i]=vet[n];
      printf("%d ",vet2[i]);
      i++;
      }
}
