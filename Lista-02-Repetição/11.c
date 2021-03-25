#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,eleitore,can1,can2,can3,can4,nulo,branco,voto;
    float porcnu,porcbran;
    printf("Quantos eleitores:");
    scanf("%d",&eleitore);
    can1=0;
    can2=0;
    can3=0;
    can4=0;
    nulo=0;
    branco=0;
    for (i=1;i<=eleitore;i++){
        printf("1, 2, 3 e 4 = voto para os respectivos candidatos;\n"
               "5 = voto nulo;\n"
               "6 = voto em branco;\n"
               "Seu voto:");
        scanf("%d",&voto);
        if(voto==1){
            can1+=1;
        }else if (voto==2){
            can2+=1;
        }else if (voto==3){
            can3+=1;
        }else if(voto==4){
            can4+=1;
        }else if(voto==5){
            nulo+=1;
        }else{
            branco+=1;
        }
    }
    porcbran=(float)eleitore*((float)branco/100);
    porcnu=(float)eleitore*((float)nulo/100);
    printf("voto para o canditado 1:%d\n"
           "voto para o canditado 2:%d\n"
           "voto para o canditado 3:%d\n"
           "voto para o canditado 4:%d\n",can1,can2,can3,can4);
    printf("Total de votos brancos:%d\n",branco);
    printf("Total de votos nulos:%d\n",nulo);
    printf("portagem de voto nulo:%2.2f\n"
           "portagem de voto branco:%2.2f\n",porcnu,porcbran);
    return 0;
}
