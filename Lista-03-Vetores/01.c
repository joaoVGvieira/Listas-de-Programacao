#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[]={15,20,3,1,26,2};
   int i,soma=0;
   for(i=0;i<6;i++){
       soma+=A[i];
   }
   printf("soma é %d",soma);
}
