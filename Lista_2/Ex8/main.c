/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float altura, peso;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite a altura:\n");
    scanf("%f", &altura);
    printf("Digite o peso:\n");
    scanf("%f", &peso);

    if(altura<1.20 && peso<60)
    {
        printf("Sua classificação é: A");
    }

    else if(altura>=1.20 && altura <=1.70 && peso<60)
    {
        printf("Sua classificação é: B");
    }

    else if(altura>1.70 && peso<60)
    {
        printf("Sua classificação é: C");
    }

    else if(altura<1.20 && peso>=60 && peso<=90)
    {
        printf("Sua classificação é: D");
    }

    else if(altura<1.20 && peso>90)
    {
        printf("Sua classificação é: G");
    }

    else if(altura>=1.20 && altura <=1.70 && peso>=60 && peso<=90)
    {
        printf("Sua classificação é: E");
    }

    else if(altura>=1.20 && altura <=1.70 && peso>90)
    {
        printf("Sua classificação é: H");
    }

    else if(altura>1.70 && peso>=60 && peso<=90)
    {
        printf("Sua classificação é: F");
    }

    else if(altura>1.70 && peso>90)
    {
        printf("Sua classificação é: I");
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float altura, peso;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a altura:\n");
    scanf("%f", &altura);
    printf("Digite o peso:\n");
    scanf("%f", &peso);

    // Debug prints para verificar os valores de altura e peso
    printf("Altura: %.2f, Peso: %.2f\n", altura, peso);

    float epsilon = 0.001;  // Margem de erro para comparação de ponto flutuante

    if (altura < 1.20)
    {
        printf("Debug: Altura < 1.20\n");
        if (peso < 60)
        {
            printf("Sua classificação é: A\n");
        }
        else if (peso <= 90)
        {
            printf("Sua classificação é: D\n");
        }
        else
        {
            printf("Sua classificação é: G\n");
        }
    }
    else if (altura >= 1.20 && altura <= 1.70 + epsilon)
    {
        printf("Debug: Altura entre 1.20 e 1.70\n");
        if (peso < 60)
        {
            printf("Sua classificação é: B\n");
        }
        else if (peso <= 90)
        {
            printf("Sua classificação é: E\n");
        }
        else
        {
            printf("Sua classificação é: H\n");
        }
    }
    else if (altura > 1.70 + epsilon)
    {
        printf("Debug: Altura > 1.70\n");
        if (peso < 60)
        {
            printf("Sua classificação é: C\n");
        }
        else if (peso <= 90)
        {
            printf("Sua classificação é: F\n");
        }
        else
        {
            printf("Sua classificação é: I\n");
        }
    }

    return 0;
}


