/*Faça um programa para os seguintes dados referentes a cinco cidades brasileiras sobre acidentes de trânsito:
i. Código da cidade;
ii. Número de veículos de passeio;
iii. Número de acidentes de trânsito com vítimas.
Deseja-se saber:
a. Qual a maior e qual é o menor índice de acidentes e a que cidade pertencem;
b. Qual a média de veículos nas cinco cidades juntas;
c. Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double codcid,veiculos,acidente,media,soma=0,somav=0,mveiculo=0;
    int i=0,vcont=0;
    for (i=0; i<3 ; i++)
    {
    printf(" Digite o Codigo da Cidade \n");
    scanf(" %lf",&codcid);
    printf(" Digite o numero de veiculos de passeio \n");
    scanf(" %lf",&veiculos);
    printf(" Digite o numero de acidentes \n");
    scanf(" %lf",&acidente);
    soma=soma+veiculos;
    if(veiculos<2000)
    { vcont++;
    somav=somav+veiculos;
    }
    //if()
    }
    media = soma/i;
    mveiculo = somav/vcont;
    //printf("\n A media de veiculos nas cinco cidades juntas: %.2lf \n",media);
    printf("\n A media de veiculos nas cinco cidades juntas: %.2lf \n",media);
    printf("\n A media de acidentes de transito nas cidades com menos de 2.000 veiculos de passeio: %.2lf \n",mveiculo);
}
