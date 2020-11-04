#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int num, i,cont=0;
    printf("Entre com um número inteiro: ");
    scanf("%d", &num);

    if (num==1)
    {
    printf("O numero %d e primo", num);
    }
    else if (num==2)
    {
    printf("O numero %d nao e primo", num);
    }
         else if ( num % 2 == 0 && num != 2)
         {
         printf("O numero nao e primo");
         }
         else if ( num % 3 == 0 && num != 3)
         {
         printf("O numero nao e primo");
         }
         else if ( num % 5 == 0 && num != 5)
         {
         printf("O numero nao e primo");
         }
         else if ( num % 7 == 0 && num != 7)
         {
         printf("O numero nao e primo");
         }
    else
    {
    printf("O numero e primo");
    }

}
