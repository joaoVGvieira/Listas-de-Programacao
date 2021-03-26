#include <stdlib.h>
int main()
{
    int i = 5, *p = &i;

    printf("%d\n", **&p);
    printf("%d\n", *&p);
    printf("%u %d %d %d %d \n", p, *p + 2, **&p, 3 * *p, **&p + 4);
}
/* o primeiro numero é o endereço de p que está armazenando o endereço memoria de i /o segundo numero é o numero armazendo na memoria de i, i + 2 no caso 5+2=7 onde i=5/
  o terceiro é numero armazendo na memoria de i pois se fosse *&p seria o endereço de i /quarto numero é 
  o numero 3 multiplicado pelo numero armezenado na memoria de i, e o ultimo é o numero armazendo na memoria de i mais quatro , i + 4=9 onde i=5.*/
