#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario, prestacao;
    float soma;

    printf ("\nDigite o Sal�rio\n");
    scanf ("%f", &salario);

    printf ("\nDigite a Presta��o\n");
    scanf ("%f", &prestacao);

    if (prestacao> salario *0.2)
    {
        printf ("Empr�stimo nao  concedido!");
    }

    else

    {
        printf ("Empr�stimo concedido");
    }
}
