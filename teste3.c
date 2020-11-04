#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario, prestacao;
    float soma;

    printf ("\nDigite o Salário\n");
    scanf ("%f", &salario);

    printf ("\nDigite a Prestação\n");
    scanf ("%f", &prestacao);

    if (prestacao> salario *0.2)
    {
        printf ("Empréstimo nao  concedido!");
    }

    else

    {
        printf ("Empréstimo concedido");
    }
}
