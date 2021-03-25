#include <stdlib.h>
#include <stdio.h>
int main(){
    float dinheiro,juros,conta,total;
    printf("Quanto de dinheiro investiu?");
    scanf("%f",&dinheiro);
    printf("Quantos de juros ao ano?");
    scanf("%f",&juros);
    conta=dinheiro*(juros/100);
    total=conta+dinheiro;
    printf("total foi de %2.2f",total);
    return 0;
}
