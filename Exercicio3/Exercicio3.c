#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*3) Calcule o valor da raiz da função de 1º grau. Sendo que a fórmula geral é dada por
f (x) = ax+b lembrando que a raiz sé da por  x = −b/ a
. Peça ao usuário para informar valores para a e b. Mostre o resultado na tela.*/
int main(void){
    double resultado,x,a,b;
    printf("!! Vamos calcular f (x) = ax+b !!\n");
    printf(" Digite um numero para A: \n");
    scanf("%lf",&a);
    printf(" Digite um numero para B: \n");
    scanf("%lf",&b);
    x = (-b/a);
    resultado = a*x+b;
   	printf("\n Valor de A e: %.2lf \n", a);
    printf("\n Valor de B e: %.2lf \n", b);
    printf("\n Valor de X e: %.2lf \n", x);
    printf("\n Valor da Funcao f(x)=ax+b e: %.2lf \n", resultado);
    return 0;
}
