#include <stdio.h>
void tempo(int A,int B,int C){
    int horas_em_segundos;
     A*=60;
     horas_em_segundos=(A*60)+(B*60)+C;
     printf("%d",horas_em_segundos);
}
int main(){
    int horas,minutos,segundos,B;
    printf("Digite o tempo separado por dois pontos(horas:minutos:segundos):");
    scanf("%d:%d:%d",&horas,&minutos,&segundos);
    tempo(horas,minutos,segundos);
}
