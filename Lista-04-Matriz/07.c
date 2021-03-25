#include "stdio.h"
int main() {
    int N = 10;
    int matriz[N][N];
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("matriz[%d][%d]=", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j) {
                printf("Matriz[%d][%d]=%d\n", i, j, matriz[i][j]);
            }
        }
    }
}
