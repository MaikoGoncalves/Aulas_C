/*2. Sabendo-se que o quilowatt de energia custa um quinto do salário mínimo. Implemente um
programa em C que receba o valor do salário mínimo e a quantidade de quilowatts consumida
por uma residência e mostre:
a. O valor de cada quilowatt;
b. O valor a ser pago por essa residência;
c. O valor a ser pago com o desconto de 25%.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
    double salario,watt,quantidade,pagar,desconto;

    printf(" Entre com o salario minimo: \n");
    scanf("%lf",&salario);
    printf(" Entre com a quantidade de quilowatts consumida por uma residencia: \n");
    scanf("%lf",&quantidade);

    watt = salario/5;
    pagar = watt*quantidade;
    desconto = pagar - ((pagar * 25)/100 );

    printf("\n O valor de cada quilowatt: R$ %.2lf \n", watt);
    printf("\n O valor a ser pago por essa residência: R$ %.2lf \n", pagar);
    printf("\n O valor a ser pago com o desconto de 25%%: R$ %.2lf \n", desconto);

}
