#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorporhora;
    float numerodeaulas;
    float descontoinss;
    float porcentdesconto;
    float salarioliquido;
    float salariobruto;
    do
    {
        printf("Digite o valor por hora aula:\n");
        scanf("%f", &valorporhora);

    } while (valorporhora<=0);

    do
    {
        printf("Digite o numero de aulas:\n");
        scanf("%f", &numerodeaulas);

    } while(numerodeaulas<=0);

    do
    {
        printf("Digite a sua porcentagem de desconto: \n");
        scanf("%f", &porcentdesconto);
    } while(porcentdesconto!=7.5 && porcentdesconto!=9 && porcentdesconto!=12 && porcentdesconto!=14);


    if(porcentdesconto==7.5)
    {
        salariobruto = (valorporhora*numerodeaulas);
        descontoinss = salariobruto*porcentdesconto/100;
        salarioliquido = salariobruto-descontoinss;
        printf("Seu salario liquido e':%f",salarioliquido);
    }

     else if(porcentdesconto==9)
    {
        salariobruto = (valorporhora*numerodeaulas);
        descontoinss = salariobruto*porcentdesconto/100;
        salarioliquido = salariobruto-descontoinss;
        printf("Seu salario liquido e':%f",salarioliquido);

    }

    else if(porcentdesconto==12)
    {
        salariobruto = (valorporhora*numerodeaulas);
        descontoinss = salariobruto*porcentdesconto/100;
        salarioliquido = salariobruto-descontoinss;
        printf("Seu salario liquido e':%f",salarioliquido);

    }

    else if(porcentdesconto==14)
    {
        salariobruto = (valorporhora*numerodeaulas);
        descontoinss = salariobruto*porcentdesconto/100;
        salarioliquido = salariobruto-descontoinss;
        printf("Seu salario liquido e':%f",salarioliquido);

    }

    return 0;
}
