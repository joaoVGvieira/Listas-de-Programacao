#include <stdlib.h>
#include <stdio.h>
int main() {
    int N, i, conta;
    printf("Digite um numero:");
    scanf("%d", &N);
    conta=0;
    for (i = 1; i <= N; i++) {
        conta+=i;
    }
    printf("Valor da soma:%d", conta);
    return 0;
}
