#include <stdio.h>
int ano(int data){
    float mes,dias;
    mes=data*12;
    dias=(mes*30)+(data*5);
    return dias;
}
int main(){
    int d,y;
    printf("Digite sua idade em anos:");
    scanf("%d",&d);
    y=ano(d);
    printf("Essa pessoa tem %d dias",y);

}
