#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int nhorastrabalhadas;
    float salariominimo, horatrabalhada, salariobruto, imposto, salariofinal;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o n�mero de horas trabalhadas:\n");
    scanf("%d", &nhorastrabalhadas);

    printf("Digite o sal�rio m�nimo:\n");
    scanf("%f", &salariominimo);

    horatrabalhada = salariominimo/2;

    salariobruto = nhorastrabalhadas*horatrabalhada;

    imposto = 0.03*salariobruto;

    salariofinal = salariobruto - imposto;

    printf("Hora trabalhada �: %f\n", horatrabalhada);
    printf("Sal�rio bruto �: %f\n", salariobruto);
    printf("Imposto �: %f\n", imposto);
    printf("O sal�rio final �: %f\n", salariofinal);

    return 0;
}
