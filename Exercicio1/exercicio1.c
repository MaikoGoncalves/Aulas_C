#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
1) Escreva um algoritmo que leia as medidas dos lados de um retângulo (valores inteiros),
calcule a sua área e mostre o resultado.
*/

int main(void){
    int lado1,lado2,calc;
    printf("!! Vamos calcular a area de um retangulo: !!\n");
    printf("!! USAR NUMEROS INTEIROS !!\n");
    printf(" Digite um lado:\n");
    scanf("%d",&lado1);
    printf(" Digite outro lado:\n");
    scanf("%d",&lado2);
    calc = lado1 * lado2;
	printf(" Primeiro Lado = %d \n", lado1);
    printf(" Segundo Lado = %d \n", lado2);
    printf(" O resultado da area e: %d \n",calc);
	return 0;
}
