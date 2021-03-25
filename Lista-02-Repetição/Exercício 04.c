#include <stdio.h>
#include <stdlib.h>
int main() {
    int pares, impar, numero, i;
    pares = 0;
    impar = 0;
    for (i = 1; i <= 400; i++) {
        printf("Digite um numero:");
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            pares += 1;
        } else {
            impar += 1;
        }
    }
    printf("A quantida de numeros impar foi de %d.\nE de par foi de %d.", impar, pares);
    return 0;
}
