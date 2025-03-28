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
        printf("Sua classifica��o �: A");
    }

    else if(altura>=1.20 && altura <=1.70 && peso<60)
    {
        printf("Sua classifica��o �: B");
    }

    else if(altura>1.70 && peso<60)
    {
        printf("Sua classifica��o �: C");
    }

    else if(altura<1.20 && peso>=60 && peso<=90)
    {
        printf("Sua classifica��o �: D");
    }

    else if(altura<1.20 && peso>90)
    {
        printf("Sua classifica��o �: G");
    }

    else if(altura>=1.20 && altura <=1.70 && peso>=60 && peso<=90)
    {
        printf("Sua classifica��o �: E");
    }

    else if(altura>=1.20 && altura <=1.70 && peso>90)
    {
        printf("Sua classifica��o �: H");
    }

    else if(altura>1.70 && peso>=60 && peso<=90)
    {
        printf("Sua classifica��o �: F");
    }

    else if(altura>1.70 && peso>90)
    {
        printf("Sua classifica��o �: I");
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

    float epsilon = 0.001;  // Margem de erro para compara��o de ponto flutuante

    if (altura < 1.20)
    {
        printf("Debug: Altura < 1.20\n");
        if (peso < 60)
        {
            printf("Sua classifica��o �: A\n");
        }
        else if (peso <= 90)
        {
            printf("Sua classifica��o �: D\n");
        }
        else
        {
            printf("Sua classifica��o �: G\n");
        }
    }
    else if (altura >= 1.20 && altura <= 1.70 + epsilon)
    {
        printf("Debug: Altura entre 1.20 e 1.70\n");
        if (peso < 60)
        {
            printf("Sua classifica��o �: B\n");
        }
        else if (peso <= 90)
        {
            printf("Sua classifica��o �: E\n");
        }
        else
        {
            printf("Sua classifica��o �: H\n");
        }
    }
    else if (altura > 1.70 + epsilon)
    {
        printf("Debug: Altura > 1.70\n");
        if (peso < 60)
        {
            printf("Sua classifica��o �: C\n");
        }
        else if (peso <= 90)
        {
            printf("Sua classifica��o �: F\n");
        }
        else
        {
            printf("Sua classifica��o �: I\n");
        }
    }

    return 0;
}


