#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[6];
   int positivo=0,negativo=0,i;
   for(i=0;i<6;i++){
       scanf("%d",&A[i]);
       if (A[i]<0){
           positivo++;
       }else{
           negativo++;
       }
   }
   printf("Total numero positivos:%d \n Total numero positivos:%d",positivo,negativo);
}
