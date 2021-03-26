#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=3, j=5;
    int *p=&i, *q=&j;
    int B;
    B=*p-*q;
    p==&i;
    printf("%d\n",p);
    printf("%d\n",&i);
    printf("%d\n",B);
}
/*A)6422288
  B)-2*/
