#include <stdlib.h>
#include <stdio.h>
int main(){
    float conta,salariobrut,parcela,porce;
    while (1){
        printf("Qual seu salario bruto?");
        scanf("%f",&salariobrut);
        if (salariobrut>0){
            printf("Qual sera o valor da parcela?");
            scanf("%f",&parcela);
            porce=salariobrut*0.30;
            if(porce>=parcela) {
                printf("pode ser feito\n");
            }else {
                printf("nao pode ser feito\n");
            }
            }
        else
            break;
    }
    return 0;
}
