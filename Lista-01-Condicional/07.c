#include <stdio.h>
#include <stdlib.h>
int main(){
   float custodafab,total,porcentualdistribuidora,imposto;
   printf("Qual o custo da fabrica?");
   scanf("%f",&custodafab);
   porcentualdistribuidora=custodafab*0.28;
   imposto=custodafab*0.45;
   total=custodafab+porcentualdistribuidora+imposto;
   printf("Valor final para consumidor sera de %2.2f",total);
    return 0;
}