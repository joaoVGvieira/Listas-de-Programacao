int main()
{  
   int i;
   int A[10];
   int B[10];
   int C[20];
   for(i=0;i<10;i++){
       printf("A[%d]:",i);
       scanf("%d",&A[i]);
   }
   for(i=0;i<10;i++){
       printf("B[%d]:",i);
       scanf("%d",&B[i]); 
   }
   int indice=0;
   for(i=0;i<20;i++){
       C[indice]=A[i];
       C[indice+1]=B[i];
       indice+=2;
       printf("%d\n",C[i]);
   }
}
