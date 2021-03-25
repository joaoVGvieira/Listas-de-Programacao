#include <stdio.h>
#include <stdlib.h>
int main(){
    int total,numeros,i,somapar;
    printf("Digite o total de numero:");
    scanf("%d",&total);
    somapar=0;
    for(i=0;i<total;i++){
        printf("Digite numeros:");
        scanf("%d",&numeros);
        if (numeros%2==0){
            somapar+=numeros;
        }
    }
  printf("total da soma par:%d",somapar);
  return 0;
}
