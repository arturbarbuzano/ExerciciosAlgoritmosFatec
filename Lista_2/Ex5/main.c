#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int nhorastrabalhadas;
    float salariominimo, horatrabalhada, salariobruto, imposto, salariofinal;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o número de horas trabalhadas:\n");
    scanf("%d", &nhorastrabalhadas);

    printf("Digite o salário mínimo:\n");
    scanf("%f", &salariominimo);

    horatrabalhada = salariominimo/2;

    salariobruto = nhorastrabalhadas*horatrabalhada;

    imposto = 0.03*salariobruto;

    salariofinal = salariobruto - imposto;

    printf("Hora trabalhada é: %f\n", horatrabalhada);
    printf("Salário bruto é: %f\n", salariobruto);
    printf("Imposto é: %f\n", imposto);
    printf("O salário final é: %f\n", salariofinal);

    return 0;
}
