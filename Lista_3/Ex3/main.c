#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int K, i, Idade, soma=0;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &K);

    for(i=0;i<=K;i++)
    {
        printf("Digite a idade:\n");
        scanf("%d", &Idade);
        soma +=Idade;
    }
    printf("A somatória das idades é:\n%d", soma);

    return 0;
}
