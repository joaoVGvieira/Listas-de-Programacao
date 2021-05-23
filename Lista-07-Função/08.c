#include <stdio.h>
void ideal(float altura,char sexo){
    float peso_ideal,multiplicao;
    printf("%c\n",sexo);
    printf("%.2f\n",altura);
    if(sexo=='F'){
        peso_ideal=(altura*62.1)-44.7;
        printf("Seu peso ideal eh %2.2f",peso_ideal);    
    }else if(sexo=='M'){
        peso_ideal=(altura*72.1)-58;
        printf("Seu peso ideal eh %2.2f",peso_ideal);  
    }

}
int main(){
    float altura;
    char sexo;
    printf("Digite sua altura:");
    scanf("%f",&altura);
    printf("Qual o sexo(F or M):");
    scanf(" %c",&sexo);
    ideal(altura,sexo);
}
