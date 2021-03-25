#include <stdio.h>
#include <stdlib.h>
int main() {
    float salario,prestacao;
    printf("Qual seu salario bruto?");
    scanf("%f",&salario);
    printf("Qual o valor da prestacao?");
    scanf("%f",&prestacao);
    if (prestacao>salario*0.30){
        printf("Nao pode ser feito");
    }else{
        printf("pode ser feito");
    }
    return 0;
}
