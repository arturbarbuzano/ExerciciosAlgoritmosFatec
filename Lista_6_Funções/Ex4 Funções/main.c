/* Crie a fun��o ReajSalNovo que receba da fun��o main o valor do sal�rio e efetue o c�lculo do reajuste de sal�rio cada funcion�rio.
Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais.
Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %;
caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na fun��o main o sal�rio antigo
 e novo sal�rio obtido na fun��o.
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

    printf("Digite o sal�rio:");
    scanf("%f", &salario);
    salarionovo = ReajSalNovo(salario, salarionovo);

    printf("Sal�rio Antigo �:%f\n", salario);
    printf("Sal�rio Novo �:%f", salarionovo);
    return 0;
}
