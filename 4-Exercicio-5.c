/*5. Fa�a um programa que receba dois n�meros inteiros e gere os n�meros inteiros que est�o no
intervalo compreendido por eles.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    int i,nu,nu1;
    printf(" Digite um numero \n");
    scanf("%i",&nu);
    printf(" Digite um numero \n");
    scanf("%i",&nu1);
    if (nu1>nu)
    {

    for (int i=nu ; i <= nu1; i++)
    {
    printf("\n %i \n",i);
    }
    }
 else{
      printf("\n Nao deu certo os numeros digitados \n");
    }
}
