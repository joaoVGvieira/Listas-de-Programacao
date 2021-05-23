#include <stdio.h>
int fatorial(int a){
    int i;
    int j=1;
    for(i=a;i>0;i--){
        j*=i;
    }
    printf("A fatorial eh %d",j);
}
int main(){
    int A,j;
    printf("Digite um numero:");
    scanf("%d",&A);
    j=fatorial(A);
}
