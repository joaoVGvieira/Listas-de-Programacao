#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10],i;
    int vet2[10],n;    
    for(i=0;i<10;i++){
        printf("Vet[%d]:",i);
        scanf("%d",&vet[i]);
    }
    printf("Vetor 1:\n");
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    printf("Vetor 2:\n");
    for(n=9;n>=0;n--){
      i=0;
      vet2[i]=vet[n];
      printf("%d ",vet2[i]);
      i++;
    }
}
