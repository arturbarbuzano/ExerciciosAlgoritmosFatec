#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero1;
  int numero2;

  printf("Digite o numero \n");
  scanf("%i", &numero1);

  printf("Digite o numero \n");
  scanf("%i", &numero2);

  if(numero1%numero2 == 0)

    printf("Sao multiplos");

  else

    printf("Nao sao multiplos");

    return 0;
}
