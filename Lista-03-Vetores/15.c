#include <stdio.h>
#include <stdlib.h>
int main(){
  int n;
  printf("Digite valor n:");
  scanf("%d",&n);
    int vet[n],i,soma;
    soma=0;
    for(i=0;i<n;i++){
        printf("Vet[%d]:",i);
        scanf("%d",&vet[i]);
        if(vet[i]%2!=0){
          soma+=vet[i];
        }
    }
  printf("Soma tota dos impar eh %d",soma);
}
