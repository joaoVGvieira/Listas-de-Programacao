#include <stdio.h>
#include <stdlib.h>
int main(){
    int A=15;
    double B=14.50;
    char  C[9]="chocolate";
    int *D;
    double *E;
    char *F;
    D=&A;
    E=&B;
    F=&C;
    printf("A=%d\n",A);
    printf("B=%2.2lf\n",B);
    printf("C=%s\n",C);
    printf("Endereco de memoria do int A:%d\n",D);
    printf("Endereco de memoria do double B:%d\n",E);
    printf("Endereco de memoria do char C:%d\n",F);
    printf("O tamanho em bytes da Variavel int A eh:%d\n",sizeof(A));
    printf("O tamanho em bytes da Variavel double B eh:%d\n",sizeof(B));
    printf("O tamanho em bytes da Variavel char C eh:%d\n",sizeof(C));
}
