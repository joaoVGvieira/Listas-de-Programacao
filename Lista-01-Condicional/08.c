#include <stdio.h>
#include <stdlib.h>
int main(){
    float N1,N2;
    printf("Digite um numero A:");
    scanf("%f",&N1);
    printf("Outro numero pra ser B:");
    scanf("%f",&N2);
    if (N2==0){
        printf("impossivel dividir A=%2.2f por B=%2.2f",N1,N2);
    }else {
        printf("e possivel dividir A=%2.2f por B=%2.2f", N1, N2);
    }
    return 0;
}