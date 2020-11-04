//2. Faça um programa que leia 5 números e informe o maior número.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
    double n,maior=0;
    for (int i=1; i <=5 ; i++)

    {    printf(" Digite um numero : \n");
         scanf("%lf",&n);

         printf("\n!!! Numero I: %.i !!! \n",i);


    if (n>maior)
    {
       maior=n;
       printf("\n!!! Numero maior e: %.2lf !!! \n",maior);


    }
  }
printf("\n!!! Numero maior e: %.2lf !!! \n",maior);
}
