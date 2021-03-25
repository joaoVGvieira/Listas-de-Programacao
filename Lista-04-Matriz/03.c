#include "stdio.h"
#include "stdlib.h"
int main() {
    int N;
    N = 5;
    float mat[N][N];
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%f", &mat[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
                printf("%2.2f ",mat[i][j]);
            }
        }
    }
}
