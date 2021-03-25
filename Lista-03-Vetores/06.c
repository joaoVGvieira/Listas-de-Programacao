#include <stdio.h>
#include <stdlib.h>
int main()
{
   int A[10];
   int B[10];
   int N,i,maior,menor;
   for(i=0;i<10;i++){
       printf("A[%d]=",i);
       scanf("%d",&A[i]);
       if(A[i]<10){
        B[i]=1;
       }else{
           B[i]=A[i];
       }
       
   }
   for(i=0;i<10;i++){
       printf("A= %d \n",A[i]);
   }
    for(i=0;i<10;i++){
       printf("B= %d \n",B[i]);
   }
}
