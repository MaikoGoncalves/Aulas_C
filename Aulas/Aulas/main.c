#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   char sexo;
    printf("Digite um genero (M) ou (F) \n");
    scanf("%c",&sexo);

    switch (sexo){
      case'M': printf("Masculino\n" ); break;
      case'm': printf("Masculino.\n" ); break;
      case'f': printf("Feminino.\n" ); break;
      case'F': printf("Feminino.\n" ); break;

      }
        return 0;
}
