#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float vet[10];
    int i;   
    for(i=0;i<10;i++){
        printf("Vet[%d]:",i);
        scanf("%f",&vet[i]);
    }
    for(i=0;i<10;i++){
      if (vet[i]<0){
          vet[i]=-1;
      }else{
        vet[i]=sqrt(vet[i]);
      }
      printf("%2.2f ",vet[i]);
    }  
}
