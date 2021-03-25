#include <stdlib.h>
#include <stdio.h>
int main(){
    float salario,salarionov;
    printf("Qual seu salario?");
    scanf("%f",&salario);
    if (salario<500){
        salarionov=salario+(salario*0.15);
        printf("Seu novo salario e de %2.2f",salarionov)  ;
    } else{
        printf("Nao tem direito a novo salario");
    }
    return 0;
}
