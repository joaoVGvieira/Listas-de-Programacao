#include <stdio.h>
#include <stdlib.h>
int main(){
    int num=5;
    int *pnum=NULL;

    pnum=&num;
    printf("pnum=%d\n",pnum);
    printf("num=%d\n",num);
    printf("*pnum=%d\n",*pnum);
    printf("&num=%d\n",&pnum);
     printf("&num=%d\n",&num);
     // As afirmativas verdadeiras a partir do codigo foi B e D.
}