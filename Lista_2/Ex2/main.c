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
        printf("Desculpe n�o informar, mas existem s� tr�s valores a serem digitados, por favor tente novamente.\n");
    }
    }while(horaaula!=55 && horaaula!=67 && horaaula!=78);
    printf("Digite o n�mero de hora aula:\n", numerohoraaula);
    scanf("%d", &numerohoraaula);

    if(horaaula==55)
    {
        salario = horaaula*numerohoraaula;
        printf("Professor N�vel 1 seu sal�rio �: %d", salario);
    }

    else if(horaaula==67)
    {
        salario = horaaula*numerohoraaula;
        printf("Professor N�vel 2 seu sal�rio �: %d", salario);
    }

    else
    {
        salario = horaaula*numerohoraaula;
        printf("Professor N�vel 3 seu sal�rio �: %d", salario);
    }
    return 0;
}
