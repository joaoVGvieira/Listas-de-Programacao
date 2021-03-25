#include <stdio.h>
#include <stdlib.h>
int main(){
    int maxima,velocidade,conta,multa;
    printf("Qual a velocidade maxima?\n");
    scanf("%d",&maxima);
    printf("Qual velocidade o motorista estava?\n");
    scanf("%d",&velocidade);
    conta=velocidade-maxima;
    if (conta>=1 && conta<=10){
        multa=50;
        printf("multa foi de %d",multa);
    }else if (conta>=11 && conta<=30){
        multa=100;
        printf("multa foi de %d",multa);
    }
    if (conta>30){
        multa=200;
        printf("multa foi de %d",multa);
    }else if (conta<=0){
        printf("Nada a pagar");
    }
    return 0;
}