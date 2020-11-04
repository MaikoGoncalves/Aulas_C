/*
4) Faça um algoritmo que calcule a soma de três números informados pelo usuário e faça
a média entre eles. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    double a,b,c,resultado;
    printf("!! Vamos calcular media de 3 numeros !!\n");
    printf(" Digite o primeiro numero: \n");
    scanf("%lf",&a);
    printf(" Digite o segundo numero: \n");
    scanf("%lf",&b);
    printf(" Digite o terceiro numero: \n");
    scanf("%lf",&c);
    resultado = (a+b+c)/3;
   	printf("\n Valor de A e: %.2lf \n", a);
    printf("\n Valor de B e: %.2lf \n", b);
    printf("\n Valor de C e: %.2lf \n", c);
    printf("\n A media e: %.2lf \n", resultado);
    return 0;
}
