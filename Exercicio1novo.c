/*1. Faça um programa que leia 5 notas de um aluno e mostre na tela:
• A média do aluno.
• Verifique se o aluno foi Reprovado, Aprovado ou se o mesmo ficou para Prova Final
CONDIÇÕES: Aprovado acima ou igual a 70 pontos;
Reprovado: abaixo de 50 pontos;
Prova Final: entre 50 e 70 pontos.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double nota1,nota2,nota3,nota4,nota5,soma;

    printf(" Digite a nota 1 valor maximo 20 pontos: \n");
    scanf("%lf",&nota1);
    printf(" Digite a nota 2 valor maximo 20 pontos: \n");
    scanf("%lf",&nota2);
    printf(" Digite a nota 3 valor maximo 20 pontos: \n");
    scanf("%lf",&nota3);
    printf(" Digite a nota 4 valor maximo 20 pontos: \n");
    scanf("%lf",&nota4);
    printf(" Digite a nota 5 valor maximo 20 pontos: \n");
    scanf("%lf",&nota5);

    soma = (nota1+nota2+nota3+nota4+nota5);

	printf("\n Sua nota foi: %.2lf \n", soma);

	if (soma >= 70)
    {
     printf("\n !!!! Aprovado !!!! \n");
    }
    else
    if (soma < 50)
    {
    printf("\n !!!! Reprovado !!!! \n");
    }
    else
    {
    printf("\n !!!! Prova Final !!!! \n");
    }

}
