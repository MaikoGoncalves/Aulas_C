/* Fa�a um programa em C que receber o sal�rio de um trabalhador e o valor da presta��o de um
empr�stimo, se a presta��o for maior que 20% do sal�rio imprima: Empr�stimo n�o
concedido, caso contr�rio imprima: Empr�stimo concedido. */
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


