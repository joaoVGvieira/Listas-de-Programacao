#include <stdio.h>
#include <stdlib.h>
int main(){
    float media,vet[10],soma=0;
    int i;   
    for(i=0;i<10;i++){
        printf("Vet[%d]:",i);
        scanf("%f",&vet[i]);
        soma+=vet[i];
    }
    media=soma/10;
    for(i=0;i<10;i++){
      if(vet[i]>media){
        printf("%2.2f ",vet[i]);
      }
    }
     
}
