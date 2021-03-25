#include <stdio.h>
#include <stdlib.h>
int main(){
    int tipo,quantidade;
    float conta;
    printf("Qual tipo de pao:\n");
    printf("1.Salgado\n2.Doce\n");
    scanf("%d",&tipo);
    printf("Qualtidade de pao?");
    scanf("%d",&quantidade);
    if (tipo==1){
        conta=0.10*quantidade;
    }else if(tipo==2){
        conta=0.15*quantidade;
    }
    printf("Valor a paga e de $%2.2f",conta);
    return 0;
}
