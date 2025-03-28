#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int antecessor;
    int sucessor;

    printf("Digite um numero: \n");

    scanf("%i", &numero);

    antecessor = numero - 1;

    printf("antecessor e': %i\n", antecessor);

    sucessor = numero + 1;

    printf("sucessor e': %i", sucessor);

    return 0;

}
