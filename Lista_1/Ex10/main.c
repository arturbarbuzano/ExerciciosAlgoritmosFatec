#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precofabrica, percentuallucro, percentualimpos, lucro, impostos, precofinal;

    printf("Digite o preco de fabrica:");
    scanf("%f", &precofabrica);

    printf("Digite o percentual de lucro:");
    scanf("%f", &percentuallucro);

    printf("Digite o percentual de imposto:");
    scanf("%f", &percentualimpos);

    lucro = precofabrica*(percentuallucro/100);

    impostos = precofabrica*(percentualimpos/100);

    precofinal = lucro + impostos + precofabrica;

    printf("%f\n", lucro);
    printf("%f\n", impostos);
    printf("%f\n", precofinal);

    return 0;
}
