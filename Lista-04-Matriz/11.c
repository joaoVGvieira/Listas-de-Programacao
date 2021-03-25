#include "stdio.h"
int main(){
    float matriz[10][5];
    int i,j;
    float k;
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            printf("matriz[%d][%d]=",i,j);
            scanf("%f",&matriz[i][j]);
            printf("matriz[%d][%d]=%2.2f\n",i,j,matriz[i][j]);
        }
    }
    float maiordelegacao=matriz[0][0],maiordelegacao1=matriz[1][0];
    float maiordelegacao2=matriz[2][0],maiordelegacao3=matriz[3][0],maiordelegacao4=matriz[4][0];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(matriz[0][j]>maiordelegacao){
                maiordelegacao=matriz[0][j];
            }if(matriz[1][j]>maiordelegacao1){
                maiordelegacao1=matriz[1][j];
            }if(matriz[2][j]>maiordelegacao2){
                maiordelegacao2=matriz[2][j];
            }if(matriz[3][j]>maiordelegacao3){
                maiordelegacao3=matriz[3][j];
            }if(matriz[4][j]>maiordelegacao4){
                maiordelegacao4=matriz[4][j];
            }
        }
    }
    printf("Maior da delegacao 0 eh:%2.2f\n",maiordelegacao);
    printf("Maior da delegacao 1 eh:%2.2f\n",maiordelegacao1);
    printf("Maior da delegacao 2 eh:%2.2f\n",maiordelegacao2);
    printf("Maior da delegacao 3 eh:%2.2f\n",maiordelegacao3);
    printf("Maior da delegacao 4 eh:%2.2f\n",maiordelegacao4);

}
