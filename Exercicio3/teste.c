/*8. Faça um programa em fluxograma e em linguagem C para ler a temperatura digitada pelo
usuário em graus Fahrenheit e apresentá-la convertida em graus Celsius. Considere a fórmula
de conversão: C = 5.0 * (F - 32.0) / 9.0, sendo C a temperatura em Celsius e F a temperatura
em Fahrenheit.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    double c,f;
    printf("!! Vamos converter uma temperatura Fahrenheit para Celsius !!\n");
    printf(" Digite uma temperatura em  Fahrenheit : \n");
    scanf("%lf",&f);
    c = 5 * (f - 32.0) / 9;
   	printf("\n Valor da temperatura em Celsius e: %.2lf \n", c);

    return 0;
}
