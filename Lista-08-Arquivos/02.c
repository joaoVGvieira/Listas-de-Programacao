#include <stdio.h>
int main(){
    FILE *numero;
    int num;
    numero= fopen("numero.txt","w");
    if(numero==NULL){
        printf("Erro na abertura");
        return 1;
    }else{
        fprintf(numero,"1 2 3 4 5 6 7 8 9 10 11 12 13 16 18 20 32");
    }    
    fclose(numero);
    FILE *pares,*comparar;
    comparar=fopen("numero.txt","r");
    pares= fopen("pares.txt","w");
    if(pares==NULL){
        printf("Erro na abertura");
        return 1;
    }else{
        while (!feof(comparar))
        {
            fscanf(comparar,"%d ",&num);
            if(num%2==0){
                fprintf(pares,"%d ",num);
            }
            
        }
        fclose(pares);
    }    
    
    fclose(comparar);
    printf("Dados gravados com sucesso!");
}
