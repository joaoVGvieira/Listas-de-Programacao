#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,j,i,cont;
    printf("Digite dois numeros para ver se sao congruentes:");
    scanf("%d %d",&m,&j);
    cont=10;
    for(i=1;cont>0;i++){
        if(i%m == j%m){
            printf("%d\n",i);
            cont-=1;

        }
    }
}
