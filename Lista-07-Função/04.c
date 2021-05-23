#include <stdio.h>
int somas(int J,int K){
     int soma=0;
     int i=J;
     for(i;i>=K;i--){
         soma+=i;
     }
     printf("Soma entre os numero e contando com eles mesmo eh:%d",soma);
}
int main(){
    int A,B,C;
    printf("Digite dois numeros ,separados por virgula para somar os numeros entre eles:");
    scanf("%d,%d",&A,&B);
    if(A>B){
        C=somas(A,B);
    }else{
         C=somas(B,A);
    }
   
}
