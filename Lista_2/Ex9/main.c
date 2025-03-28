#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade, sexo;
    float salariofixo;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    do{
    printf("Digite 1 para sexo masculino ou 2 para sexo feminino:\n");
    scanf("%d", &sexo);
    if(sexo!=1 && sexo!=2)
    {
        printf("Número diferente de 1 e 2, por favor digite novamente.\n");
    }
    }while(sexo!=1 && sexo!=2);

    printf("Digite o salario fixo:\n");
    scanf("%f", &salariofixo);

    if(sexo==1)
    {
        if(idade<30)
        {
            printf("O seu salário %.2f , seu salário após o acréscimo %.2f", salariofixo, salariofixo+120);
        }
        else
            printf("O seu salário %.2f , seu salário após o acréscimo %.2f", salariofixo, salariofixo+200);
    }

    else
    {
        if(idade<30)
        {
            printf("O seu salário %.2f , seu salário após o acréscimo %.2f", salariofixo, salariofixo+130);
        }
        else
            printf("O seu salário %.2f , seu salário após o acréscimo %.2f", salariofixo, salariofixo+220);
    }
    return 0;
}
