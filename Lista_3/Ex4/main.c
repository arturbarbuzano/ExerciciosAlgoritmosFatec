#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int K, i, b;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada de n�meros pares:\n");
    scanf("%d", &K);

    for(i=0;i<=K;i++)
    {
        b = 2*i;
        printf("%d\n", b);
        if(i%5==0)
        {
            printf("N�mero par m�ltiplo: %d\n", b);
        }
    }

    return 0;
}
