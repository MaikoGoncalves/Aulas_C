/*
5)Faça um algoritmo que calcule a área de um triângulo retângulo. Sabendo que a área é dada
pela fórmula a seguir: Area= (base * altura)/2.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    double base,altura,area;
    printf("!! Vamos calcular Area de um triangulo !!\n");
    printf(" Digite a Base: \n");
    scanf("%lf",&base);
    printf(" Digite a altura: \n");
    scanf("%lf",&altura);
    area = (base*altura)/2;
   	printf("\n A base e: %.2lf \n", base);
    printf("\n A altura e: %.2lf \n", altura);
    printf("\n Valor da Area e: %.2lf cm2 \n", area);
    return 0;
}
