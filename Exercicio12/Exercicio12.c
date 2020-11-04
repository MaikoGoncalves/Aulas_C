/*12. Faça um programa em linguagem que receba três números e mostre-os em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
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

	printf("\n Sua nota e: %.2lf \n", soma);

	if (soma >= 70)
    {
     printf("\n Aprovado \n");
    }
    else
    if (soma < 50)
    {
    printf("\n Reprovado \n");
    }
    else
    {
    printf("\n Prova Final \n");
    }

    return 0;
}
