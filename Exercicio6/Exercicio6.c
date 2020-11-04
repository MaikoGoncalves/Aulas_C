/*6. Faça um algoritmo que calcule a soma de três notas de um aluno, calcule a média e verifique
se o aluno foi aprovado ou reprovado. Considerando que para ser aprovado o aluno precisa
ter média maior ou igual a 70 pontos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    double nota1,nota2,nota3,media;
    printf("!! Vamos calcular media de um aluno e ver se foi aprovado ou reprovado !!\n");
    printf(" Digite a primeira nota: \n");
    scanf("%lf",&nota1);
    printf(" Digite a segunda nota: \n");
    scanf("%lf",&nota2);
    printf(" Digite a terceira nota: \n");
    scanf("%lf",&nota3);
    media = (nota1+nota2+nota3)/3;
   	if (media>=70){
    printf("\n Valor da primeira nota: %.2lf \n", nota1);
    printf("\n Valor da segunda nota: %.2lf \n", nota2);
    printf("\n Valor da terceira nota: %.2lf \n", nota3);
    printf("\n A sua media foi: %.2lf \n", media);
    printf("\n !!! FOI APROVADO !!! \n");
   	}else {
   	    printf("\n Valor da primeira nota: %.2lf \n", nota1);
        printf("\n Valor da segunda nota: %.2lf \n", nota2);
        printf("\n Valor da terceira nota: %.2lf \n", nota3);
        printf("\n A sua media foi: %.2lf \n", media);
        printf("\n !!! Sua media foi ABAIXO DE 70 !!! \n");
        printf("\n !!! NAO FOI APROVADO !!! \n");
   	}
    return 0;
}
