#include <stdio.h>
#include <stdlib.h>
int main(){
int A=5;
int *B;
double C=3.14;
double *D;
B=&A;
D=&C;
printf("Valor de A eh:%d\n",A);
printf("O valor do endereco de A eh:%d\n",B);
printf("Valor de C eh:%2.2lf\n",C);
printf("O valor do endereco de C eh:%d\n",D);
printf("O valor do ponteiro B eh:%d\n",B);
printf("O valor do ponteiro D eh:%d\n",D);
printf("O endereco do ponteiro B eh:%d\n",&B);
printf("O endereco do ponteiro C eh:%d\n",&C);
printf("O valor apontado pelo ponteiro B eh:%d\n",*B);
printf("O valor apontado pelo ponteiro D eh:%2.2lf\n",*D);

}