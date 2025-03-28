#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float altura, peso, IMC;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o peso:\n");
    scanf("%f", &peso);

    IMC = peso/(altura*altura);

    if(IMC <17)
    {
        printf("Muito abaixo do peso");
    }

    else if(IMC >=17 && IMC <=18.49)
    {
        printf("Abaixo do peso");
    }

    else if(IMC >=18.50 && IMC <=24.99)
    {
        printf("Peso Normal");
    }

    else if(IMC >=25 && IMC <=29.99)
    {
        printf("Acima do peso");
    }

    else if(IMC >=30 && IMC<=34.99)
    {
        printf("Obesidade I");
    }

    else if(IMC >=35 && IMC<=39.99)
    {
        printf("Obesidade II(severa)");
    }

    else if(IMC >=40)
    {
        printf("Obesidade III(mórbida)");
    }

    return 0;
}
