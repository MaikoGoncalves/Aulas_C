/*10. Fa�a um programa em linguagem C para ler um �ngulo em graus e apresent�-lo convertido
em radianos. A f�rmula de convers�o �: R = G * pi / 180, sendo G o �ngulo em graus e R em
radianos e pi = 3.14.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    double ag,ra;
    printf("!! Vamos informar um angulo converter a Radianos !!\n");
    printf(" Digite um angulo: \n");
    scanf("%lf",&ag);
    ra = ag * 3.14 / 180;
   	printf("\n Valor do angulo: %.2lf \n", ag);
   	printf("\n Valor em radianos: %.2lf \n", ra);

    return 0;
}
