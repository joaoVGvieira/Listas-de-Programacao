#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[10];
   int i;
   for(i=0;i<10;i++){
       scanf("%d",&A[i]);
       if (A[i]==5){
           printf("%d",i);
       }
   }
}
