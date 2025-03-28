#include <stdio.h>

int main()
{
    float salario;
    float salarionovo;

    do {
    printf("Digite o salario:");
    scanf("%f", &salario);
    if(salario<=0)
    {
        printf("Quantidade invalida\n");
        printf("Tente novamente\n");
    }
    } while(salario<=0);
     if(salario<800)
    {
       salarionovo= salario*1.15;
    }
    else
    if(salario<=1000)
    {
        salarionovo=1.1*salario;
    }
    else
    {
        salarionovo = salario*1.05;
    }
    printf("O salario antigo e':%f\n", salario);
    printf("O salario novo e':%f\n", salarionovo);

    return 0;
}
