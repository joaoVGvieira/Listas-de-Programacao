float notas(char letra,float A,float B ,float C){
    float soma,media;
     if(letra=='A'){
       soma=(A+B+C);
       media=soma/3;
       return media;  

     }else if(letra=='P'){
        soma=(A*5)+(B*3)+(C*2);
        media=soma/10;
        return media; 
     }
}
int main(){
    char letra;
    printf("Digite uma letra(A or P):");
    scanf("%c",&letra);
    float nota1,nota2,nota3,resultado;
    printf("Digite as notas separadas por espacos:");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    resultado=notas(letra,nota1,nota2,nota3);
    if(letra=='A'){
        printf("A media aritimetica eh %f",resultado);
    }else if(letra=='P'){
         printf("A media ponderada eh %f",resultado);
     }
}
