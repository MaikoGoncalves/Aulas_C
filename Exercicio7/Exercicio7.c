/*7. Faça um algoritmo em fluxograma e em linguagem C que compare dois números inteiros e
imprima o maior número. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   int main(void){
    int a,b;
    printf("!! Vamos comparar 2 numeros inteiros !!\n");
    printf(" Digite o primeiro: \n");
    scanf("%d",&a);
    printf(" Digite o segundo: \n");
    scanf("%d",&b);
    if (a==b)
    {
             printf("\n %d e igual %d \n", a,b);
    }
    else if (a>b)
    {
            printf("\n %d e maior que %d \n", a,b);
    }else
    {
            printf("\n %d e maior que %d \n", b,a);
    }
    return 0;
    }
