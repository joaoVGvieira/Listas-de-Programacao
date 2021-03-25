#include <stdlib.h>
#include <stdio.h>
int main(){
    int maior,digitado,i,digatado2;
    printf("Quanto numero digitados?");
    scanf("%d",&digitado);
    maior=0;
    for(i=1;i<=digitado;i++){
        printf("Digite um numero:");
        scanf("%d",&digatado2);
        if(digatado2>maior){
            maior=digatado2;
        }
    }
    printf("O maior numero digitado foi %d",maior);
    return 0;
}
