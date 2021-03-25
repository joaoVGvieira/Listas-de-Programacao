#include <stdio.h>
#include <stdlib.h>
int main()
{
   float A[6];
   int i;
   float media,soma=0;
   for(i=0;i<6;i++){
       scanf("%f",&A[i]);
       soma+=A[i];
       
   }
   media=soma/6;
   printf("%2.f",media);
}
