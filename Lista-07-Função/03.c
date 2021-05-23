#include <stdio.h>
int indice(a){
    if(a%2==0){
       printf("Par\n"); 
       return 1;
    }else{
       printf("impar\n"); 
       return 0;
    }
}
int main(){
    int a,b;
    printf("Digite um numero:");
    scanf("%d",&a);
    b=indice(a);
}
