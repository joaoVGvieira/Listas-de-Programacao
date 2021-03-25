#include "stdio.h"
#include "stdlib.h"
int main() {
    int A[3][5];
    int cont = 0, B = 0, i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("digite [%d][%d]:", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (A[i][j]>= 15 && A[i][j]<= 20) {
                cont += 1;
            }
        }
    }
    printf("Quantidade de numeros entre 15 e 20: %d", cont);
}
