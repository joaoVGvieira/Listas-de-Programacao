#include <stdio.h>
#include <stdlib.h>
int main(){
  int vetid[100000];
  float vetconta[100000];
  int id,i;
  float pagar,faturamento=0;
  while(1){
   printf("Digite o id:");
   scanf("%d",&id);
   if(id<0){
     break;
   }else{
      vetid[i]=id;  
      printf("Quanto a pagar:");
      scanf("%float",&pagar);
      vetconta[i]=pagar;
      faturamento+=pagar;
      i++;
   }
  }
  int n;
  printf("Vetor de indentificação");
  printf("\n");
  for(n=0;n<i;n++){
    printf("%d ",vetid[n]);
  }
  printf("\n");
  printf("Vetor de contas\n");
  for(n=0;n<i;n++){
    printf("$%2.2f ",vetconta[n]);
  }
  printf("\n");
  printf("Total do dia:$%2.2f",faturamento);
}
