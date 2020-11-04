/*13. Faça um programa em linguagem para verificar se um determinado número inteiro é divisível
por 3 ou 5, mas não simultaneamente pelos dois.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int num;
	printf("Digite um numero para ser verificado:\n");
	scanf("%d", &num);
	if (num % 3 ==0&& num % 5 ==0){
    printf("O numero %d e divisilvel por 3 e 5 \n",num);
       }else if (num % 3 ==0){
	    printf("O numero %d e divisilvel por 3 \n",num);
	      }else if (num % 5==0){
           printf("O numero %d e divisilvel por 5 \n",num);
	}else printf("O numero %d nao e divisilvel nem por 3 e nem por 5 \n",num);

	return 0;
}
