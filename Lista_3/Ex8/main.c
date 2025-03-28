#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int N, i, Peso;
    float soma=0;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        printf("Digite o peso:\n");
        scanf("%d", &Peso);
        soma+=Peso;
    }
    printf("A média dos pesos é:\n%.2f", soma/i);

    return 0;
}
