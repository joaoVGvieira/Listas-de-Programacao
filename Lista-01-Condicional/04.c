#include <stdio.h>
#include <stdlib.h>
int main(){
    int tipo;
    float num,conta,enquilo,jarda,milha,pe,polegada;
    printf("Qual o tipo de medida quer em quilomentros?\n1.pe\n2.jarda\n3.milha\n4.polegadas\n");
    scanf("%d",&tipo);
    printf("Quantidade do valor real:");
    scanf("%f",&num);
    polegada=25.3995;
    pe=polegada*12;
    jarda=pe*3;
    milha=jarda*1760;
    if (tipo==1){
        conta=num*pe;
        enquilo=conta*1000000;
        printf("o valor %f em quilometros é de %f",num,enquilo);;
    }else if(tipo==2){
        conta=num*jarda;
        enquilo=conta*1000000;
        printf("o valor %f em quilometros é de %f",num,enquilo);
    }if(tipo==3){
        conta=milha*num;
        enquilo=conta*1000000;
        printf("o valor %4.4f em quilometros é de %f",num,enquilo);
    }else if(tipo==4){
        conta=num*polegada;
        enquilo=conta*1000000;
        printf("o valor %f em quilometros é de %f",num,enquilo);
    }
    return 0;
}