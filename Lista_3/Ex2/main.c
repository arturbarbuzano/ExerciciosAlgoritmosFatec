#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define b

#ifdef a

int main()
{
    int K, i;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &K);

    for(i=1;i<=K;i++)
    {
        printf("%d/%d\n", 2*i,5*i);
    }

    return 0;
}

#endif

#ifdef b
int main()
{
    int K;
    float i;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &K);

    for(i=1;i<=K;i++)
    {
        printf("%.2f\n", 0.5*i);
    }

    return 0;
}
#endif // b
