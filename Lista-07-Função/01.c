#include <stdio.h>
int positivo(int a){
    if(a>0){
      return 1;
    }
    else{
       return 0;
    }
}
int main(){
    int a,y;
    printf("Digite um numero:");
    scanf("%d",&a);
    y=positivo(a);
}
