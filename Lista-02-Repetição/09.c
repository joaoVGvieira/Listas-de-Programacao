#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,media,i,numero,numeros;
    printf("Digite um total de numero que queira saber a media:");
    scanf("%d",&N);
    numero=0;
    for (i=1;i<=N;i++) {
        printf("Digite o numero:");
        scanf("%d", &numeros);
        numero += numeros;
    }
    media=numero/N;
    printf("A media foi dos numeros foi de %d",media);
    return 0;

}
