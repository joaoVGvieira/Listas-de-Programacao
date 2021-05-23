#include <stdio.h>
int main(){
    FILE *file;
    char OP[1];
    int N1,N2,conta;
    file= fopen("calculadora.txt","a");
    if(file==NULL){
        printf("Erro na abertura");
        return 1;
    }else{
        printf("Digite qual operacao deseja(+ or -):");
        scanf(" %[^\n]s",OP);
        printf("Digite o N1:");
        scanf("%d",&N1);
        printf("Digite o N2:");
        scanf("%d",&N2);
        if (OP[0]=='+')
        {   
           conta=N1+N2;
           fprintf(file,"%d + %d = %d\n",N1,N2,conta);
        }else if(OP[0]=='-'){
            conta=N1-N2;
            fprintf(file,"%d - %d = %d\n",N1,N2,conta); 
        }
    }    
    fclose(file);
	printf("Dados gravados com sucesso!");
}  
