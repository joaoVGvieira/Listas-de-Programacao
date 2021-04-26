#include <stdio.h>
typedef struct{
  int origem;
  int destino;
}voos;
typedef struct{
    int chegam;
    int saem;
}aeroporto;
int main(){
    voos p[5];
    aeroporto j[5]={0};
    int i;
    for(i=0;i<5;i++){
        printf("Qual a origem:");
        scanf("%d",&p[i].origem);
        printf("Qual o destino:");
        scanf("%d",&p[i].destino);
        if(p[i].origem==p[i].destino){
            printf("destino invalido\n");
            break;
        }      
    }
   for(i=0;i<5;i++){
       if(p[i].origem==0){
           j[0].saem++;
       }
       if(p[i].origem==1){
           j[1].saem++;
       }
       if(p[i].origem==2){
           j[2].saem++;
       }
       if(p[i].origem==3){
           j[3].saem++;
       }
       if(p[i].origem==4){
           j[4].saem++;
       }
       if(p[i].destino==0){
           j[0].chegam++;
       }
       if(p[i].destino==1){
           j[1].chegam++;
       }
       if(p[i].destino==2){
           j[2].chegam++;
       }
       if(p[i].destino==3){
           j[3].chegam++;
       }
       if(p[i].destino==4){
           j[4].chegam++;
       }
   }
   for(i=0;i<5;i++){
       printf("A aeroporto %d chegou %d voos e sairam %d voos.\n",(i+1),j[i].chegam,j[i].saem);
   }
}
