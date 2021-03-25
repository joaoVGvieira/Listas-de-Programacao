#include <stdio.h>
#include <stdlib.h>
int main(){
    int soma,media,i,numeros;
    soma=0;
    for (i=1;i<=50;i++){
     printf("Digite um numero:");
     scanf("%d",&numeros);
     soma+=numeros;
    }
   media=soma/50;
   printf("Media foi de: %d",media);
   return 0;
}
