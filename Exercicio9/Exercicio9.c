/*9. Fa�a um programa em fluxograma e em linguagem C para ler uma velocidade em km/h
(quil�metros por hora) e apresent�-la convertida em m/s (metros por segundo). A f�rmula de
convers�o �: M = K / 3.6, sendo K a velocidade em km/h e M em m/s*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    double ms,km;
    printf("!! Vamos informar uma velocidade em KM e converter para M/S !!\n");
    printf(" Digite uma velocidade em KM : \n");
    scanf("%lf",&km);
    ms = km / 3.6;
   	printf("\n Valor da velocidade em km: %.2lf \n", km);
   	printf("\n Valor da velocidade em m/s: %.2lf \n", ms);

    return 0;
}
