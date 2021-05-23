#include <stdio.h>
void vogal(char P){
     if((P=='A')||(P=='E')||(P=='I')||(P=='O')||(P=='U')){
         return 1;
     }else{
         return 0;
     }
}
int main(){
    char letra;
    printf("Digite uma letra:");
    scanf("%c",&letra);
    vogal(letra);
}
