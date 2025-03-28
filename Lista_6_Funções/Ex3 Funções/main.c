#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Divisao(float numero3, float numero4)
{
    float resultado2;
    resultado2 = numero3/numero4;
    return(resultado2);
}

int main()
{
    float numero1;
    float numero2;
    float resultado;

    setlocale(LC_ALL,"");

    printf("Digite um número qualquer:");
    scanf("%f",&numero1);

    printf("Digite um número qualquer:");
    scanf("%f",&numero2);

    resultado = Divisao(numero1,numero2);

    printf("%f\n",numero1);
    printf("%f\n",numero2);
    printf("O resultado da divisão entre esses dois números é: %f",resultado);

    return 0;
}
