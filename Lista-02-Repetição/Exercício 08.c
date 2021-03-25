#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, i, conta, fat, soma,num2;
    printf("Digite um numero:");
    scanf("%d", &num);
    num2=num;
    if (num < 0) {
        printf("Erro");
    } else {
        soma = 1;
        for (i = 1; num >= 1; num--) {
            soma *= i * num;

        }
        printf("o %d em fatoria e %d\n",num2,soma);
    }
    return 0;
}
