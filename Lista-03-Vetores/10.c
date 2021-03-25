#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,A[5],B[5],C[5];
  for(i=0;i<5;i++){
    printf("A[%d]=",i);
    scanf("%d",&A[i]);
    printf("B[%d]=",i);
    scanf("%d",&B[i]);
  }
  for(i=0;i<5;i++){
    C[i]=A[i]+B[i];
    printf("VetC[%d]=%d ",i,C[i]);
  }
}
