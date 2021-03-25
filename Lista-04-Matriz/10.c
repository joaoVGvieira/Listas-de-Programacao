#include "stdio.h"
int main() {
    float matriz[5][3];
    int i, j;
    float corte1 = 10, corte2 = 10, corte3 = 10, corte4 = 10, corte5 = 10;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("matriz[%d][%d]=", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    float funcionaria1, funcionaria2, funcionaria3, funcionaria4, funcionaria5;
    corte1 *= matriz[0][0];
    corte2 *= matriz[1][0];
    corte3 *= matriz[2][0];
    corte4 *= matriz[3][0];
    corte5 *= matriz[4][0];

    float depilacao1 = 15, depilacao2 = 15, depilacao3 = 15, depilacao4 = 15, depilacao5 = 15;

    depilacao1 *= matriz[0][1];
    depilacao2 *= matriz[1][1];
    depilacao3 *= matriz[2][1];
    depilacao4 *= matriz[3][1];
    depilacao5 *= matriz[4][1];

    float podologia1 = 30, podologia2 = 30, podologia3 = 30, podologia4 = 30, podologia5 = 30;

    podologia1 *= matriz[0][2];
    podologia2 *= matriz[1][2];
    podologia3 *= matriz[2][2];
    podologia4 *= matriz[3][2];
    podologia5 *= matriz[4][2];
    funcionaria1 = (corte1 + depilacao1 + podologia1);
    funcionaria2 = (corte2 + depilacao2 + podologia2);
    funcionaria3 = (corte3 + depilacao3 + podologia3);
    funcionaria4 = (corte4 + depilacao4 + podologia4);
    funcionaria5 = (corte5 + depilacao5 + podologia5);
    printf("A funcionaria 1 vai receberer: %2.2f\n", (funcionaria1/2));
    printf("A funcionaria 2 vai receberer: %2.2f\n", (funcionaria2/2));
    printf("A funcionaria 3 vai receberer: %2.2f\n", (funcionaria3/2));
    printf("A funcionaria 4 vai receberer: %2.2f\n", (funcionaria4/2));
    printf("A funcionaria 5 vai receberer: %2.2f\n", (funcionaria5/2));
}
