#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int horaaula, numerohoraaula, salario;
    setlocale(LC_ALL,"Portuguese");

    do{
    printf("Digite o valor da sua hora aula:\n");
    scanf("%d", &horaaula);
    if(horaaula!=55 && horaaula!=67 && horaaula!=78)
    {
        printf("Desculpe não informar, mas existem só três valores a serem digitados, por favor tente novamente.\n");
    }
    }while(horaaula!=55 && horaaula!=67 && horaaula!=78);
    printf("Digite o número de hora aula:\n", numerohoraaula);
    scanf("%d", &numerohoraaula);

    if(horaaula==55)
    {
        salario = horaaula*numerohoraaula;
        printf("Professor Nível 1 seu salário é: %d", salario);
    }

    else if(horaaula==67)
    {
        salario = horaaula*numerohoraaula;
        printf("Professor Nível 2 seu salário é: %d", salario);
    }

    else
    {
        salario = horaaula*numerohoraaula;
        printf("Professor Nível 3 seu salário é: %d", salario);
    }
    return 0;
}
