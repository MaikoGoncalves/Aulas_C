//3. Faça um programa que leia 5 números e informe a soma e a média dos números.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double n,media,soma=0;
    for (int i = 0; i < 5; i++){
    printf(" Digite um numero \n");
    scanf("%lf",&n);
    soma=n+soma;
    }
    media=soma/5;
    printf("\n A soma dos numeros sao: %.2lf \n",soma);
   	printf("\n A media: %.2lf \n",media);
}
