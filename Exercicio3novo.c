/*
3. Faça um programa que receba um número inteiro maior que 1. Verifique se o número
fornecido é primo ou não e mostre uma mensagem de número primo ou de números não primo.
Um número é primo quando é divisível apenas por 1 e por ele mesmo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
  int main(){
    bool primo = 1;
    int n;
    printf(" Digite um numero maior que 1 e inteiro: \n");
    scanf("%d",&n);
		for (int i = 2; i < n; i++)
        {
	        if (n % i == 0)
	        {
			 printf("\n Nao e primo o numero e divisivel por: %d \n",i);
			 primo = 0;
	        }
    	}
	    if (primo)
	    {
		printf("\n!!! O Numero e primo: %d !!! \n",n);
	    }
}
