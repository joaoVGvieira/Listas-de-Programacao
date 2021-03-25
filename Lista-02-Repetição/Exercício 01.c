#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int i;
    float num,conta;
    for(i=1;i <=400;i++) {
        printf("Digite um numero:");
        scanf("%f",&num);
        conta =pow(num,3);
        printf("%2.2f\n",conta);
    }
    return 0;
}
