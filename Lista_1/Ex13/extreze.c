#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1;
    float numero2;
    float numero3;
    float numero4;
    float somadosquadrados;

    do
    {
        do
        {
            printf("\nDigite o primeiro numero:");
            scanf("%f", &numero1);

            if(numero1<=10 || numero1>=25)
            {
                printf("Numero Invalido\n");
            }
        }
        while(numero1<=10 || numero1>=25);

        do
        {
            printf("\nDigite o segundo numero:");
            scanf("%f", &numero2);

            if(numero2<0)
            {
                printf("Numero Invalido\n");
            }
        }
        while(numero2<0);

            if(numero2>=0)
            {
                numero3 = numero1 + numero2;
                numero4 = numero1*numero2*numero3;
                somadosquadrados = (numero1*numero1) + (numero2*numero2) + (numero3*numero3) + (numero4*numero4);
                printf("\nA soma dos dois primeiros numeros e': %f", numero3);
                printf("\nO resultado dos produtos e': %f", numero4);
                printf("\nA soma dos quadrados e': %f", somadosquadrados);

            if(somadosquadrados<50000)
            {
                printf("\nSoma dos quadrados nao e' maior que cinquenta mil");
            }
            }
        }
        while(somadosquadrados<50000);

            return 0;
    }
