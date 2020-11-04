/*8. Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
• Esse funcionário foi contratado em 2017, com salário inicial de R$ 1000,00.
• Em 2018, ele recebeu aumento de 1,5% sobre seu salário inicial.
• A partir de 2019(inclusive), os aumentos salariais sempre corresponderam ao dobro do
percentual do ano anterior. Faça um programa que determine o salário atual desse
funcionário.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double salario=1000;
    double por=1.5;
    int anof;

    printf(" Digite um ano \n");
    scanf("%i",&anof);

    for(int ano = 2017; ano <= anof ; ano++)
    {
     printf("\n Seu Salario de %i e R$ %.2lf \n",ano, salario);
     salario = ((salario * por)/100) + salario ;
     por = por * 2 ;
    }
}
