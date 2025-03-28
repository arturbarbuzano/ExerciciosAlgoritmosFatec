/* Crie a função ReajSalNovo que receba da função main o valor do salário e efetue o cálculo do reajuste de salário cada funcionário.
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %;
caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na função main o salário antigo
 e novo salário obtido na função.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float ReajSalNovo(float salario2, float salarionovo2)
{
    if(salario2<800)
    {
        salarionovo2 = salario2*1.15;
    }
    else if(salario2>=800 && salario2<=1000)
    {
        salarionovo2 = salario2*1.10;
    }
    else
    {
        salarionovo2 = salario2*1.05;
    }
    return(salarionovo2);
}
int main()
{
    float salario;
    float salarionovo;

    setlocale(LC_ALL,"");

    printf("Digite o salário:");
    scanf("%f", &salario);
    salarionovo = ReajSalNovo(salario, salarionovo);

    printf("Salário Antigo é:%f\n", salario);
    printf("Salário Novo é:%f", salarionovo);
    return 0;
}
