#include <stdio.h>
#include <stdlib.h>
int main(){
  int P[150],i,contP=0;
  int C[220],n,contC=0;
  for(i=0;i<150;i++){
    printf("P[%d]:",i);
    scanf("%d",&P[i]);
    contP+=1;
    if (P[i]==9999){
      contP-=1;
      break;
    }
  }
  for(i=0;i<220;i++){
    printf("C[%d]:",i);
    scanf("%d",&C[i]);
    contC+=1;
    if (C[i]==9999){
      contC-=1;
      break;
    }
  }
  for(i=0;i<contP;i++){
    for(n=0;n<contC;n++){
    if(P[i]==C[n]){
      printf("%d ",P[i]);
    }
    }
  }
}
