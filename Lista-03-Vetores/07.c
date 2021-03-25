#include <stdio.h>

int main()
{  
   int N,soma,i;    
   printf("Digite o valor N:");
   scanf("%d",&N);
   int A[N];
   soma=0;
   for(i=0;i<N;i++){
       printf("A[%d]",i);
       scanf("%d",&A[i]);
       if(i%2==0){
           soma+=A[i];
       }
   }
   printf("%d",soma);
    return 0;
}
