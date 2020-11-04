#include <stdio.h>

	int main() {

    unsigned long long int numero;

    printf("Infome um numero maior que 1: ");
    scanf("%llu", &numero);

    if ( numero % 2 == 0 && numero != 2){
        printf("O numero nao e primo");
        }
        else if ( numero % 3 == 0 && numero != 3){
            printf("O numero nao e primo");
            }
            else if ( numero % 5 == 0 && numero != 5){
                printf("O numero nao e primo");
                }
                else if ( numero % 7 == 0 && numero != 7){
                    printf("O numero nao e primo");
                    }
                    else {
                        printf("O numero e primo");
                        }

	return 0;
}
