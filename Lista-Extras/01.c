#include <stdio.h>
#include <math.h>
void funcao_euclediana(int x1,int x2,int y1,int y2){
    int D;
    D=sqrt(pow((x1-y1),2)+pow((x2-y2),2));
    imprimir(D);
}
void imprimir(int valorf){
    printf("---Funcao Euclediana---\n");
    printf("O valor da funcao eh %d\n\n",valorf);
    return;
}
int main(){
    int X1,X2,Y1,Y2;
    printf("Digite dois pontos separado:\n");
    printf("Digite o ponto 1:");
    scanf("%d,%d",&X1,&X2);
    printf("Digite o ponto 2:");
    scanf("%d,%d",&Y1,&Y2);
    funcao_euclediana(X1,X2,Y1,Y2);
}
