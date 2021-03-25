#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,vet[30],mult;
  for(i=0;i<30;i++){
    printf("Digite vet[%d]:",i);
    scanf("%d",&vet[i]);
  }
  int A;
  printf("Digite A:");
  scanf("%d",&A);
  for(i=0;i<30;i++){
     mult=vet[i]*A;
     printf("%d" ,mult);
  if(mult%2==0){
    printf(" par \n");
  }else{
    printf(" impar \n");
  }
  }
}
