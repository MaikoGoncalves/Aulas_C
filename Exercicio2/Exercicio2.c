#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
2) Escreva um algoritmo que calcule e informe o peso ideal de uma mulher, tendo como
entrada de dados a sua altura de acordo com a fórmula de peso ideal feminino:
(62.1*altura - 44.7)*/


int main(void){
    double altura,peso,ide;
    printf("!! Vamos calcular peso ideal Feminino !!\n");
    printf("!! *** EXEMPLO  1.80  1.75   1.68 *** !!\n");
    printf(" Digite sua altura: \n");
    scanf("%lf",&altura);
    printf(" Digite seu peso: \n");
    scanf("%lf",&peso);
    ide=((62.1*altura)-44.7);
   	printf("\n Sua altura e: %.2lf \n", altura);
    printf("\n Seu peso e: %.2lf \n", peso);
    printf("\n Peso Ideal e: %.2lf \n", ide);
	return 0;
}
