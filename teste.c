#include<stdio.h>
#include<stdlib.h>


int main(){

    double tEleitor, vBrancos ,vNulos , vValidos;
    double pBranco, pNulo , pValido;

    printf("Qual e a quantidade de eleitores: ");
    scanf("%lf", &tEleitor);

    printf("Qual e a quantidade de votos em branco: ");
    scanf("%lf", &vBrancos);

    printf("Qual e a quantidade de votos nulos: ");
    scanf("%lf", &vNulos);

    printf("Qual e a quantidade de votos validos: ");
    scanf("%lf", &vValidos);

    pValido = vValidos*100/tEleitor;
    pBranco = vBrancos*100/tEleitor;
    pNulo = vNulos*100/tEleitor;


    printf("\nTotal dos Votos: %.2lf %%\n", tEleitor);
    printf("Porcentagem Validos: %.2lf %%\n", pValido);
    printf("Porcentagem Brancos: %.2lf %% \n", pBranco);
    printf("Porcentagem Nulos: %.2lf %% \n", pNulo);

return 0;
}
