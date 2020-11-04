/*12. Faça um programa em linguagem que receba três números e mostre-os em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(void){
    int valor1,valor2,valor3;
    printf("!! Vamos informar tres números e mostre-os em ordem crescente !!\n");
    printf(" Digite o primeiro numero: \n");
    scanf("%d",&valor1);
    printf(" Digite o primeiro numero: \n");
    scanf("%d",&valor2);
    printf(" Digite o primeiro numero: \n");
    scanf("%d",&valor3);


    if ((valor1 <= valor2) && (valor1 <= valor3) && (valor2 <= valor3))
		{ printf("O valores crescente são: %d  %d  %d %",valor1,valor2,valor3);

		}  if ((valor1 <= valor2) && (valor1 <= valor3) && (valor3 <= valor2))
		   { printf(" O valores crescente são: %d  %d  %d  ",valor1,valor2,valor3);

		   }  if ((valor2 <= valor1) && (valor2 <= valor3) && (valor1 <= valor3))
		      { printf(" O valores crescente são: %d  %d  %d  ",valor2,valor1,valor3);

		      }  if ((valor2 <= valor1) && (valor2 <= valor3) && (valor3 <= valor1))
			     { printf(" O valores crescente são: %d  %d  %d  ",valor2,valor3,valor1);

			     }  if ((valor3 <= valor1) && (valor3 <= valor2) && (valor1 <= valor2))
			       { printf(" O valores crescente são: %d  %d  %d ",valor3,valor1,valor2);

				   }  if ((valor3 <= valor1) && (valor3 <= valor2) && (valor2 <= valor1))
				     { printf(" O valores crescente são: %d  %d  %d ",valor3,valor2,valor1);

				     }

    return 0;
}
