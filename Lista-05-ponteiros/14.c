#include <stdlib.h>
#include <stdio.h>
int main(){
    short int v[5] = {2,5,1,4,0};
    int v1[5] = {2,5,1,4,0};
    char c[5] = {'a','b','m','4','-'};
    float f[5] = {2.66, 0.125, 1.0, 4.99, 2.009};
    double d[5] = {2.66, 0.125, 1.0, 4.99, 2.009};
    printf("Quantidade de byte de um elemendo do vetor do tipo short int gasta eh:%d\n",((int) (&v[1]))-((int) (&v[0])));
    printf("Quantidade de byte de um elemendo do vetor do tipo int gasta eh:%d\n",((int) (&v1[1]))-((int) (&v1[0])));
    printf("Quantidade de byte de um elemendo do vetor do tipo char gasta eh:%d\n",((int) (&c[1]))-((int) (&c[0])));
    printf("Quantidade de byte de um elemendo do vetor do tipo float gasta eh:%d\n",((int) (&f[1]))-((int) (&f[0])));
    printf("Quantidade de byte de um elemendo do vetor do tipo double gasta eh:%d\n",((int) (&d[1]))-((int) (&d[0])));
}
