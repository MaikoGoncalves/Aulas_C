/*11. Faça um programa em linguagem C que receba um número inteiro e verifique se este número
é par ou ímpar.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int num;
	printf("Digite um numero para ser verificado:\n");
	scanf("%d", &num);
	if (num % 2 > 0)
		printf("O numero %d e impar \n",num);
	else
		printf("O numero %d e par \n",num);
	return 0;
}
