#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{ int n;
	printf("Digite um numero: \n");
	scanf("%d", &n);
	if (n % 3 ==0){
    printf("Divisilvel por 3 \n");
       } if (n% 5 ==0){
	    printf("Divisilvel por 5 \n");
	      }
else printf("Nao e divisilvel nem por 3 e nem por 5 \n",n);
}
