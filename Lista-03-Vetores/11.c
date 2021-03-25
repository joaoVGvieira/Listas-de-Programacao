#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,i,indiceMaior,indiceMenor,maior,menor;
  printf("Digite o valor n:");
  scanf("%d",&n);
  int vet[n];
  for(i=0;i<n;i++){
    scanf("%d",&vet[i]);
  }
  maior=vet[0];
  menor=vet[0];
  for(i=0;i<n;i++){
    if(vet[i]<menor){
      menor=vet[i];
      indiceMenor=i;
    }
    if(vet[i]>maior){
      maior=vet[i];
      indiceMaior=i;
    }
  }
  printf("Maior=%d[%d]\n",maior,indiceMaior);
  printf("Menor=%d[%d]",menor,indiceMenor);
}
