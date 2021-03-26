#include <stdlib.h>
#include <stdio.h>
int main(){
    int x=30;
    int *px;
    px=&x;
    px=*px/5;
    printf("%d",px);
}
/* Coloquei um valor na variavel X para facilitar o meu entendimento */