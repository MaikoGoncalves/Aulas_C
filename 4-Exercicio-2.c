//2. Fa�a um programa que leia 5 n�meros e informe o maior n�mero.
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
