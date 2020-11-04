/* Faça um programa em C que receber o salário de um trabalhador e o valor da prestação de um
empréstimo, se a prestação for maior que 20% do salário imprima: Empréstimo não
concedido, caso contrário imprima: Empréstimo concedido. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
    double salario,prest,resultado;

    printf(" Digite o salario \n");
    scanf("%lf",&salario);
    printf(" Digite o valor da prestacao \n");
    scanf("%lf",&prest);

    resultado = (salario * 20)/100;

   	printf("\n Seu Salario e de: R$ %.2lf \n", salario);
    printf("\n O valor da prestacao: R$ %.2lf \n", prest);
    printf("\n O valor liberado: R$ %.2lf \n", resultado);


	if (resultado > prest)
    {
     printf("\n !!!! Emprestimo concedido !!!! \n");
    }
    else
    {
    printf("\n !!!! Emprestimo Reprovado !!!! \n");
    }

}


