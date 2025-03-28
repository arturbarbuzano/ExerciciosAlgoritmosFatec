#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int K,H,X,i, produto=1;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &K);

    for(i=0;i<K;i++)
    {
        printf("Digite o número:\n");
        scanf("%d", &H);
        produto=produto*H;
    }
    printf("O produto de todos os números é:\n%d", produto);

    return 0;
}
