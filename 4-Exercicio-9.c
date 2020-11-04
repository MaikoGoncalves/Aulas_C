/*9. Faça um programa que receba a idade, altura e o peso de 10 pessoas, calcule e mostre:
o A quantidade de pessoas com idade inferior a 30 anos;
o A média dos pesos das pessoas com idade entre 10 e 40 anos;
o A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas
analisadas.
2
o Soma das idades das pessoas;
o Média das idades dos participantes.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double altura,peso,soma,media,mediap,mediapnova,porc;
    int idade,i,qtd=0,qtp=0,pesoinf=0;
    for ( i=1; i<=10 ; i++)
    {
    printf("\n !!! As medidas da %i pessoas !!! \n",i);
    printf(" Digite a idade \n");
    scanf(" %i",&idade);
    printf(" Digite a altura \n");
    scanf(" %lf",&altura);
    printf(" Digite a peso \n");
    scanf(" %lf",&peso);
    soma=idade+soma;
    if(idade<30)
    {qtd++;
    }
    if(idade>=10 && idade<=40)
    {
    qtp++;
    mediap=mediap+peso;
    }
    if(peso<40)
    { pesoinf++;
    }
}
    i--;
    media=soma/i;
    mediapnova=mediap/qtp;
    porc = (pesoinf * 100 )/i;
    printf("\n Soma das idades das pessoas %.2lf \n",soma);
    printf("\n Media das idades dos participantes %.2lf \n",media);
    printf("\n A quantidade de pessoas com idade inferior a 30 anos sao: %.i \n",qtd);
    printf("\n A media dos pesos das pessoas com idade entre 10 e 40 anos: %.lf \n",mediapnova);
    printf("\n A porcentagem de pessoas com peso inferior a 40 kg: %.lf %% \n",porc);
}
