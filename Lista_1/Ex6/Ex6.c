#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    printf("Digite o numero: ");
    scanf("%i", &numero1);
    printf("Digite o numero: ");
    scanf("%i", &numero2);

    if(numero1>numero2)
    {
        printf("Primeiro numero e' maior: %i", numero1);
    }
    else if (numero1<numero2)
    {
        printf("Segundo numero e' maior: %i", numero2);
    }
    else
    {
        printf("Sao iguais");
    }

    return 0;
}
