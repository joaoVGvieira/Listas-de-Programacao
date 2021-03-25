#include <stdio.h>
#include <stdlib.h>

int main()
{
   float A[15];
   int i,maior,menor;
   for(i=0;i<15;i++){
       scanf("%f",&A[i]);
       maior=A[0];
       menor=A[0];
       if (A[i]>menor){
           maior=A[i];
       }
       if(A[i]<menor){
           menor=A[i];
       }
       
   }
   printf("maior:%d menor:%d",maior,menor);
}
