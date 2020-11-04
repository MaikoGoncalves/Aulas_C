/*6. Faça um programa que leia 3 notas de 10 alunos e mostre na tela:
• A média do aluno.
• Verifique se o aluno foi Reprovado, Aprovado ou se o mesmo ficou para Prova Final
CONDIÇÕES: Aprovado acima ou igual a 70 pontos;
Reprovado: abaixo de 50 pontos;
Prova Final: entre 50 e 70 pontos */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double nota1,nota2,nota3,soma;

    for (int i=0 ; i<10 ; i++)
    {
    printf(" Digite a primeira nota com o maximo 30 pontos: \n");
    scanf("%lf",&nota1);
    printf(" Digite a segunda nota com o maximo 30 pontos: \n");
    scanf("%lf",&nota2);
    printf(" Digite a terceira nota com o maximo 40 pontos: \n");
    scanf("%lf",&nota3);

    soma = (nota1+nota2+nota3);

	printf("\n Sua nota foi: %.2lf \n", soma);

	if (soma >= 70)
    {
     printf("\n !!!! Aprovado !!!! \n\n\n");
    }
    else
    if (soma < 50)
    {
    printf("\n !!!! Reprovado !!!! \n\n\n");
    }
    else
    {
    printf("\n !!!! Prova Final !!!! \n\n\n");
    }

    }
}
